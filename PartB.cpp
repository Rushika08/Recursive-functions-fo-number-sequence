#include <iostream>
using namespace std;

int pattern(int n)
{
	if(n==1)
		return 2;
	else
		return pattern(n-1) * 2;
}

int main()
{
	int number;
	cout<<"Enter the number(n) - ";
	cin>>number;
	
	cout<<"The "<<number<<" element of the pattern is "<<pattern(number);
	
	return 0;
}
