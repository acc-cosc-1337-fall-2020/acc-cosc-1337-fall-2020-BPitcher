//h
#include "tic_tac_toe.h"
#include<vector>
#include<iostream>
#include<string>
#include<memory>
#include<utility>

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

using std::string;  using std::ostream;
using std::unique_ptr;  using std::vector;

class TicTacToeManager
{
    public:
        void update_winner_count(string);
        void save_game(unique_ptr<TicTacToe>& game);
        friend ostream& operator <<(std::ostream& out, const TicTacToeManager& manager);
        void get_winner_totals(int& x, int& o, int& t);
    
    private:
        vector<unique_ptr<TicTacToe>> games;

        int x_win = 0;
        int o_win = 0;
        int ties = 0;
        
        void update_winner_count(std::string winner);
        
};

#endif