/*
 * Checks to see if a particular value is presently valid in a
 * given position.
 */
int isValid(int number, int puzzle[][9], int row, int column) {
    int i=0;
    int sectorRow = 3*(row/3);
    int sectorCol = 3*(column/3);
    int row1 = (row+2)%3;
    int row2 = (row+4)%3;
    int col1 = (column+2)%3;
    int col2 = (column+4)%3;
 
    /* Check for the value in the given row and column */
    for (i=0; i<9; i++) {
        if (puzzle[i][column] == number) return 0;
        if (puzzle[row][i] == number) return 0;
    }
 
    /* Check the remaining four spaces in this sector */
    if(puzzle[row1+sectorRow][col1+sectorCol] == number) return 0;
    if(puzzle[row2+sectorRow][col1+sectorCol] == number) return 0;
    if(puzzle[row1+sectorRow][col2+sectorCol] == number) return 0;
    if(puzzle[row2+sectorRow][col2+sectorCol] == number) return 0;
    return 1;
}
