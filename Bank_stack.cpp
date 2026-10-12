#include <iostream>
#include <stack>
using namespace std;
int main() {
    int stack[5];
    int top = -1;
    cout << "--- Enter 5 Order Numbers --- \n" << endl;
    for (int i = 0; i < 5; i++) 
    {
       cin >> stack[++top]; 
    }
    cout << "\n---Recently Served Orders:\n" << endl;

    while (top >=0) 
    {
        cout << "Order #" <<  stack[top] << endl;
        top--;
    }
    
    return 0;
}