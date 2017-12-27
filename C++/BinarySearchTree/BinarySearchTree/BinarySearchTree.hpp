//
//  BinarySearchTree.hpp
//  BinarySearchTree
//
//  Created by Tevin Mantock on 12/26/17.
//  Copyright © 2017 Tevin Mantock. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include "TreeNode.hpp"

class BinarySearchTree {
    TreeNode* root;
public:
    BinarySearchTree();
    void append(int);
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    ~BinarySearchTree();
};

#endif /* BinarySearchTree_h */
