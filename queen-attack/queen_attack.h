#ifndef QUEEN_ATTACK_H
#define QUEEN_ATTACK_H

#include <utility>
#include <string>

namespace queen_attack
{
class chess_board {
    std::pair<int,int> white_pos;
    std::pair<int,int> black_pos;
public:
    chess_board(std::pair<int,int> wpos = std::make_pair(0,3), std::pair<int,int> bpos = std::make_pair(7, 3));
    std::pair<int,int> white() const {
        return white_pos;
    }
    std::pair<int,int> black() const {
        return black_pos;
    }
    operator std::string() const {
        return print_board();
    }
    std::string print_board() const;
    bool can_attack() const;
};
}

#endif
