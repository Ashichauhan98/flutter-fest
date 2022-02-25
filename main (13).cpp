
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    char ch;
//Asking the user to enter the character
    cout<<"Enter a caracter as you wish\n";
    //Storing the entered character in variable ch
   cin>>ch;
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')){
cout<<ch<<" is an Alphabet: ";
// If the character  is an alphabet, it is displayed
}
else
{
cout<<ch<<" is not an Alphabet: ";
}// If the character  is not an alphabet, it is displayed
getch();
    return 0;
}