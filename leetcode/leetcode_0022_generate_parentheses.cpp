//
// Created by ByteDance on 2024/3/27.
//

#include "leetcode.h"
#include "iostream"

void generateParenthesis(vector<string> &res, int left, int right, string current) {
    if (left == 0 && right ==0) {
        res.push_back(current);
        return;
    }

    if (left == right) {
        string op = current;
        op.push_back('(');
        generateParenthesis(res, left-1, right, op);
    } else if (left == 0) {
        string op = current;
        op.push_back(')');
        generateParenthesis(res, left, right-1, op);
    } else if (right == 0) {
        cout << "impossible" << endl;
        string op = current;
        op.push_back('(');
        generateParenthesis(res, left-1, right, op);
    } else {
        string op1 = current;
        op1.push_back('(');
        generateParenthesis(res, left-1, right, op1);

        string op2 = current;
        op2.push_back(')');
        generateParenthesis(res, left, right-1, op2);
    }
}

vector<string> Solution::generateParenthesis(int n) {
    vector<string> res;
    ::generateParenthesis(res, n, n, "");
    return res;
}

