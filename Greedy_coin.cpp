//
//  Greedy_coin.cpp
//  Algorithmn
//
//  Created by 강은정 on 14/04/2020.
//  Copyright © 2020 강은정. All rights reserved.
//
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>

using namespace std;

// All denominations of Indian Currency
int coin[] = { 1, 2, 5, 10, 20, 50, 100, 500, 1000 };
int n = sizeof(coin) / sizeof(coin[0]);


void findCoin(int purse){
    vector<int> ans;
    for(int i = n -1; i >=0; i--){
        while (purse >= coin[i]) {
            purse -= coin[i];
            ans.push_back(coin[i]);
        }
    }
    
    for (int i = 0; i < ans.size(); i++){
         cout << ans[i] << "  ";
    }
}



int main(int arc, char** argv){
    
    int purse = 660;
    cout << "Following is minimal number of change for " << n << ": ";
    findCoin(purse);
    return 0;
    
}
