//
//  MorningHashTable.hpp
//  Nodes
//
//  Created by Jolley, Brandon on 5/5/16.
//  Copyright © 2016 Jolley, Brandon. All rights reserved.
//

#ifndef MorningHashTable_hpp
#define MorningHashTable_hpp

#include "CTECArray.cpp"
#include <stdio.h>

template<class Type>
class MorningHashTable
{
private:
    int capacity;
    double efficiencyPercentage;
    int size;
    Type * internalStorage;
    CTECArray<Type> * internalArray;
    
    int findPosition(const Type& value);
    int handleCollision(const Type& value);
    void updateSize();
public:
    MorningHashTable();
    ~MorningHashTable();
    
    void add(const Type& value);
    bool remove(const Type& value);
    bool contains(const Type& value);
    int getSize();
};

#endif /* MorningHashTable_hpp */

