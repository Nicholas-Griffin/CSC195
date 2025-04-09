

#include "C++.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	Randomizer item;
	cout << "What do you think the number is?" << endl;
	int ans = 0;
	while (item.GetGuessesLeft() > 0) {
		if (!item.GetWinner()) {
			cin >> ans;
			item.Guess(ans);
			if (item.GetGuessesLeft() > 0) {
				string guesses = to_string(item.GetGuessesLeft());
				cout << guesses + " Guesses Left" << endl;
			}
		}
	}
	if (item.GetWinner()) {
		cout << "Good Job" << endl;
	}
	cout << "" << endl;
	cout << "The Correct Number was " + to_string(item.GetNumber());
	cout << "" << endl;
}
