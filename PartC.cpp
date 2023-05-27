#include <iostream>
using namespace std;

int pattern(int n)
{
	if(n==1)
		return 5;
	else
		return pattern(n-1) * -5;
}

int main()
{
	int number;
	cout<<"Enter the number(n) - ";
	cin>>number;
	
	cout<<"The "<<number<<" element of the pattern is "<<pattern(number);
	
	return 0;
}
