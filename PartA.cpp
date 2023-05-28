#include <iostream>
using namespace std;

//Pattern 1, 4, 7, 10, 13, ....

int pattern(int n, int initial)
{
	int element = initial + 3;
	n--;
	
	if(n>1)
		pattern(n,element);
		
	else if(n==0)
		return 1;
		
	else	
		return element;
}

int main()
{
	int number;
	cout<<"Enter the number(n) - ";
	cin>>number;
	
	cout<<"The "<<number<<" element of the pattern is "<<pattern(number,1);
	
	return 0;
}
