#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <cstdio>

using namespace std;
using namespace std::chrono;

void selection_sort( int* arr, int n ) {
    for( int i = 0; i < n-1; i++ ) {
        int low = i;
        for( int j = i+1; j < n; j++ )
            if( arr[low] > arr[j] )
                low = j;
        if( i != low ) {
            int temp = arr[low];
            arr[low] = arr[i];
            arr[i] = temp;
        }
    }
}

int main() {

    for( int n = 1; n < 1000000; n*=10 ) {
    
    int num[n];
    for( int i = 0; i < n; i++ )
        num[i] = rand()%n;
        //num[i] = i;

    auto start = high_resolution_clock::now();

    selection_sort( num, n );

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);
    cout << n << "\t:\t" << duration.count();

    getchar();
    }
    return 0;    
}