#include <iostream>
#include <chrono>//for execution time
#include<ctime>//for time(0) function
#include <cstdlib>//for rand() function
#include "../Sorting/QuickSort.cpp"

using namespace std;
int main ()

{  


    int size=0;
     srand(time(0)); 
    
    // cout<<"For worst case"<<endl;
    // for (i=9999;i>=0;i--)
    // {
    //     Array[i]=i;
    // }
    // cout<<"Unsorted Array"<<endl;
    // for (int i = 0; i < size; i++) 
    //     {
    //        cout<<Array[i]<<endl;
             
    //     }

    

  for (size=10000;size<=95000;size+=5000)
    {
        int Array[size];
        for (int i = 0; i < size; i++) 
        {
            Array[i]=rand();
             
        }
        auto start = std::chrono::high_resolution_clock::now();
    
        QuickSort(Array,0,size-1);
    
        auto finish = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = finish - start;

        cout << "QuickSort time for size "<<size<<" : " << elapsed.count() << " s\n";
    }
    
    // cout<<"Sorted Array"<<endl;
    
    // for (int i = 0; i < size; i++) 
    //     {
    //        cout<<Array[i]<<endl;
             
    //     }
    

    return 0;

}

