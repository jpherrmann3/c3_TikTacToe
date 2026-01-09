#include "board.h"

void board_init(Board *board) {
    for (int r=0; r<BOARD_SIZE; r++){
        for (int c=0; c<BOARD_SIZE; c++){
            board->cells[r][c] = CELL_EMPTY;
        }
    }
}