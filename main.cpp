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
    cout<<"Unsorted Array"<<endl;
    for (int i = 0; i < size; i++) 
        {
           cout<<Array[i]<<endl;
             
        }
    cout<<"Sorted Array"<<endl;
    
    for (int i = 0; i < size; i++) 
        {
           cout<<Array[i]<<endl;
             
        }
    

    return 0;

}

