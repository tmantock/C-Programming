//
//  BinarySearchTree.cpp
//  BinarySearchTree
//
//  Created by Tevin Mantock on 12/26/17.
//  Copyright © 2017 Tevin Mantock. All rights reserved.
//

#include "BinarySearchTree.hpp"

BinarySearchTree::BinarySearchTree() {
    root = nullptr;
}

void BinarySearchTree::append(int data) {
    TreeNode* node = new TreeNode(data);
    
    if (!root) {
        root = node;
        
        return;
    }
    
    root->append(node);
}

void BinarySearchTree::inOrderTraversal() {
    if (!root) return;
    
    root->inOrder();
}

void BinarySearchTree::preOrderTraversal() {
    if (!root) return;
    
    root->preOrder();
}

void BinarySearchTree::postOrderTraversal() {
    if (!root) return;
    
    root->postOrder();
}

BinarySearchTree::~BinarySearchTree() {
    delete root;
}
