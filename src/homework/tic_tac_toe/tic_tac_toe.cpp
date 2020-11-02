//cpp
//cpp
#include "tic_tac_toe.h"
#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::cin;

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

bool TicTacToe::game_over()
{
    if (check_column_win() || check_diagonal_win() || check_row_win())
    {
        set_winner();
        return true;
    }
    else if (check_board_full())
    {
        winner = "C";
        return true;
    }
    return false;
    
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

void TicTacToe::display_board()const
{
   for(std::size_t i=0; i < pegs.size(); i += 3)
    {
        std::cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    
    else
    {
        player = "X";
    }

}

string TicTacToe::get_winner()
{
    return winner;
}

bool TicTacToe::check_board_full()
{
    for(auto i: pegs)
    {
        if(i == " ")
        {
            return false;
        }
    }
    return true;

}

void TicTacToe::clear_board()
{
    pegs = {" "," "," "," "," "," "," "," "," "};
}

bool TicTacToe::check_column_win()
{
  if ((pegs[0] != " " && pegs[0] == pegs[3] && pegs[0] == pegs[6])
    || (pegs[1] != " " && pegs[1] == pegs[4] && pegs[1] == pegs[7])
    || (pegs[2] != " " && pegs[2] == pegs[5] && pegs[2] == pegs[8]))
    {
        return true;
    }
    return false;
}

bool TicTacToe::check_row_win()
{
  if ((pegs[0] != " " && pegs[0] == pegs[1] && pegs[0] == pegs[2])
    || (pegs[3] != " " && pegs[3] == pegs[4] && pegs[3] == pegs[5])
    || (pegs[6] != " " && pegs[6] == pegs[7] && pegs[6] == pegs[8]))
    {
        return true;
    }
    return false;
}

bool TicTacToe::check_diagonal_win()
{
  if ((pegs[0] != " " && pegs[0] == pegs[4] && pegs[0] == pegs[8])
    || (pegs[2] != " " && pegs[2] == pegs[4] && pegs[2] == pegs[6]))
    {
        return true;
    }
  return false;
}

void TicTacToe::set_winner()
{
  if (player == "X")
  {
    winner = "O";
    return;
  }
  winner = "X";
} 