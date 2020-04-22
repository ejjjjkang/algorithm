//
//  Selection.cpp
//  Algorithmn
//
//  Created by 강은정 on 21/04/2020.
//  Copyright © 2020 강은정. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>

using namespace std;

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low -1; //smallest number
    
    for(int j=low-1; j<=high-1; j++ ){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j] );
        }
    }
    swap(&arr[i+1], &arr[high]);
    
    return (i+1);
}


void QuickSort(int num_array[], int low, int high){
    
    if(low < high){
        int pi = partition(num_array, low, high);
        
        QuickSort(num_array, low, pi-1);
        QuickSort(num_array, pi+1, high);
    }
    
}

  
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}



int main(void){
    
    int size = 10;
    int num_array[size];
    
    
    cout << "number array: ";
    
    for(int i=0; i<size; i++){
        std:: cin >> num_array[i];
    }
    
    
    QuickSort(num_array, 0, size-1);
    cout << "Sorted array: \n";
    printArray(num_array, size);
    
    return 0;
}
