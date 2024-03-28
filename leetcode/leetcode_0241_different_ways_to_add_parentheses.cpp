//
// Created by ByteDance on 2024/3/27.
//

#include "leetcode.h"
#include "iostream"

int diffWaysToCompute_Op(char op, int i, int j) {
    if (op == '+') {
        return i+j;
    } else if (op == '-') {
        return i-j;
    } else {
        return i*j;
    }
}

void diffWaysToCompute(vector<int> ints, vector<char> ops, vector<int> & res, string expression, int index) {
    // Finished the computation
    cout << "start: " ;
    for (int i =0 ; i < ops.size(); i++) {
        cout << ints[i] << ops[i];
    }
    cout << ints[ints.size()-1] << " ";
    cout << expression.substr(index) << endl;

    if (index == expression.size() && ops.empty()) {
        cout <<"success " << ints[0] << endl;
        res.push_back(ints[0]);
        return;
    }
    if (index == expression.size()) {
        // we can only pop
        cout << "pop1: " << ints[ints.size()-2] << ops[ops.size()-1] << ints[ints.size()-1] << endl;
        vector<int> ints1 = ints;
        ints1.pop_back();
        ints1.pop_back();

        vector<char> ops1 = ops;
        ops1.pop_back();
        ints1.push_back(diffWaysToCompute_Op(ops[ops.size()-1], ints[ints.size()-2], ints[ints.size()-1]));
        diffWaysToCompute(ints1, ops1, res, expression, index);
    } else {

        if (!ops.empty()) {
            cout << "pop2: " << ints[ints.size()-2] << ops[ops.size()-1] << ints[ints.size()-1] << endl;
            vector<int> ints2 = ints;
            ints2.pop_back();
            ints2.pop_back();
            vector<char> ops2 = ops;
            ops2.pop_back();
            ints2.push_back(diffWaysToCompute_Op(ops[ops.size()-1], ints[ints.size()-2], ints[ints.size()-1]));
            diffWaysToCompute(ints2, ops2, res, expression, index);
        }

        char op = expression[index];
        index++;
        int v = 0;
        while (index < expression.size() && isdigit(expression[index])) {
            v = v * 10 + (expression[index] - '0');
            index++;
        }

        cout << "push1: " << op << v<< endl;

        // We can pop/push
        vector<int> ints1 = ints;
        ints1.push_back(v);
        vector<char> ops1 = ops;
        ops1.push_back(op);
        diffWaysToCompute(ints1, ops1, res, expression, index);
    }
}

vector<int> Solution::diffWaysToCompute(string expression) {
    // the simplest way, certainly, is recursive. however, I want to try another way.
    if (expression.empty()) {
        return {};
    } else {
        vector<int> res;
        int index = 0;
        int v = 0;
        while (index < expression.size() && isdigit(expression[index])) {
            v = v * 10 + (expression[index] - '0');
            index++;
        }
        ::diffWaysToCompute({v}, {}, res, expression, index);
        return res;
    }
}
