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

#include <iostream>
#include <cstdlib>

//returns a random number between range min and max
int getRandom(int min, int max){
    int random = rand()%max + min;
    while(true){
        //std::cout<<"Test Random: "<<random<<"\n";
        if(random>=min && random<=max)
            break;
        else
            random = rand()%max + min;
    }
    return random;
}

//fills array of parameter size with random numbers using getRandom() function
void fillArray(int data[], int size, int min, int max){
	for(int i=0;i<size;i++){
		data[i]=getRandom(min,max);
    }
}

//prints array of parameter size
void printArray(int data[], int size){
    std::cout<<"[";
    for(int i=0;i<size;i++){
        std::cout<<data[i];
        if(i==size-1)
            std::cout<<"]\n";
        else
            std::cout<<",";
    }
}

// swap by reference.
void swap(int &a, int &b){
	//if max is less than min then swap
        int temp=a;
        a=b;
        b=temp;
}

namespace QuickSort{
    int partition(int data[], int left, int right){
        int pivot = data[right];
        int l=left-1;
        
        for(int r=left; r<right; r++){
            if(data[r]<=pivot){
                l++;
                swap(data[l],data[r]);
            }
        }
        swap(data[l+1],data[right]);
        return l+1;
    }
    
    void sort(int data[], int left, int right){
        if (left < right){ 
            int partIndex = partition(data, left, right); 
  
            // Separately sort elements before 
            // partition and after partition 
            sort(data, left, partIndex-1); 
            sort(data, partIndex+1,right); 
        } 
    }
}

//main() function with command line arguments.
int main(int argc, char *argv[]) {
	//std::cout<<"Random : "<<getRandom(5,5)<<"\n";
	int size=20, min=1, max=29, left=0,right=size-1;
    int array[size]={0};
    		
	fillArray(array, size, min, max);
    std::cout<<"Befor Sort ";printArray(array, size);
    QuickSort::sort(array,left,right);
    std::cout<<"After Sort ";printArray(array, size);
}
