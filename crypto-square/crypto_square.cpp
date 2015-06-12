#include "crypto_square.h"
#include <cctype>
#include <cmath>

namespace crypto_square
{
cipher::cipher(const std::string& str) {
    for (std::string::const_iterator it = str.begin();
            it != str.end(); ++it) {
        if (isalnum(*it)) {
            _norm += tolower(*it);
        }
    }
    _size = ceil(sqrt(_norm.length()));
}

std::vector<std::string> cipher::plain_text_segments() {
    std::vector<std::string> segments;
    int rows = ceil((float)_norm.length()/_size);
    for (int i = 0; i < rows; i++) {
        segments.push_back(_norm.substr(i*_size, _size));
    }
    return segments;
}

std::string cipher::cipher_text() {
    std::vector<std::string> segments = plain_text_segments();
    std::string ciph;
    for (int i = 0; i < _size; i++) {
        for (std::vector<std::string>::iterator it = segments.begin();
                it != segments.end(); ++it) {
            if (i < (*it).length()) {
                ciph += (*it)[i];
            }
        }
    }
    return ciph;
}

std::string cipher::normalized_cipher_text() {
    std::string ciph = cipher_text();
    std::string norm_ciph;
    int words = ceil((float)ciph.length()/_size);
    for (int i = 0; i < words; i++) {
        if (i > 0) {
            norm_ciph += " ";
        }
        norm_ciph += ciph.substr(i*_size, _size);
    }
    return norm_ciph;
}
}
