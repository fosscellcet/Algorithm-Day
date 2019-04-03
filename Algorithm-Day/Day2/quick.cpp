#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <cstdio>

using namespace std;
using namespace std::chrono;

int split( int*arr, int low, int high ) {
    int i = low-1;
    int temp;
    for( int j = low; j < high; j++ )
        if( arr[j] <= arr[high] ) {
            i++;
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    i++;
    temp = arr[high];
    arr[high] = arr[i];
    arr[i] = temp;
    return i;
}

void quick_sort( int* arr, int low, int high ) {
    if( low < high ) {
        int pivot = split( arr, low, high );
        quick_sort( arr, low, pivot-1 );
        quick_sort( arr, pivot+1, high );
    }
}

int main() {

    for( int n = 1; n <= 1000000; n*=10 ) {
    
    int num[n];
    for( int i = 0; i < n; i++ )
        //num[i] = rand()%n;
        num[i] = i;

/*     for( int i = 0; i < n; i++ )
        cout << num[i] << "\t";
    cout << endl; */

    auto start = high_resolution_clock::now();

    quick_sort( num, 0, n-1 );

    auto stop = high_resolution_clock::now();

/*     for( int i = 0; i < n; i++ )
        cout << num[i] << "\t";
    cout << endl; */

    auto duration = duration_cast<microseconds>(stop - start);
    cout << n << "\t:\t" << duration.count();

    getchar();
    }
    return 0;    
}