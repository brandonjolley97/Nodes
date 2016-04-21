//
//  TreeNode.cpp
//  Nodes
//
//  Created by Jolley, Brandon on 4/21/16.
//  Copyright © 2016 Jolley, Brandon. All rights reserved.
//

#include "TreeNode.hpp"

template<class Type>
TreeNode<Type> :: TreeNode()
{
    
}

template<class Type>
TreeNode<Type> :: TreeNode(const Type& value)
{
    
}

template<class Type>
TreeNode<Type> :: TreeNode(const Type& value, TreeNode<Type> * parent)
{
    
}

template<class Type>
void TreeNode<Type> :: setLeftChild(TreeNode<Type>* leftChild)
{
    
}

template<class Type>
void TreeNode<Type> :: setRightChild(TreeNode<Type>* rightChild)
{
    
}

template<class Type>
void TreeNode<Type> :: setParent(TreeNode<Type>* parent)
{
    
}

template<class Type>
TreeNode<Type>* TreeNode<Type> :: getLeftChild()
{
    return this->leftChild;
}

template<class Type>
TreeNode<Type>* TreeNode<Type> :: getRightChild()
{
    return this->rightChild;
}

template<class Type>
TreeNode<Type>* TreeNode<Type> :: getParent()
{
    return this->parent;
}


