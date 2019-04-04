#include<iostream>
using namespace std;
typedef struct node{
    int data;
    struct node * next;
}node;  
class linkedList{
    public:
    node * head;
    linkedList(){
        head->next = NULL;
    }
    void insert(int data){
        node * newNode = (node *)malloc(sizeof(node));
        newNode->data = data;
        newNode->next = head->next;
        head->next = newNode;
    }

    void display(){
        node * temp = (node *)malloc(sizeof(node));
        temp = head->next;
        while(temp!=NULL){
            cout<<temp->data<<"\n";
            temp = temp->next;
        }
    }
    void deleteNode(){
        node * temp = (node *)malloc(sizeof(node));
        temp = head->next;
        if(temp !=NULL)
            head->next = temp->next;

        
        delete(temp);
    }
};
int main(){
    linkedList l;

    l.insert(5);
    l.insert(1);
    l.insert(2);
    l.display();
   
    return 0;
}