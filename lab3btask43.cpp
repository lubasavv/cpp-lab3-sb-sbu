#include<iostream>
using namespace std;

int main()
{

int k, i = 0, sum_k = 0, number;
cout << "Enter the amount of integers to sum " << i<<": ";
cin >> k;
 if (k == 0)
 {
cout << "The sum of 0 integers is: 0\n";
return 0;
}
while (i < k) 
{
cout << "Enter an integer: ";
cin >> number;
if (cin.fail()) 
{
cout << "Invalid input. Enter an integer:\n";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
continue;
}
sum_k += number;
i++;
}
cout << " The total sum of " << k << " integers is: " << sum_k;
return 0;
}
