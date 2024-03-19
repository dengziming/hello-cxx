//
// Created by ByteDance on 2024/3/19.
//

#include "leetcode.h"
#include <string>

using namespace std;

string Solution::convert(std::string s, int numRows) {
    if (numRows < 2) {
        return s;
    }
    string result;
    for (int line = 0; line < numRows; ++line) {
        int round = s.length() / (numRows * 2 - 2);
        for (int j = 0; j <= round; ++j) {
            if (line == 0 || line == numRows-1) {
                // 第一行和最后一行只有一个字母
                if (j *(numRows * 2 - 2) + line < s.size()) {
                    result = result + s[j *(numRows * 2 - 2) + line];
                }
            } else {
                if (j *(numRows * 2 - 2) + line < s.size()) {
                    result = result + s[j *(numRows * 2 - 2) + line];
                }
                if ((j+1) *(numRows * 2 - 2) - line < s.size()) {
                    result = result + s[(j+1) *(numRows * 2 - 2) - line];
                }
            }
        }
    }
    return result;
}