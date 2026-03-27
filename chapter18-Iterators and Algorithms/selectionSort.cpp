#include <algorithm>


void SelectionSort(int arr[],int size){
    for(int i = 0; i < size -1; i++){
        int minIndex = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if(minIndex != i){
            std::swap(arr[i], arr[minIndex]);
        }
    }
};


