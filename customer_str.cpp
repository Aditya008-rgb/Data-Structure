#include <iostream>
#include <string>
using namespace std;

int main()
{
   int queue[5];
   int front = 0;
   int rear = 0;

   //Add orders
   cout << "Enter 5 customer order numbers:\n";

   for (int i = 0; i < 5; i++)
   {
       cin >> queue[rear];
       rear++;
   }

   // process orders
   cout <<"\nprocessing Orders:\n";

   while (front < rear)
   {
       cout << "processing Orders: " << queue[front] << endl;
       front++;
   }

   return 0;

}
