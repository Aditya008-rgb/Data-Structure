//write a c++ program to store 5 cancled order numbers in a stack and display the canceled order starting from most recently canceled order
#include <iostream>
#include <stack>
using namespace std;

int main() {
    int stack[5];
    int top = -1;
    cout << "--- Enter 5  Canceled Order Numbers --- \n" << endl;
    for (int i = 0; i < 5; i++) 
 {
       cin >> stack[++top]; 
 }
    cout << "\n---Recently Canceled Orders:\n" << endl;

    while (top >=0) 
 {
        cout << "Order #" <<  stack[top] << endl;
        top--;
    }
    
    return 0;
}
