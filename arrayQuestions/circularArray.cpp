#include<iostream>
using namespace std;

class circularArray {
    int* arr;
    int cap, currSize;
    int f,r;

    public : circularArray(int size){
        cap=size;
        arr= new int[cap];
        currSize=0;
        f=0;
        r= -1;
    };
    void push(int data){
        if(currSize == cap){
            cout<<"CQ is already full.\n";
            return ;
        }
        r= (r+1)%cap;
        arr[r]=data;
        currSize++;
    }
    void pop(){
        if(Empty()){
            cout<<"CQ is Empty\n";
            return ;
        }
        f=(f+1)%cap;
        currSize--;
    }
    int front(){
         if(Empty()){
            cout<<"CQ is Empty\n";
            return -1 ;
        }
        return arr[f];
    }
    bool Empty(){
        return currSize==0;
    }
};


int main(){
    circularArray cq(3);
    cq.push(3);
    cq.push(5);
    cq.push(7);
    cq.pop();
    cq.push(9);

    while(!cq.Empty()){
        cout<<cq.front()<<" ";
        cq.pop();
    }



}

