/**
 * tic-tac-toe.c
 * Author:  Mark Robrigado
 * Date:    12 December 2022
 * Description: This program lets you play tic-tac-toe on 3x3 grid.
 *       
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// Initialize char array for the board.
char coords[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int move, player;

// Function prototypes
void drawBoard();
void markBoard(char mark);
int checkGameStatus();

int main() {

    // Variable declaration
    char mark; 
    int gameStatus;
    player = 1;

    // Loop through the game until winner is declared or board is filled.
    do {
        // Output the game board with 3x3 grid.
        drawBoard();

        // Determine the current player.
        player = (player % 2) ? 1 : 2;

        // Prompt the user to input a number.
        printf("Player %d, enter a number: ", player);
        scanf("%d", &move);

        // Decrement the move by one for coords[] index.
        --move;

        // If player == 1, mark board with X else O.
        mark = (player == 1) ? 'X' : 'O';

        // Mark the board and check if move is valid.
        markBoard(mark);

        // Move to the next player.
        player++;

        // Check for winners or if board is filled.
        gameStatus = checkGameStatus();

    } while (gameStatus == 0);
    
    // Output the final board.
    drawBoard();

    // Output the result of the game.
    if (gameStatus == 1) {
        printf("Player %d is the winner!", --player);
    } else {
        printf("It's a draw!");
    }

    return 0;
}

/**
 * Sets the char array coords[] and checks
 * if player move is a valid move.
 * 
*/
void markBoard(char mark) {

    // If player move contains X or O or is less than 0 and greater than 9, move is invalid.
    if (coords[move] == 'X' || coords[move] == 'O' || move < 0 || move > 8) {

        //Output invalid move and wait for a keyboard response.
        player--;
        printf("Invalid move.");
        getch();
    
    // If move is valid, mark the board and move to next player.
    } else {
        coords[move] = mark;
    }
}

/**
 * Checks the status of the game and outputs 
 * 1 if winner is declared, 0 if the game is
 * still in progrss, and -1 if board is filled
 * with no winner.
 *
*/
int checkGameStatus() {
    
    int gameOver;

    // Look for 3 consecutive marks.
    if (coords[0] == coords[1] && coords[1] == coords[2]) {
        gameOver = 1;
    } else if (coords[0] == coords[3] && coords[3] == coords[6]) {
        gameOver = 1;
    } else if (coords[0] == coords[4] && coords[4] == coords[8]) {
        gameOver = 1;
    } else if (coords[1] == coords[4] && coords[4] == coords[7]) {
        gameOver = 1;
    } else if (coords[2] == coords[4] && coords[4] == coords[6]) {
        gameOver = 1;
    } else if (coords[2] == coords[5] && coords[5] == coords[8]) {
        gameOver = 1;
    } else if (coords[3] == coords[4] && coords[4] == coords[5]) {
        gameOver = 1;
    } else if (coords[6] == coords[7] && coords[7] == coords[6]) {
        gameOver = 1;
    
    // If board is filled the result is a draw.
    } else if (coords[0] != '1' && coords[1] != '2' && coords[2] != '3' &&
               coords[3] != '4' && coords[4] != '5' && coords[5] != '6' &&
               coords[6] != '7' && coords[7] != '8' && coords[8] != '9') {
        gameOver = -1;

    // Game is still in progess.
    } else {
        gameOver = 0;
    }
    
    return gameOver;
}

/**
 * Clears the screen and outputs the game 
 * board with 3x3 grid.
 * 
*/
void drawBoard() {

    // Clear the screen.
    system("cls");

    // 
    printf("\t   TIC-TAC-TOE\n\n");
    printf("   Player 1 (x) - Player 2 (o)\n");
    printf("  Input a number between 1 - 9\n\n");

    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c  \n", coords[0], coords[1], coords[2]);
    printf("\t_____|_____|_____\n");
    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c  \n", coords[3], coords[4], coords[5]);
    printf("\t_____|_____|_____\n");
    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c  \n", coords[6], coords[7], coords[8]);
    printf("\t     |     |     \n\n");

    return;
}
