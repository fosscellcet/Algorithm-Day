#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <cstring>
#include <cstdio>

using namespace std;
using namespace std::chrono;

void counting_sort( int* arr, int n ) {
    int digits = n;
    int count[digits] = {0};
    for( int i = 0; i < n; i++ )
        count[ arr[i] ]++;
    int j = 0;
    for( int i = 0; i < digits; i++ )
        while( count[i]-- )
            arr[j++] = i;
}

int main() {

    for( int n = 1; n <= 1000000; n*=10 ) {
    
    int num[n];
    for( int i = 0; i < n; i++ )
        num[i] = rand()%n;
        //num[i] = i;

    auto start = high_resolution_clock::now();

    counting_sort( num, n );

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);
    cout << n << "\t:\t" << duration.count();

    getchar();
    }
    return 0;    
}