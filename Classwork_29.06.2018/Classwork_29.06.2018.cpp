// Classwork_29.06.2018.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main()
{
	
	
	
	/*int n = 0;
	cin >> n;
	while (n)
	{
		cout<<n % 2;
		n /= 2;
		
	
	}
	*/
	/*double a = 0, h = 0;
	int n = 0;
	double sum = 0;
	cin  >> a >> h >> n;
	sum += (pow(a, 2) + 1)*pow(cos(a), 2) + (pow(a + n*h, 2) + 1)*pow(cos(a + n*h), 2);

	for (int i = 1; i < n; i++)
	{
		sum += 2 * ((pow((a + i*h), 2) + 1)*pow((cos(a + i*h)), 2));
	}
	cout << sum << endl;*/


	/*int n;

	bool flag ;
	while (true)
	{
		flag = false;
		cin >> n;

		for (int i = 2; i < n; i++)
			if (n%i == 0)
			{
				flag = true;
				break;
			}


		if (flag)
			cout << "Number is not prime" << endl;
		else
		{
			cout << "Number is prime" << endl;
			break;
		}
	}*/

	/*int n = 0;
	int k = 0;

	cin >> n >> k;

	for (int i = 0; i <= n; i++)
	{

		cout << n;

		for (int j = 0; j < k; j++)
		{
			cout << n;

		}

		cout << endl;
	}*/


	/*int n;
	for (int i = 1; i <= 5; i++)
	{

		for (int j = 1; j <= 5; j++)
		{
			if ((i<=j))

				cout << "+";

			else
				cout << ' ';
		}
		cout << endl;
	}

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i >= j)||(i + j) >= (n - 1))
				cout << ' ';
			else
				cout << '+';
		}
		cout << endl;
	}
*/

	system("pause");
	return 0;
}

