#include<iostream>
#include<stack>

using namespace std;

int main(){

stack<int> s;
s.push(5);
s.push(19);
s.push(12);

s.push(13);

cout<<s.top()<<endl;
return 0;
}