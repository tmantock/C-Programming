//
//  main.cpp
//  BinarySearchTree
//
//  Created by Tevin Mantock on 12/26/17.
//  Copyright © 2017 Tevin Mantock. All rights reserved.
//

#include "BinarySearchTree.hpp"

int main(int argc, const char * argv[]) {
    BinarySearchTree bst;
    
    bst.append(5);
    bst.append(4);
    bst.append(6);
    bst.append(3);
    bst.append(7);
    
    cout << "In Order \n";
    bst.inOrderTraversal();
    cout << "Post Order \n";
    bst.postOrderTraversal();
    cout << "Pre Order \n";
    bst.preOrderTraversal();
    
    return 0;
}
