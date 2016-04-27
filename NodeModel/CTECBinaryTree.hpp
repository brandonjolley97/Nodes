//
//  CTECBinaryTree.hpp
//  Nodes
//
//  Created by Jolley, Brandon on 4/21/16.
//  Copyright © 2016 Jolley, Brandon. All rights reserved.
//

#ifndef CTECBinaryTree_hpp
#define CTECBinaryTree_hpp

#include <stdio.h>
#include "TreeNode.hpp"
#include "Node.h"

template <class Type>
class CTECBinaryTree : public Node<Type>
{
private:
    bool balanced = false;
    TreeNode<Type> * root;
    int height;
    int size;
    bool contains(Type value, TreeNode<Type> * currentTree); //Done.
    void calculateSize(TreeNode<Type> * currentNode); //Done.
    TreeNode<Type> *  getRightMostChild(TreeNode<Type> * leftSubTree); //Done
    TreeNode<Type> *  getLeftMostChild(TreeNode<Type> * rightSubTree); //Done
    void remove(TreeNode<Type> * nodeToBeDeleted); //Done
public:
    CTECBinaryTree(); //Done.
    ~CTECBinaryTree(); //Done.
    bool insert(const Type& value); //Done.
    bool contains(Type value); //Done.
    void remove(const Type& value); //Done.
    int getHeight();
    int getSize(); //Done
    bool isBalanced();
    TreeNode<Type> * getRoot(); //Done
    void inorderTraversal(TreeNode<Type> * currentNode); //Done.
    void postorderTraversal(TreeNode<Type> * currentNode); //Done.
    void preorderTraversal(TreeNode<Type> * currentNode); //Done.
    
    
};


#endif /* NODEMODEL_CTECBINARYTREE_H_ */
