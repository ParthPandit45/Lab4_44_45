#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int Partition(int arr[], int left, int right) 
{
    int pi=arr[left];
    int i=left;
    int j=right+1;
    while (i<j)
    {
        do
        {
            i++;
        } while (arr[i]<=pi);
        do
        {
            j--;
        } while (arr[j]>pi);
        if (i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[left],arr[j]);
    return j;  
}

void QuickSort(int arr[], int left, int right) 
{
    if (left <right)
    {
        int pivot = Partition(arr, left, right);
        QuickSort(arr, left, pivot - 1);
        QuickSort(arr, pivot + 1, right);

    }
}
