#include<iostream>
#include <stdlib.h>

using namespace std;

#define MAX 10
int size=0;

struct stack{
    int items[MAX];
    int top;
};

typedef struct stack st;

//creating a empty stack
void createEmptyStack(st *s){
    s->top=-1;
}

//checking stack is full

int isFull(st *s){
    if(s->top == MAX-1)
        return 1;
    else 
    return 0;
    
}

//check if stack is empty

int isEmpty(st *s){
    if(s->top==-1)
    return 1;
    else
    return 0;

}

//Add element into stack

void push(st *s, int newItem) {
    if(isFull(s)){
    cout<<"Stack is Full";
    }
    else{
        s->top++;
        s->items[s->top]=newItem;
    }
    size++;

}

//Remove elements from stack

void pop(st *s){

if (isEmpty(s)){
    cout<<"Stack is Empty";
}
else {
    cout<<"Element popped "<<s->items[s->top];
    s->top--;
    
}

size--;
cout<<endl;

}

//Print the elements in the stack

void PrintStack(st *s){
    cout <<"the elements in the stack are :";
    for(int i=0;i < size;i++){
        cout<<s->items[i]; 
    }
}

int main(){
    st *s= (st*) malloc(sizeof(st));
    createEmptyStack(s);

    push(s,2);
    push(s,3); 

    PrintStack(s);
    pop(s);

    PrintStack(s);
}

