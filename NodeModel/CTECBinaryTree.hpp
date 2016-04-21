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
    int root;
    int height;
    int size;
    
public:
    CTECBinaryTree();
    ~CTECBinaryTree();
    bool contains(Type value, TreeNode<Type> * currentTree);
    
    
};


#endif /* NODEMODEL_CTECBINARYTREE_H_ */
