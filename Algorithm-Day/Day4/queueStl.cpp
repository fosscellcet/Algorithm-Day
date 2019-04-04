#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(5);
    q.push(6);
    q.push(7);
    cout<<q.front()<<" ";
    q.pop();
    cout<<q.front()<<" ";
    
    return 0;
}