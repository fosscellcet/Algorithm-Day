#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <cstdio>

using namespace std;
using namespace std::chrono;

void merge( int* arr, int l, int m, int n ) {
    int l1 = m-l+1;
    int l2 = n-m;
    int n1[l1];
    int n2[l2];
    for( int i = 0; i < l1; i++ )
        n1[i] = arr[l+i];
    for( int i = 0; i < l2; i++ )
        n2[i] = arr[m+i+1];
    int i, j, k;
    for( i = 0, j = 0, k = l; k < n; )
        if( n1[i] > n2[j] ) {
            arr[k++] = n2[j++];
            if( j >= l2 ) {
                while( i < l1 )
                    arr[k++] = n1[i++];
                break;
            }
        }
        else {
            arr[k++] = n1[i++];
            if( i >= l1 ) {
                while( j < l2 )
                    arr[k++] = n2[j++];
                break;
            }
        }                
}

void merge_sort( int* arr, int l, int n ) {
    if( l < n ) {
        int m = (l+n)/2;
        merge_sort( arr, l, m );
        merge_sort( arr, m+1, n );
        merge( arr, l, m, n );
    }
}

int main() {

    for( int n = 1; n <= 1000000; n*=10 ) {
    
    int num[n];
    for( int i = 0; i < n; i++ )
        num[i] = rand()%n;
        //num[i] = i;

    auto start = high_resolution_clock::now();

    merge_sort( num, 0, n );

    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop - start);
    cout << n << "\t:\t" << duration.count();

    getchar();
    }
    return 0;    
}