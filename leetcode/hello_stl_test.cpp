//
// Created by ByteDance on 2024/3/12.
//
#include "gtest/gtest.h"
#include <queue>
#include <algorithm>
#include <vector>

struct cmp {
    bool operator()(int a, int b) {
        return a < b;
    }

};

TEST(STL_demo, Empty) {
    std::priority_queue<int, std::vector<int>, cmp> maxHeap;

    maxHeap.push(3);
    maxHeap.push(1);
    maxHeap.push(4);

    while (!maxHeap.empty()) {
        std::cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
}

bool compare(int a, int b) {
    return a < b;
}

TEST(STL_sort, Empty) {
    int a[] = {
            1, 2 ,3 , 4};
    std::sort(a, a + 4, compare);
}

TEST(Vector, Empty) {
    std::vector<int> a;
    a.push_back(1);
    std::cout << a.back() << " ";
}
