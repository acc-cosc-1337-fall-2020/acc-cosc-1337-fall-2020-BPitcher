//cpp
#include "tic_tac_toe_manager.h"
#include<string>
#include<vector>
#include<iostream>

using namespace std;

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
    update_winner_count(game->get_winner());
    games.push_back(std::move(game));
    
}

ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
   for (auto &game: manager.games)
    {
        out<<*game;
        out<<"Winner is: "<<game->get_winner()<<"\n";
    } 


    return out;
}

void TicTacToeManager::update_winner_count(std::string winner)
{
    if(winner == "X")
    {
        x_win++;
    }
    else if(winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
}   

void TicTacToeManager::get_winner_totals(int& x, int& o, int& t)
{
    x = x_win;
    cout<<"X Wins: "<<x<<endl;
    o = o_win;
    cout<<"O Wins: "<<o<<endl;
    t = ties;
    cout<<"Ties: "<<ties<<endl;
}