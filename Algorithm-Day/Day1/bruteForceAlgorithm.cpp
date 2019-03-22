#include<iostream>
#include<vector>
#include<chrono>
using namespace std;


int main(){
    vector<int> primes;
    int n;
    bool c = false;
    cin>>n;
    auto start = chrono::high_resolution_clock::now();
    for(int i=2;i<=n;i++){
        c = false;
        for(int j = 2;j*j<=i;j++)
            if(i%j == 0){
                c = true;
                break;
            }
        if(!c)
            primes.push_back(i);
    }
    for(int i = 0;i<primes.size();i++)
        cout<<primes[i]<<" ";
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end-start);
    cout<<"\n"<<duration.count()<<" milliseconds";
    return 0;
}