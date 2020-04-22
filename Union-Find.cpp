//
//  Union-Find.cpp
//  Algorithmn

//Union-Find Algorithm can be used to check whether an undirected graph contains cycle or not.
//
//  Created by 강은정 on 15/04/2020.
//  Copyright © 2020 강은정. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>

using namespace std;

//find parent
int getParent(int parent[], int x){
  
    if(parent[x] == x){
        return x;
    } else {
        return parent[x] = getParent(parent, parent[x]); //recursive
    }
};


//union parent
int unionParent(int parent[], int a, int b){
    a = getParent(parent, a);
    b = getParent(parent, b);
    if( a < b) {
        parent[b] = a;
    }
    else {
        parent[a] = b;
    }
};

//confirm whether they have same parents.
int findParent(int parent[], int a, int b){
    a = getParent(parent, a);
    b = getParent(parent, b);
    
    if( a == b){
        return 1;
        
    }else {
        return 0;
    }
};

int main(void){
    int parent[11];
    for(int i=0; i<=10; i++){
        parent[i] = i;
    }
    unionParent(parent, 1, 2);
    unionParent(parent, 2, 3);
}
