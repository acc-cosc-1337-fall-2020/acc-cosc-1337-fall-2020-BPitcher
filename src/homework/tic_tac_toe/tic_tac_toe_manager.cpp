//cpp
#include "tic_tac_toe_manager.h"
#include<string>
#include<vector>
#include<iostream>

using namespace std;

void TicTacToeManager::save_game(TicTacToe game)
{
    games.push_back(game);
    string winner = game.get_winner();
    cout<<"Tbe save_game() winner is = "<<winner<<endl;
    update_winner_count(winner);
}

void operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for(TicTacToe game : manager.games)
    {
        out<<game;
        out<<std::endl;
    }
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