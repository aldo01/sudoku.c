int sudokuHelper(int puzzle[][9], int row, int column) {
    int nextNum = 1;
    if (9 == row) {
        return 1;
    }
 
    /*
     * Is this element already set?  If so, we don't want to 
     * change it.  Recur immediately to the next cell.
     */
    if (puzzle[row][column]) {
        if (column == 8) {
            if (sudokuHelper(puzzle, row+1, 0)) return 1;
        } else {
            if (sudokuHelper(puzzle, row, column+1)) return 1;
        }
        return 0;
    }
    /* loop iteration from above */
}
