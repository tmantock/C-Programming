//
//  TreeNode.cpp
//  BinarySearchTree
//
//  Created by Tevin Mantock on 12/26/17.
//  Copyright © 2017 Tevin Mantock. All rights reserved.
//

#include "TreeNode.hpp"

TreeNode::TreeNode(int d) {
    data = d;
    left = right = nullptr;
}

int TreeNode::getData() {
    return data;
}

TreeNode* TreeNode::getLeft() {
    return left;
}

TreeNode* TreeNode::getRight() {
    return right;
}

void TreeNode::append(TreeNode * node) {
    if (data < node->getData()) {
        if (right) right->append(node);
        else right = node;
    } else if (data >= node->getData()) {
        if (left) left->append(node);
        else left = node;
    }
}

void TreeNode::inOrder() {
    if (left) left->inOrder();
    cout << data << endl;
    if (right) right->inOrder();
}

void TreeNode::preOrder() {
    cout << data << endl;
    if (left) left->preOrder();
    if (right) right->preOrder();
}

void TreeNode::postOrder() {
    if (left) left->postOrder();
    if (right) right->postOrder();
    cout << data << endl;
}

TreeNode::~TreeNode() {
    if (left) delete left;
    if (right) delete right;
    cout << "Deleting " << data << endl;
}
