//
//  TreeNode.hpp
//  Nodes
//
//  Created by Jolley, Brandon on 4/21/16.
//  Copyright © 2016 Jolley, Brandon. All rights reserved.
//

#ifndef TreeNode_hpp
#define TreeNode_hpp

#include <stdio.h>
#include "Node.h"

template<class Type>
class TreeNode : public Node<Type>
{
private:
    TreeNode<Type>* leftChild;
    TreeNode<Type>* rightChild;
    TreeNode<Type>* parent;
public:
    TreeNode();
    TreeNode(const Type& value);
    TreeNode(const Type& value, TreeNode<Type> * parent);
    void setLeftChild(TreeNode<Type>* leftChild);
    void setRightChild(TreeNode<Type>* rightChild);
    void setParent(TreeNode<Type>* parent);
    TreeNode<Type>* getLeftChild();
    TreeNode<Type>* getRightChild();
    TreeNode<Type>* getParent();
};

#endif /* TreeNode_hpp */
