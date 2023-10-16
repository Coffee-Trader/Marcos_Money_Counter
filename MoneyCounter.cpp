#include <iostream>
using namespace std;

int ones;
int fives;
int tens;
int twenties;
int fifties;
int hundreds;
int total;

class money
{
	public:
		void oneDollarQuestion()
		{
			cout << "How many 1 dollar bills do you have? ";
			cin >> ones;
		}
		void fiveDollarQuestion()
		{
			cout << "How many 5 dollar bills do you have? ";
			cin >> fives;
		}
		void tenDollarQuestion()
		{
			cout << "How many 10 dollar bills do you have? ";
			cin >> tens;
		}
		void twentyDollarQuestion()
		{
			cout << "How many 20 dollar bills do you have? ";
			cin >> twenties;
		}
		void fiftyDollarQuestion()
		{
			cout << "How many 50 dollar bills do you have? ";
			cin >> fifties;
		}
		void hundredDollarQuestion()
		{
			cout << "How many 100 dollar bills do you have? ";
			cin >> hundreds;
		}
};

class endingArgument
{
	public:
		void poorOrRich()
		{
			if (total < 29)
			{
				cout << "" << endl;
				cout << "For someone with " << total << " dollars, you shouldn't be wasting so much time on the computer!" << endl;
			} else if (total >= 999)
			{
				cout << "" << endl;
				cout << "You got " << total << " dollars... Wait, that can't be right. Do the whole thing again.";
			} else
			{
				cout << "" << endl;
				cout << "That adds up to " << total << " dollars. You seen to be doing alright.";
			}
		}
};

int main()
{
	cout << "Welcome to Marcos' Dollar Bill Calculator" << endl;
	
	money moneyQuestion;
	endingArgument poorOrRichObj;
	
	moneyQuestion.oneDollarQuestion();
	moneyQuestion.fiveDollarQuestion();
	moneyQuestion.tenDollarQuestion();
	moneyQuestion.twentyDollarQuestion();
	moneyQuestion.fiftyDollarQuestion();
	moneyQuestion.hundredDollarQuestion();
	
	fives = fives * 5;
	tens = tens * 10;
	twenties = twenties * 20;
	fifties = fifties * 50;
	hundreds = hundreds * 100;
	
	total = ones + fives + tens + twenties + fifties + hundreds;
	poorOrRichObj.poorOrRich();
	return 0;
}