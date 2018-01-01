//
//  TreeNode.hpp
//  BinarySearchTree
//
//  Created by Tevin Mantock on 12/26/17.
//  Copyright © 2017 Tevin Mantock. All rights reserved.
//

#ifndef TreeNode_hpp
#define TreeNode_hpp

#include <iostream>

using std::cout;
using std::endl;

class TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
public:
    TreeNode(int);
    int getData();
    TreeNode* getLeft();
    TreeNode* getRight();
    void append(TreeNode*);
    void inOrder();
    void preOrder();
    void postOrder();
    ~TreeNode();
};

#endif /* TreeNode_hpp */
