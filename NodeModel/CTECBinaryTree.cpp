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

TreeNode<Type> * CTECBinaryTree<Type> :: getRoot()

{
    return root;
}


template <class Type>
bool CTECBinaryTree<Type> :: insert(const Type& value)
{
    
    TreeNode<Type> * insertedNode = new TreeNode<Type>(value);
    TreeNode<Type> * current;
    TreeNode<Type> * trailingCurrent;
    
    assert(insertedNode != nullptr);
    
    if(contains(value))
    {
        return false;
    }
    else
    {
        if(root == nullptr)
        {
            root = insertedNode;
        }
        else
        {
            current = root;
            trailingCurrent = root;

            while (current != nullptr)
            {
                trailingCurrent = current;
                
                if ( current->getValue() > value)
                {
                    current = current->getLeftChild();
                }
                else
                {
                    current = current->getRightChild();
                }
            }
            if(trailingCurrent->getValue() > value)
            {
                trailingCurrent->setLeftChild(insertedNode);
            }
            else
            {
                trailingCurrent->setRightChild(insertedNode);
            }
            insertedNode->setParent(trailingCurrent);
        }
        
        return true;
    }
}

template <class Type>
void CTECBinaryTree<Type> :: remove(const Type& value)

{
    TreeNode<Type> * current = root;
    TreeNode<Type> * trailing = current;
    
    if(!contains(value))
        
    {
        return;
    }
    else
    {
        while(current != nullptr && current->getValue() != value)
            
        {
            trailing = current;
            
            if(current->getValue() > value)
            {
                current = current->getLeftChild();
            }
            else
            {
                current = current->getRightChild();
            }
        }
        
        if(current == root)
        {
            remove(root);
        }
        else if (trailing->getValue() > value)
        {
            remove(trailing->getLeftChild());
        }
        else
        {
            remove(trailing->getRightChild());
        }
    }
}

template <class Type>
void CTECBinaryTree<Type> :: remove(TreeNode<Type> * nodeToRemove)
{
    TreeNode<Type> * current;
    TreeNode<Type> * trailing;
    TreeNode<Type> * temp;
    
    if(nodeToRemove == nullptr)
    {
        cerr << "Doh! You can't remove an empty non-existent thing" <<endl;
    }
    else if(nodeToRemove->getRightChild() == nullptr && nodeToRemove->getLeftChild() == nullptr) //Leaf node
    {
        temp = nodeToRemove;
        nodeToRemove = nullptr;
        delete temp;
    }
    else if(nodeToRemove->getRightChild() == nullptr)
    {
        temp = nodeToRemove;
        nodeToRemove = temp->getLeftChild();
        delete temp;
    }
    else if(nodeToRemove->getLeftChild() == nullptr)
    {
        temp = nodeToRemove;
        nodeToRemove = temp->getRightChild();
        delete temp;
    }
    else
    {
        current = nodeToRemove->getLeftChild();
        trailing = nullptr;
        
        while(current->getRightChild() != nullptr)
        {
            trailing = current;
            current = current->getRightChild();
        }
        
        nodeToRemove->setValue(current->getValue());
        
        if(trailing == nullptr)
        {
            nodeToRemove->setLeftChild(current->getLeftChild());
        }
        else
        {
            trailing->setRightChild(current->getLeftChild());
        }

        delete current;
    }
    
}

template <class Type>
void CTECBinaryTree<Type> :: inorderTraversal(TreeNode<Type> * currentNode)
{
    if (currentNode != nullptr)
    {
        inorderTraversal(currentNode->getLeftChild());
        cout << currentNode->getValue() << ", " ;
        inorderTraversal(currentNode->getRightChild());
    }
}

template <class Type>
void CTECBinaryTree<Type> :: preorderTraversal(TreeNode<Type> * currentNode)
{
    if (currentNode != nullptr)
    {
        cout << currentNode->getValue() << ", " ;
        preorderTraversal(currentNode->getLeftChild());
        preorderTraversal(currentNode->getRightChild());
    }
}

template <class Type>
void CTECBinaryTree<Type> :: postorderTraversal(TreeNode<Type> * currentNode)
{
    if (currentNode != nullptr)
    {
        postorderTraversal(currentNode->getLeftChild());
        postorderTraversal(currentNode->getRightChild());
        cout << currentNode->getValue() << ", " ;
    }
}

template <class Type>
int CTECBinaryTree<Type> :: getSize()
{
    size = 0;
    calcuateSize(root);
    return size;
}

template <class Type>
void CTECBinaryTree<Type> :: calculateSize(TreeNode<Type> * currentNode)
{
    if (currentNode != nullptr)
    {
        calculateSize(currentNode->getLeftChild());
        calculateSize(currentNode->getRightChild());
        size++;
    }
}

template <class Type>
bool CTECBinaryTree<Type> :: contains(Type value)

{
    bool isInTree = false;
    
    if(root == nullptr)
    {
        isInTree = false;
    }
    else if(root->getValue() == value)
    {
        isInTree = true;
    }
    else if(value < root->getValue())
    {
        isInTree = contains(value, root->getLeftChild());
    }
    else
    {
        isInTree = contains(value, root->getRightChild());
    }
    
    return isInTree;
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