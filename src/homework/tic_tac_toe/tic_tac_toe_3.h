//h
#include "tic_tac_toe.h"
#include<vector>
#include<string>

#ifndef TIC_TAC_TOE_3
#define TIC_TAC_TOE_3

bool test_config();

class TicTacToe3 : public TicTacToe 
{

    public:
        TicTacToe3() : TicTacToe(3){}
    private:
        bool check_column_win() override;
        bool check_row_win() override;
        bool check_diagonal_win() override;
};

#endif
