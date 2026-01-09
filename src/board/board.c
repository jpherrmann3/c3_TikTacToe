#include "board.h"

// Initialize the board by setting all cells to CELL_EMPTY
void board_init(Board *board) {
    for (int r=0; r<BOARD_SIZE; r++){
        for (int c=0; c<BOARD_SIZE; c++){
            board->cells[r][c] = CELL_EMPTY;
        }
    }
}

// Place a value (CELL_X or CELL_O) at the specified row and column
int board_place(Board *board, int row, int col, Cell value) {
    if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE) {
        return -1; // Out of bounds
    }
    if (board->cells[row][col] != CELL_EMPTY) {
        return -1; // Cell already occupied
    }
    board->cells[row][col] = value;
    return 0; // Success
}

int board_is_full(const Board *board){
    for (int r=0; r < BOARD_SIZE; r++){
        for (int c = 0; c < BOARD_SIZE; c++){
            if (board->cells[r][c] == CELL_EMPTY){
                return 0; // Found an empty cell
            }
        }
    }
    return 1; // No empty cells found, board is full
}