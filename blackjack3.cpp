// blackjack.cpp : This demonstrates functions from the sixDeck.h class
//

#include <iostream>
#include"sixDeck.h"
#include<string>
#include<ctime>
#include<iomanip>

int main()
{
	sixDeck test;
	test.shuffle();

	for (int count = 0; count < 312; count++)
	{
		cout << count + 1 << ". " << test.draw() << endl;
	}
}