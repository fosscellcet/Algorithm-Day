#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <cstdio>

using namespace std;
using namespace std::chrono;

void insertion_sort( int* arr, int n ) {
    for( int i = 1; i < n; i++ ) {
        int temp = arr[i];
        int j;
        for( j = i; j > 0; j-- )
            if( temp < arr[j-1] )
                arr[j] = arr[j-1];
            else
                break;
        arr[j] = temp;
    }
}

int main() {

    for( int n = 1; n < 1000000; n*=10 ) {
    
    int num[n];
    for( int i = 0; i < n; i++ )
        num[i] = rand()%n;
        //num[i] = i;

    auto start = high_resolution_clock::now();

    insertion_sort( num, n );

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);
    cout << n << "\t:\t" << duration.count();

    getchar();
    }
return 0;    
}