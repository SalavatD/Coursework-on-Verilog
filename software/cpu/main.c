#include "main.h"

struct Point {
    uint8_t x;
    uint8_t y;
};

int main() {
    struct Point snakeTail[SIZE_XY];
    for (int i = 0; i < SIZE_XY; i++) {
        snakeTail[i].x = 255u;
    }

    uint8_t gameOver = false;

    uint8_t movement;

    struct Point apple = { SIZE_X / 4, SIZE_Y / 4 };
    struct Point snakeHead = { SIZE_X / 2, SIZE_Y / 2 };
    struct Point erace = { SIZE_X / 2, SIZE_Y / 2 - 3 };
    uint8_t score = 0;

    snakeTail[0].x = snakeHead.x;
    snakeTail[0].y = snakeHead.y;

    snakeTail[1].x = snakeHead.x;
    snakeTail[1].y = snakeHead.y - 1;

    snakeTail[2].x = snakeHead.x;
    snakeTail[2].y = snakeHead.y - 2;

    while (true) {
        movement = IORD_ALTERA_AVALON_PIO_DATA(MOVEMENT_I_BASE);

        for (int i = 0; i < SIZE_XY - 1; i++) {
            if (snakeTail[i + 1].x == 255u) {
                erace.x = snakeTail[i].x;
                erace.y = snakeTail[i].y;
                break;
            }
        }

        switch (movement) {
        case MOVEMENT_UP:
            snakeHead.y = (snakeHead.y > 0) ? snakeHead.y - 1 : SIZE_Y - 1;
            break;
        case MOVEMENT_DOWN:
            snakeHead.y = (snakeHead.y < SIZE_Y - 1) ? snakeHead.y + 1 : 0;
            break;
        case MOVEMENT_RIGHT:
            snakeHead.x = (snakeHead.x < SIZE_X - 1) ? snakeHead.x + 1 : 0;
            break;
        case MOVEMENT_LEFT:
            snakeHead.x = (snakeHead.x > 0) ? snakeHead.x - 1 : SIZE_X - 1;
        }

        for (int i = SIZE_XY - 1; i > 0; i--) {
            if (snakeTail[i].x != 255u) {
                snakeTail[i].x = snakeTail[i - 1].x;
                snakeTail[i].y = snakeTail[i - 1].y;
            }
        }
        snakeTail[0].x = snakeHead.x;
        snakeTail[0].y = snakeHead.y;

        if (snakeHead.x == apple.x && snakeHead.y == apple.y) {
            regenerate: ;
            apple.x = rand() % SIZE_X;
            apple.y = rand() % SIZE_Y;
            for (int i = 0; i < SIZE_XY - 1; i++) {
                if ((snakeTail[i].x == apple.x) && (snakeTail[i].y == apple.y)) {
                    goto regenerate;
                }
            }
            for (int i = SIZE_XY - 1; i > 0; i--) {
                snakeTail[i].x = snakeTail[i - 1].x;
                snakeTail[i].y = snakeTail[i - 1].y;
            }
            snakeTail[0].x = snakeHead.x;
            snakeTail[0].y = snakeHead.y;
            score++;
        }

        for (int i = 2; i < SIZE_XY - 1; i++) {
            if ((snakeTail[i].x == snakeHead.x) && (snakeTail[i].y == snakeHead.y)) {
                gameOver = true;
            }
        }

        if (gameOver) {
            gameOver = false;

            for (int i = 0; i < SIZE_XY; i++) {
                snakeTail[i].x = 255u;
            }

            apple.x = SIZE_X / 4;
            apple.y = SIZE_Y / 4;

            snakeHead.x = SIZE_X / 2;
            snakeHead.y = SIZE_Y / 2;

            erace.x = SIZE_X / 2;
            erace.y = SIZE_X / 2 - 3;

            snakeTail[0].x = snakeHead.x;
            snakeTail[0].y = snakeHead.y;

            snakeTail[1].x = snakeHead.x;
            snakeTail[1].y = snakeHead.y - 1;

            snakeTail[2].x = snakeHead.x;
            snakeTail[2].y = snakeHead.y - 2;

            score = 0;

            IOWR_ALTERA_AVALON_PIO_DATA(SCORE_O_BASE, 255u);
        }

        IOWR_ALTERA_AVALON_PIO_DATA(APPLE_O_BASE, ((uint16_t) apple.x) << 8 | apple.y);
        IOWR_ALTERA_AVALON_PIO_DATA(SNAKE_HEAD_O_BASE, ((uint16_t) snakeHead.x) << 8 | snakeHead.y);
        IOWR_ALTERA_AVALON_PIO_DATA(ERACE_O_BASE, ((uint16_t) erace.x) << 8 | erace.y);
        IOWR_ALTERA_AVALON_PIO_DATA(SCORE_O_BASE, score);

        for (int delay = 0; delay < DELAY; delay++)
            ;
    }
    return 0;
}
