#include <iostream>
#include <time.h>
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
   

    return 0;

}