#include<list>
#include<iostream>
using namespace std;


int main(){
    list<int> l;
    l.push_back(7);

    l.push_back(2);
    l.push_back(6);
    l.sort();
    list<int>::iterator i;
    for(i = l.begin();i!=l.end();i++)
        cout<<*i<<" ";
    cout<<endl;
    return 0;
}