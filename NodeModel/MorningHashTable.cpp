
//  MorningHashTable.cpp
//  Nodes
//
//  Created by Jolley, Brandon on 5/5/16.
//  Copyright © 2016 Jolley, Brandon. All rights reserved.
//

#include "MorningHashTable.hpp"

template <class Type>
MorningHashTable<Type> :: MorningHashTable()
{
    this->capacity = 101;
    this->efficiencyPercentage = .667;
    this->size = 0;
    this->internalStorage = new Type[capacity];
    
}

template <class Type>
MorningHashTable<Type> :: ~MorningHashTable<Type>()
{
    delete [] internalStorage;
}

template <class Type>
int MorningHashTable<Type> :: getSize()
{
    return this->size();
}

template<class Type>
void MorningHashTable<Type> :: add(const Type& value)
{
    if(this->size/this->capacity >= this->efficiencyPercentage)
    {
        updateSize();
    }
    
    int positionToInsert = findPostion(value);
    
    if(internalStorage[positionToInsert] != nullptr)
    {
        //Loop over the internalStorage to find the next empty slot.
        //Insert the value there.
        while(internalStorage[positionToInsert] != nullptr)
        {
            positionToInsert = (positionToInsert +1) % size;
        }
        internalStorage[positionToInsert] = value;
        
    }
    else
    {
        internalStorage[positionToInsert] = value;
    }
}
