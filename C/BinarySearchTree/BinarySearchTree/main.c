//
//  main.c
//  BinarySearchTree
//
//  Created by Tevin Mantock on 12/26/17.
//  Copyright © 2017 Tevin Mantock. All rights reserved.
//

#include "BinarySearchTree.h"

int main(int argc, const char * argv[]) {
    BinarySearchTree bst;
    appendNode(&bst.root, newNode(5));
    appendNode(&bst.root, newNode(4));
    appendNode(&bst.root, newNode(6));
    
    inOrderTraversal(bst.root);
    
    destroyTree(bst.root);
    return 0;
}
