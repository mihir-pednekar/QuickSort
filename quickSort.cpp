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
            /* pi is partitioning index, arr[p] is now 
            at right place */
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