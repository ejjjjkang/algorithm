//
//  main.cpp
//  Algorithmn
//
//  Created by 강은정 on 26/12/2019.
//  Copyright © 2019 강은정. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

struct Item{
    int value, weight;
    Item(int value, int weight) : value(value), weight(weight){};
};

bool cmp(struct Item a, struct Item b){
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    
    return r1 > r2;
}

double knapsackAlgorithm(int W, struct Item arr[], int n){
    
    int curWeight = 0;
    double finalValue = 0.0;
    for(int i=0; i< n; i++){
        
        if(curWeight + arr[i].weight < W){
            curWeight += arr[i].weight;
            finalValue += arr[i].value;
        }
     else {
        int remain = W - curWeight;
        finalValue += arr[i].value *((double) remain / arr[i].weight);
        break;
    }
        
}
    return finalValue;
}

int main(int arc, char** argv){
    int W = 50;
    Item arr[] = {{60, 10}, {100, 20}, {120, 30}};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Maximum value we can obtain = "
         << knapsackAlgorithm(W, arr, n);
    return 0;
   
}
