#include<iostream>
#include<vector>
#include<chrono>
using namespace std;

int main(){
    int n;
    bool flag;
    vector<int> primes;
    cin>>n;
    primes.push_back(2);
    auto start = chrono::high_resolution_clock::now();
    for(int i =3;i<=n;i++){
        flag = true;
        for(int j = 0;primes[j]*primes[j]<=i;j++)
            if(i%primes[j] == 0 ){
                flag = false;
                break;
            }
        if(flag)
            primes.push_back(i);
    }
    for(int i = 0;i<primes.size();i++)
        cout<<primes[i]<<" ";
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end-start);
    cout<<"\n"<<duration.count();
    return 0;
}