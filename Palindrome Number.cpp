#include <iostream>
using namespace std;


int main()
{
     int n, num, lastDigit, rev = 0;

     cout << "Enter a positive number: ";
     cin >> num;

     n = num;
    //logic
     do
     {
         lastDigit = num % 10;
         rev = (rev * 10) + lastDigit;
         num = num / 10;
     } while (num != 0);

     cout << " The reverse of the number is: " << rev << endl;

    //comparing
     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}