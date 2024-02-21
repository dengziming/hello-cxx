//
// Created by ByteDance on 2024/2/7.
//

#include "gtest/gtest.h"
#include "leetcode.h"

TEST(Leetcode2614Test, Empty) {
    Solution solution;
    TreeNode array[3] = {TreeNode(1), TreeNode(10), TreeNode(7)};
    TreeNode left(4, &array[0], &array[1]);
    TreeNode right(9, nullptr, &array[2]);
    TreeNode treeNode(5, &left, &right);
    solution.replaceValueInTree(&treeNode);

    ASSERT_EQ(0, treeNode.val);
    ASSERT_EQ(0, treeNode.left->val);
    ASSERT_EQ(0, treeNode.right->val);

    ASSERT_EQ(7, treeNode.left->left->val);
    ASSERT_EQ(7, treeNode.left->right->val);
    ASSERT_EQ(nullptr, treeNode.right->left);
    ASSERT_EQ(11, treeNode.right->right->val);
}
