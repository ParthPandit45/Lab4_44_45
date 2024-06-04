#include <iostream>
#include <time.h>
#include<ctime>
#include <cstdlib>
#include "QuickSort.cpp"


using namespace std;
int main ()

{  


    int size=0;
     srand(time(0)); 
     cout<<"Enter the size of the array:\t";
     cin>>size;
     int Array[size];

    

  
    for (int i = 0; i < size; i++) 
        {
            Array[i]=rand();
             
        }
        auto start = std::chrono::steady_clock::now();
    for (int i = 0; i < size; i++) 
        {
           cout<<Array[i]<<endl;
             
        }
    quickSort(Array,0,size-1);
    for (int i = 0; i < size; i++) 
        {
           cout<<Array[i]<<endl;
             
        }
    

    return 0;

}

