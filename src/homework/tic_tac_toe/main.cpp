#include "tic_tac_toe.h"
#include<iostream>
using std::cout;	using std::cin;		using std::string;


int main() 
{
	
	TicTacToe game;
	
	int position;
	string player;
	string cont;
	TicTacToe game;
	do
	{
		cout<<"Choose player 'X' or 'O'\n";
		cin >> player;
	
		while(!(player == "X" || player ==  "O"))
			{
				cout<<"Please input 'X' or 'O'";
				cin>>player;
			}

		game.start_game(player);

		while (game.game_over() == false)
			{
				cout << "Choose a position (1-9)\n";
				cin >> position;
				game.mark_board(position);
				game.display_board();
			}	
		
		if (game.get_winner() == "C")
		{
			cout<<"\nThe game ended in a Draw\n";
		}
		else
		{
			cout<<"\nThe winner is: "<<game.get_winner()<<"\n";
		}

		cout<<"Continue? (y/n): ";
		cin>>cont;

	} while (cont == "y" || cont == "Y");	

	cout <<"\n***GAME OVER!***\n";
	return 0;
}