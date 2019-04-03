#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <cstdio>

using namespace std;
using namespace std::chrono;

void bubble_sort( int* arr, int n ) {
    for( int i = 0; i < n-1; i++ )
        for( int j = 0; j < n-i-1; j++ )
            if( arr[j] > arr[j+1] ) {
                int x = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = x;
            }
}

int main() {

    for( int n = 1; n < 1000000; n*=10 ) {
    
    int num[n];
    for( int i = 0; i < n; i++ )
        num[i] = rand()%n;
        //num[i] = i;

    auto start = high_resolution_clock::now();

    bubble_sort( num, n );

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);
    cout << n << "\t:\t" << duration.count();

    getchar();
    }
    return 0;    
}