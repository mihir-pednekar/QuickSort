// author: Mihir Pednekar
// Student Id: 19027656

//Pseudo Code for Quick Sort
/* 
Step 1: Initialise Pivot element as the last element of an array as pivot=arr[size-1], pivot helps to partition elements of array.
Step 2: Initialise left index 'l' as index of small element as l=-1 and right index 'r' as loop variable which is incremented every pass.
Step 3: Every iteration check arr[r]<=pivot, if true then increment l++ and swap(arr[l], arr[r]) else do nothing.
Step 4: Continue Step 3 until right index 'r' is less than index of pivot element as r<(size-1)
Step 5: Every elements to the left of left index 'l' are less than equal to pivot element so swap pivot element with arr[l+1] and return partition
	index value return l+1.
Step 6: Pivot element separates into two partition having new left and right index, so steps 2 to 5 are repeated with new index until left index 
	is not less than right, left<right
 
*/

#include "utils.h"

namespace QuickSort{

    //partitions the array to move small elements to the 
    //left of pivot returns the pivot index
    int partition(int data[], int left, int right){
        int pivot = data[right];
        int l=left-1;
        
        for(int r=left; r<right; r++){
            if(data[r]<=pivot){
                l++;
                utils::swap(data[l],data[r]);
            }
        }
        utils::swap(data[l+1],data[right]);
        return l+1;
    }
    
    //sorts the array firstly by partitioning
    void sort(int data[], int left, int right){
        if (left < right){ 
            int partIndex = partition(data, left, right); 
            sort(data, left, partIndex-1); 
            sort(data, partIndex+1,right); 
        } 
    }
}