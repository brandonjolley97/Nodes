//
//  CTECBinaryTree.cpp
//  Nodes
//
//  Created by Jolley, Brandon on 4/21/16.
//  Copyright © 2016 Jolley, Brandon. All rights reserved.
//

#include "CTECBinaryTree.hpp"

template <class Type>
CTECBinaryTree<Type> :: CTECBinaryTree()
{
    root = nullptr;
    height = 0;
    balanced = true;
    size = 0;
}

template <class Type>
CTECBinaryTree<Type> :: ~CTECBinaryTree()
{
    while(root != nullptr)
    {
        remove(root);
    }
}

template <class Type>
bool CTECBinaryTree<Type> :: contains(Type value, TreeNode<Type> * currentTree)
{
    if(currentTree == nullptr)
    {
        return false;
    }
    
    if(currentTree->getValue() == value)
    {
        return true;
    }
    else if(value < currentTree->getValue())
    {
        return contains(value, currentTree->getLeftChild());
    }
    else
    {
        return contains(value, currentTree->getRightChild());
    }
}