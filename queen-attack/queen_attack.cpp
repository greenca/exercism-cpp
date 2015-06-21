#include "queen_attack.h"
#include <stdexcept>
#include <cmath>

namespace queen_attack
{
chess_board::chess_board(std::pair<int,int> wpos, std::pair<int,int> bpos) {
    if (wpos == bpos) {
        throw std::domain_error("Queen positions must be distinct");
    }
    white_pos = wpos;
    black_pos = bpos;
}

std::string chess_board::print_board() const {
    std::string board;
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            if (std::make_pair(row, col) == white_pos) {
                board += "W";
            } else if (std::make_pair(row, col) == black_pos) {
                board += "B";
            } else {
                board += "_";
            }
            if (col < 7) {
                board += " ";
            }
        }
        board += "\n";
    }
    return board;
}

bool chess_board::can_attack() const {
    if (white_pos.first == black_pos.first) return true;
    if (white_pos.second == black_pos.second) return true;
    if (std::abs(white_pos.first - black_pos.first) == std::abs(white_pos.second - black_pos.second)) return true;
    return false;
}
}
