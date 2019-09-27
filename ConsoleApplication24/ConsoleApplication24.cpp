// ConsoleApplication24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int countDown(int x)
{
	
	
	while (x)
	{
		cout << x << endl;
		x--;
	}



	return x;

}




int main()
{

	int y;
	cout << "Enter A Number: ";
	cin >> y;
	cout << "The Count Down Starts In" << endl;
	countDown(y);

    
}


