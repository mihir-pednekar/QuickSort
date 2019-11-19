// author: Mihir Pednekar
// Student Id: 19027656

/* 
Utiliity class to getRandom no with min max range, swap by ref any element, printArray 
and fillArray with random no 
*/

#include <iostream>
#include <cstdlib>

namespace util{
	
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

}