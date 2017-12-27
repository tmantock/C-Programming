//
//  BinarySearchTree.c
//  BinarySearchTree
//
//  Created by Tevin Mantock on 12/26/17.
//  Copyright © 2017 Tevin Mantock. All rights reserved.
//

#include "BinarySearchTree.h"

Node* newNode(int data) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->data = data;
    node->left = 0;
    node->right = 0;
    
    return node;
}

void appendNode(Node** root, Node* node) {
    if (!node) return;

    if (!(*root)) {
        *root = node;
        
        return;
    }
    
    if ((*root)->data >= node->data) {
        if ((*root)->left) appendNode(&(*root)->left, node);
        else (*root)->left = node;
    } else if((*root)->data < node->data) {
        if ((*root)->right) appendNode(&(*root)->right, node);
        else (*root)->right = node;
    }
}

void inOrderTraversal(Node* root) {
    if (!root) return;

    if (root->left) inOrderTraversal(root->left);
    printf("%d \n", root->data);
    if (root->right) inOrderTraversal(root->right);
}

void destroyTree(Node* root) {
    if (!root) return;

    if (root->left) destroyTree(root->left);
    if (root->right) destroyTree(root->right);
    printf("Freeing: %p\n", root);
    free(root);
}
