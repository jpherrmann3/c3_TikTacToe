#ifndef BOARD_H
#define BOARD_H

#define BOARD_SIZE 3

typedef enum{
    CELL_EMPTY,
    CELL_X,
    CELL_O
} Cell;

typedef struct {
    Cell cells[BOARD_SIZE][BOARD_SIZE];
} Board;

void board_init(Board *board);
int board_place(Board *board, int row, int col, Cell value);
int board_is_full(const Board *board);

#endif