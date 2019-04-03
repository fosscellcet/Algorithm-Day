#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <cstdio>
#include <algorithm>

using namespace std;
using namespace std::chrono;

int main() {

    for( int n = 1; n <= 1000000; n*=10 ) {
    
    int num[n];
    for( int i = 0; i < n; i++ )
        num[i] = rand()%n;
        //num[i] = i;

    auto start = high_resolution_clock::now();

    sort( num, num+n );

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);
    cout << n << "\t:\t" << duration.count();

    getchar();
    }
    return 0;    
}