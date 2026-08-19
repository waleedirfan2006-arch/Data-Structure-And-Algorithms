#include<iostream>
using namespace std;
int main(){
    struct node{
        int data;
        node*next;
        node(int val){
            data=val;
            next=NULL;
        }

    };
}