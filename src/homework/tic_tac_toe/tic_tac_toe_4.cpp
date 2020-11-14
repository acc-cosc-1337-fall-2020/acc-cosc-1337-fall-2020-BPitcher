#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/
bool TicTacToe4::check_column_win()
{
    // Here the vector has 16 elements
    for (std::size_t i = 0; i < 4; ++i)
    {
        if (pegs[i] == "x" && pegs[i+4] == "x" && pegs[i+8] == "x" && pegs[i+12] == "x")
        {
            return true;
        }
        else if(pegs[i] == "o" && pegs[i+4] == "o" && pegs[i+8] == "o" && pegs[i+12] == "o")
        {
            return true;
        }
    } 
    return false;
}



/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/
bool TicTacToe4::check_row_win()
{ // Still needs to be modified to be 4X4
    for (std::size_t i = 0; i < pegs.size(); i+=4)
    {
        if (pegs[i] == "x" && pegs[i+1] == "x" && pegs[i+2] == "x" && pegs[i+3] == "x")
        {
            return true;
        }
        else if(pegs[i] == "o" && pegs[i+1] == "o" && pegs[i+2] == "o" && pegs[i+3] == "x")
        {
            return true;
        }
    } 
    return false;
}


/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/
bool TicTacToe4::check_diagonal_win()
{
    if (pegs[0] == "x" && pegs[5] == "x" && pegs[10] == "x" && pegs[15] == "x")
    {
        return true;
    }
    else if(pegs[0] == "o" && pegs[5] == "o" && pegs[10] == "o" && pegs[15] == "o")
    {
        return true;
    }
    else if(pegs[12] == "x" && pegs[9] == "x" && pegs[6] == "x" && pegs[3] == "x")
    {
        return true;
    }
    else if(pegs[12] == "o" && pegs[9] == "o" && pegs[6] == "o" && pegs[3] == "x")
    {
        return true;
    }
    return false;
}