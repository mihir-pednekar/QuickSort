// author: Mihir Pednekar
// student id : 19027656

#include <cstdlib>
#include <iostream>
#include "quickSort.h"
#define SIZE 10

//main() function to test quick sort impl
int main() {

int min=0, max=99, left=0,right=SIZE-1;
int array1[SIZE]={0};

//first array SIZE 10    		
QuickSort::fillArray(array1, SIZE, min, max);
QuickSort::printArray(array1, SIZE);
QuickSort::sort(array1,left,right);
QuickSort::printArray(array1, SIZE);

//second array SIZE 20
#undef SIZE
#define SIZE 20
right=SIZE-1;
int array2[SIZE]={0};

QuickSort::fillArray(array2, SIZE, min, max);
QuickSort::printArray(array2, SIZE);
QuickSort::sort(array2,left,right);
QuickSort::printArray(array2, SIZE);

//third array SIZE 30
#undef SIZE
#define SIZE 30
right=SIZE-1;
int array3[SIZE]={0};

QuickSort::fillArray(array3, SIZE, min, max);
QuickSort::printArray(array3, SIZE);
QuickSort::sort(array3,left,right);
QuickSort::printArray(array3, SIZE);

return 0;
}
