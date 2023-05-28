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

//Pattern 5, -25, 125, -625, 3125, ....

int pattern3(int n)
{
	if(n==1)
		return 5;
	else
		return pattern3(n-1) * -5;
}

//Pattern 1, 3, 6, 10, 15, 21, ...

int pattern4(int n)
{
	if(n==1)
		return 1;
	else
		return pattern4(n-1)+n;
}

//Pattern 1, 2, 6, 24, 120, 720, ...

int pattern5(int n)
{
	if(n==1)
		return 1;
	else
		return pattern5(n-1)*n;
}

//Pattern 1, -1, 2, -3, 5, -8, 13, -21, ...

int pattern6(int n)
{
	if(n==1)
		return 1;
	else if(n==2)
		return -1;
	else
		return pattern6(n-2)-pattern3(n-1);	
}


int main()
{
	int number;
	cout<<"Enter the number(n) - ";
	cin>>number;
	
	cout<<"The "<<number<<" element of the pattern is "<<pattern(number,1);
	
	return 0;
}
