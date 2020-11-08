//h
#include "tic_tac_toe.h"
#include<vector>
#include<iostream>
#include<string>

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

using std::string;

class TicTacToeManager
{
    public:
        void save_game(const TicTacToe b);
        friend void operator <<(std::ostream& out, const TicTacToeManager& manager);
        void get_winner_totals(int& x, int& o, int& t);
    
    private:
        std::vector<TicTacToe> games;
        int x_win = 0;
        int o_win = 0;
        int ties = 0;
        void update_winner_count(std::string winner);
        
};

#endif