// Jarek Brown
// Lab3

#include <iostream>
#include <limits.h>
#include <stdio.h>

using namespace std;

int main()
{
	// Part 1 and 2:
	short n, sum = 0;
	cout << "Enter a value for n: ";
	cin >> n;
	for(short i = 0; i <= n; i++)
	{
		sum += i;
	}
	cout << "sum: " << sum << endl;
	//using the type short, an overflow will occur after n=255
	
	// Part 3:
	long n2 = 0, sum2 = 0;
	cout << "Enter a value for n2: ";
	cin >> n2;
	for(long i = 0; i <= n2; i++)
	{
		sum2 += i;
	}
	cout << "sum2: " << sum2 << endl;
	 
	/*
	 long max = LONG_MAX; //this number is too damn big
	 while(sum2 <= max) //this was my futile attempt to see what n would be
	 {
		 n2++;
		 sum2 += n2;
		 //cout << sum2 << endl;
	 }
	 cout << "n2 max: " << n2 << endl;
	*/
	//since I am using a Mac, long integers use 8 bytes instead of 4 for some reason unknown to me.
	//due to that, for me an overflow was never found using the program (even after using a loop for ~17 HOURS).
	//after using Gauss's Trick, I found that an overflow will occur when  n = 4,294,967,285
	 
	//Part 4:
	cout << "enter a value for n!: ";
	cin >> n;
	float factorial = 1;
	for(long i = n; i > 0; i--)
	{
		factorial *= i;
	}
	cout << "n!: " << factorial << endl;
	//the way to check for overflow is when 'inf' is outputted
	//the last value that works for type float is n=34
	//it will overflow using n=35
	
	//Part 5: 
	cout << "enter a value for n2!: ";
	cin >> n2;
	double factorial2 = 1;
	for(long i = n2; i > 0; i--)
	{
		factorial2 *= i;
	}
	cout << "n2!: " << factorial2 << endl;
	//n=170 is the last value that works for type double
	//it will overflow using n=171
	
	//Part 6:
	short n = 0;
	float ratio, ratioSum;
	cout << "enter n for 1/n summation: ";
	cin >> n;
	ratio = 1/n;
	for(short i = 0; i <= n; i++)
	{
		ratioSum += ratio;
	}
	cout << "float result: " << ratioSum << endl;
	
	double ratio2, ratioSum2;
	ratio2 = 1/n;
	for(short i = 0; i <= n; i++)
	{
		ratioSum2 += ratio2;
	}
	cout << "double result: " << ratioSum2 << endl;
	//float spits out zero, while double spits out a really small number
	//this is due to double storing more decimal points, so it is technically more accurate
	
	//Part 7:
	
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	 //since float isn't as precise, it loops one extra time. it is not quite 4.4, but really close
	 //double is more precise, so it stops before outputting 4.4
}