#include <iostream>
using namespace std;
// creation 
#define size 6
int king [size];
int top = -1;
// push operation
void push(int num){
    if (top < size - 1){
        top++;
        king[top] = num;
        cout << "inserted element is : " << num << endl;
    } else {
        cout << num << " - stack is overflow " << endl;
    }
}
// pop operation
void pop(){
    if (top == -1){
        cout << " stack is empty " << endl;
    }else{
        cout << " deleted element is : " << king[top] << endl;
        top--;
    }
};
// traverse operation
void traverse(){
    if (top == - 1){
        cout << " stack is empty " << endl;
    }else{
        cout << " stack elements are : " << endl;
        for (int i = top ; i >= 0; i--){
            cout << king[i] << endl;
        }
    }
}
// peek operation
void peek(){
    if ( top == -1){
        cout << " stack is empty " << endl;
    }else{
        cout << " top element is : " << king[top] << endl;
    }
}
// search operation
void search (int num){
    if (top == - 1){
        cout << " stack is empty , cannot search " << endl;
        return;
    }
    for (int i = top ; i >= 0 ; i --){
            if( king [i] ==  num){
                cout << "element " << num << " found at position " << (top - i + 1) << "  from the top " << endl;
                return;
            }
    }
    cout << "elements " << num << " is not found in stack " << endl;

}



int main (){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70); // This should show stack overflow

    traverse();
    peek();
    pop();
    peek();
    traverse();
    // Example of searching for an existing value
    int n; // the n is the value to taken from user to search in stack
    cout << "\nEnter a value to search in the stack: ";
    cin >>  n;
    search(n);
}