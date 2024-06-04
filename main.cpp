#include <iostream>
#include <chrono>
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
    // for (int i = 0; i < size; i++) 
    //     {
    //        cout<<Array[i]<<endl;
             
    //     }
    auto start = std::chrono::high_resolution_clock::now();
    
    QuickSort(Array,0,size-1);
    
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;

    cout << "QuickSort time: " << elapsed.count() << " s\n";
    cout<<"Sorted Array"<<endl;
    
    // for (int i = 0; i < size; i++) 
    //     {
    //        cout<<Array[i]<<endl;
             
    //     }
    

    return 0;

}

