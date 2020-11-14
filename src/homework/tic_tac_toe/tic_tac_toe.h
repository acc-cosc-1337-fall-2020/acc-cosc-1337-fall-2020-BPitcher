//h
//h
#include<string>
#include<vector>
#include<iostream>
using std::string;
using std::vector;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
    public:
        TicTacToe(int s) : pegs (s*s, " "){}
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        string get_player()const{return player;}
        void display_board()const;
        string get_winner() const {return winner;};
        // Operator Overloads
        friend std::istream& operator>>(std::istream& input, TicTacToe& game);
        friend std::ostream& operator<<(std::ostream& output, const TicTacToe& game);


    protected:
        virtual bool check_column_win();
        virtual bool check_row_win();
        virtual bool check_diagonal_win();
        
        std::vector<int>pegs_3{1, 2, 3, 4, 5, 6, 7, 8 ,9};
        std::vector<int>pegs_4{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
        
        vector<string> pegs;
    
    private:
        void set_next_player();
        bool check_board_full();
        void clear_board();
        void set_winner();
        
        string player;
        string winner;
        

};
#endif

