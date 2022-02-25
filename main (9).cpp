/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include<iostream>
using namespace std;

void checkNumber(int num) {
   if (num % 2 == 0) {
       cout << "Number is even:" << num;
   } else {
       cout << "Number is odd:" << num;
   }
}

int main() {

   int num;
   cout << "Enter a number:";
   cin >> num;

   checkNumber(num);
   return 0;
}
