// author: Mihir Pednekar
// Student Id: 19027656

/* 
Utiliity class to getRandom no with min max range, swap by ref any element, printArray 
and fillArray with random no 
*/

#include <iostream>
#include <cstdlib>

int partition(int data[], int left, int right);
void sort(int data[], int left, int right);
int getRandom(int min, int max);
void fillArray(int data[], int size, int min, int max);
void printArray(int data[], int size);
void swap(int &a, int &b);
