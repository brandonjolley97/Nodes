//
//  MorningHashTable.hpp
//  Nodes
//
//  Created by Jolley, Brandon on 5/5/16.
//  Copyright © 2016 Jolley, Brandon. All rights reserved.
//

#ifndef MorningHashTable_hpp
#define MorningHashTable_hpp

#include "HashNode.hpp"
#include "CTECList.h"
#include <stdio.h>

template<class Type>
class MorningHashTable
{
private:
    int capacity;
    int tableCapacity;
    double efficiencyPercentage;
    int size;
    int tableSize;
    HashNode<Type>** internalStorage;
    CTECList<HashNode<Type> > * tableStorage;
    
    void updateTableCapacity();
    void updateSize();
    
    int findPosition(HashNode<Type> currentNode);
    int findTablePosition(HashNode<Type> currentNode);
    
    int handleCollision(HashNode<Type> currentNode);
    
    int getNextPrime();
    bool isPrime(int candidateNumber);
public:
    MorningHashTable();
    virtual ~MorningHashTable();
    
    void addToTable(HashNode<Type> currentNode);
    void add(HashNode<Type> currentNode);
    
    bool remove(HashNode<Type> currentNode);
    bool contains(HashNode<Type> currentNode);
    int getSize();
};

#endif /* MorningHashTable_hpp */

