#include<iostream>
#include<vector>
#include<chrono>
using namespace std;

void primeGenerator(long n){
    vector<bool> isPrime(n+1,true);
    vector<long> primes;
    for(long i = 2;i<=n;i++){
        if(isPrime[i]){
            for(long j = i*i;j<=n;j+=i)
                isPrime[j] = false;
            primes.push_back(i);
        }

    }
    for(long i = 0;i<primes.size();i++)
        cout<<primes[i]<<" ";
}

int main(){
    long n;
    cin>>n;
    auto start = chrono::high_resolution_clock::now();
    primeGenerator(n);
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end-start);
    cout<<"\n"<<duration.count()<<" milliseconds";

    return 0;
}