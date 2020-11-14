#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"

#include<utility>
#include<memory>
#include<iostream>
using std::cout;	using std::cin;		using std::string;


int main() 
{
	std::unique_ptr<TicTacToe> game;
	TicTacToeManager manager;

	int position;
	string player;
	string cont;
	int gametype = 0;

	do
	{
		cout<<"Choose player 'X' or 'O'\n";
		cin >> player;
	
		while(!(player == "X" || player ==  "O"))
		{
			cout<<"Please input 'X' or 'O'";
			cin>>player;
		}

		
		while(gametype = 0)
		{
			cout << "Enter '3' for a 3x3 board or '4' for a 4x4 board";
			cin >> gametype;

			while (gametype != 3 && gametype != 4)
			{
				cout << "Invalid input. Please enter '3' or '4'";
				cin >> gametype;
			}

			if (gametype == 3)
			{
				game == std::make_unique<TicTacToe3>();
			}
			else if (gametype == 4)
			{
				game = std::make_unique<TicTacToe4>();
			}
			else
			{
				cout<<"Invalid input\n";
			}
		}
		
		game->start_game(player);
		cout<<"\n";

		while (game->game_over() == false)
		{
			cin >>* game;
			cout <<* game;
		}	
		
		if (game->get_winner() == "C")
		{
			cout<<"\nThe game ended in a Draw\n";
		}
		else
		{
			cout<<"\nThe winner is: "<<game->get_winner()<<"\n";
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