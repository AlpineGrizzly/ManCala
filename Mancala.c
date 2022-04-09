#include<stdio.h>
/*Function will take in an integer that represents the number corresponding
 * to the player (1 or 2). Will decide if input from getMove function is valid. 
 * Return true if move is valid and has been made
 * Return false if move is not valid and ask for another move */

int getMove(int player)
{	
	printf("P%d please select 1-6 to move your piece...\n", player);
	int move = 0;
	scanf("%1d", &move);
	printf("P%d has moved area %d\n", player, move);
	return move;
}

//Set the move of the player
void setMove(int player, int move) {
	if(player == 1) {
		//Get how many pieces are in the spot
		//Set spot to 0
		//Iterate through board dropping pieces along the way
		//If turn ended on Player 1's score bin, another turn
		//End turn if on player 2's side
		//else, if back on player 1's side, check to see if 1 in current, if so
		//check to see if there are pieces on player 2's side, if so
		//Take pieces from current pocket, and player 2's pocket and add to Player 1's score bin
		//End turn
	}else{

	}
	printf("%d has moved %d\n", player, move);
}


int printBoard(int board[]) 
{
	for(int i = 0; i < 14; i++) {
		if(i == 0 || i == 13) {
			printf("\n          %d\n", board[i]);	
		} else {
			printf("      %d ", board[i]);
			if(i % 2 == 0) {
				printf("\n");
			}
		}

	}
	printf("  P1              P2\n");
	return 0;

}

//Takes in the board as a parameter, sets board up to be played again
void setBoard(int board[]) {
	for(int i = 0; i < 14; i++) {
		if(i == 0 || i == 13) {
			board[i] = 0;
		}else{
			board[i] = 4;
		}
	}

}

int main() //Main function of the program
{
	int gameOver = 0;
	const int SIZE = 14;
	int board[SIZE];
	setBoard(board);
	while(gameOver == 0) {
		printf("\n        Mancala \n   by Dalton && Katey \n------------------------\n");
		printBoard(board);
		//Get Input from first player (youngest)
		int firstPlayer = getMove(1);
        	int secondPlayer = getMove(2);
		
	}
	return 0;

}
