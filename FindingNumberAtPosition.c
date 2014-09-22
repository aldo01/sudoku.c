int sudokuHelper(int puzzle[][9], int row, int column) {
    int nextNum = 1;
    /*
     * Iterate through the possible numbers for this empty cell
     * and recurse for every valid one, to test if it's part
     * of the valid solution.
     */
    for (; nextNum<10; nextNum++) {
        if(isValid(nextNum, puzzle, row, column)) {
            puzzle[row][column] = nextNum;
            if (column == 8) {
                if (sudokuHelper(puzzle, row+1, 0)) return 1;
            } else {
                if (sudokuHelper(puzzle, row, column+1)) return 1;
            }
            // We failed to find a valid value for this 
            puzzle[row][column] = 0;
        }
    }
