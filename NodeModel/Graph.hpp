//
//  Graph.hpp
//  Nodes
//
//  Created by Jolley, Brandon on 5/23/16.
//  Copyright © 2016 Jolley, Brandon. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <set>

template<class Type>
class Graph
{
private:
    static const int MAXIMUM = 20;
    bool edges [MAXIMUM][MAXIMUM]; //This is the adjacency matrix.
    Type labels [MAXIMUM];
    int manyVertices;
    
    void depthFirstTraversal(Graph<Type> currentGraph, int vertex, bool * markedVertices);
public:
    Graph();
    virtual ~Graph();
    
    void addVertex(const Type& vertexLabel);
    void addEdge(int source, int target);
    void removeEdge(int source, int target);
    Type& operator [] (int vertex);
    
    int size() const;
    bool isEdge(int source, int target) const;
    std::set<int> neighbors(int vertex) const;
    Type operator [] (int vertex) const;
    
    void depthFirstTraversal(Graph<Type>  currentGraph, int vertex);
    void breathFirstTraversal(Graph<Type> currentGraph, int vertex);
};


#endif /* Graph_hpp */
