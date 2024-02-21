//
// Created by ByteDance on 2024/2/7.
//

#include <vector>
#include <queue>
#include "leetcode.h"

TreeNode* Solution::replaceValueInTree(TreeNode* root) {
    if (root == nullptr) {
        return root;
    }
    std::queue<TreeNode*> q;
    q.push(root);
    std::vector<int> v;
    int ans=root->val;
    while(!q.empty()){
        int sz=q.size(); int sum=0;
        for(int i=0;i<sz;i++){
            auto p=q.front(); q.pop();
            p->val=ans-p->val;
            if(p->left){  q.push(p->left); sum+=p->left->val; }
            if(p->right) { q.push(p->right); sum+=p->right->val; }
            if(p->left&&p->right){
                int x=p->right->val+p->left->val;
                p->left->val=x;
                p->right->val=x;
            }
        }
        ans=sum;
    }
    return root;
}
