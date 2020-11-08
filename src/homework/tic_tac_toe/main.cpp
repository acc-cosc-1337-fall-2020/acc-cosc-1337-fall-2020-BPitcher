#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
using std::cout;	using std::cin;		using std::string;


int main() 
{
		
	int position;
	string player;
	string cont;
	TicTacToe game;
	TicTacToeManager manager;

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
			cin >> game;
			cout << game;
		}	
		
		if (game.get_winner() == "C")
		{
			cout<<"\nThe game ended in a Draw\n";
		}
		else
		{
			cout<<"\nThe winner is: "<<game.get_winner()<<"\n";
		}

		int o;
		int x;
		int t;
		
		manager.save_game(game);
		manager.get_winner_totals(o, x, t);

		cout<<"Continue? (y/n): ";
		cin>>cont;

	} while (cont == "y" || cont == "Y");	

	cout << manager;
	cout <<"\n***GAME OVER!***\n";
	return 0;
}