//
//  BinarySearchTree.h
//  BinarySearchTree
//
//  Created by Tevin Mantock on 12/26/17.
//  Copyright © 2017 Tevin Mantock. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

typedef struct BinarySearchTree {
    Node* root;
} BinarySearchTree;

Node* newNode(int);
void appendNode(Node**, Node*);
void inOrderTraversal(Node*);
void destroyTree(Node*);

#endif /* BinarySearchTree_h */
