#include <iostream>
#include <random>
#include <ctime>
using namespace std;

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void InsertionSort(int arr[], int n)
{
     int i, temp, j;
    for (i = 1; i < n; i++) {

        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

int main()
{   
    srand(time(NULL));

    int r, n = 100;
    
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        r = rand() % 10;
        a[i] = r;
    }
    clock_t start = (int)clock();

    cout << "BEFORE SORTING " << endl;

    display(a, n);

    InsertionSort(a, n);
    
    cout << "AFTER SORTING" << endl;
    
    printf("%0.5fms", (clock() - start) * 1000.0 / CLOCKS_PER_SEC);

    display(a, n);
    
    delete[]a;
    return 0;

}