#include <iostream>
using namespace std;

//Pattern 1, 4, 7, 10, 13, ....

int pattern1(int n, int initial)
{
	int element = initial + 3;
	n--;
	
	if(n>1)
		pattern1(n,element);
		
	else if(n==0)
		return 1;
		
	else	
		return element;
}

//Pattern 2, 4, 8, 16, 32, ....

int pattern2(int n)
{
	if(n==1)
		return 2;
	else
		return pattern2(n-1) * 2;
}


int main()
{
	int number;
	cout<<"Enter the number(n) - ";
	cin>>number;
	
	cout<<"The "<<number<<" element of the pattern is "<<pattern(number,1);
	
	return 0;
}
