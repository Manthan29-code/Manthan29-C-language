
# Tic-Tac-Toe Game in C

## Overview of the Code

The code is a basic implementation of the Tic-Tac-Toe game in C. It allows two players to take turns choosing positions on a 3x3 board. The program checks for a winner after each move and displays the updated game board. If a player wins, the game ends, and the winner is announced.

## Functions in the Code

### `display_board(char p[3][3])`

- **Description**: This function takes the current state of the game board as a 3x3 character array and displays it on the screen. It visually represents the board to the players after each move.
- **Parameters**: 
  - `p[3][3]`: The 3x3 game board array containing the current state of the game.

### `update_board(char p[3][3], int a, int b, int pl)`

- **Description**: This function updates the game board based on the player's chosen position. It marks the position with the player's symbol (`*` for Player 1 and `@` for Player 2).
- **Parameters**:
  - `p[3][3]`: The 3x3 game board array.
  - `a`: The row selected by the player.
  - `b`: The column selected by the player.
  - `pl`: The player number (1 or 2).
- **Returns**: Returns 1 if the move is valid, and 0 if the selected position is already occupied.

### `winner(char a[3][3], int p)`

- **Description**: This function checks if the current player has won the game by forming a horizontal, vertical, or diagonal line on the board.
- **Parameters**:
  - `a[3][3]`: The 3x3 game board array.
  - `p`: The player number (1 or 2).
- **Returns**: Returns 1 if the current player has won, and 0 otherwise.

## `main` Function

- **Description**: The main function initializes the game board and manages the game loop. It prompts players to enter their move, updates the board, checks for a winner, and alternates turns between the two players. The game continues until a winner is determined or all positions on the board are filled.
