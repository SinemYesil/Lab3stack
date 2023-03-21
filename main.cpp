#include <iostream>
#include <string>
using namespace std;
class Node{
public:
    int data;
    Node* next;
};
class Stack{
private: Node*top;
    int size;
public:
    Stack(){
        top= nullptr;
        size=0;
    }
    void push(int x){
        Node*newNode=new Node();
        newNode->data=x;
        newNode->next=top;
        top=newNode;
    }
    int pop(){
        if(isEmpty()){
        cout<<"Stack is empty"<<endl;
        return -1;}
        int x=top-> data;
        Node* temp =top;
        top =top-> next;
        delete temp;
        size--;
        return x;
    }
    int peek(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return -1;

        }
        return top->data;

    }
    bool isEmpty(){
        return top== nullptr;
    }
    int getSize(){
        return size;
    }
    
};
int main(){
    Stack y;
    y.push(10);
    y.push(20);
    y.push(30);
    cout<<"Top:"<<y.peek()<<endl;
    cout<<"Size:"<<y.getSize()<<endl;
    cout<<y.pop()<<endl;
    cout<<y.pop()<<endl;
    cout<<y.pop()<<endl;
    cout<<"Size:"<<y.getSize()<<endl;
    cout<<y.pop()<<endl;
    return 0;

}

