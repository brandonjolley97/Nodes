//
//  HashNode.hpp
//  Nodes
//
//  Created by Jolley, Brandon on 5/23/16.
//  Copyright © 2016 Jolley, Brandon. All rights reserved.
//

#ifndef HashNode_hpp
#define HashNode_hpp

#include <stdio.h>

template<class Type>
class HashNode
{
private:
    int key;
    Type value;
public:
    HashNode();
    HashNode(int key, Type value);
    virtual ~HashNode();
    
    void setKey(int key);
    void setValue(const Type& value);
    int getKey();
    Type getValue();
};

#endif /* HashNode_hpp */
