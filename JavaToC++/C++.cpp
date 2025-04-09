#include "C++.h"
#include <iostream>
#include <random>

int Randomizer::RandomNumberGen() {
	int number;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist(1, 100);
	number = dist(gen);
	return number;
}

int Randomizer::CheckGuess() {
	if (guess == randomNumber) {
		winner = true;
		return 0;
	}
	else if (guess < randomNumber) {
		return -1;
	}
	else {
		return 1;
	}
}

void Randomizer::Guess(int guess) {
	SetGuess(guess);
	int a = 0;
	a = CheckGuess();
	guessesLeft -= 1;
	if (a == 1) {
		std::cout << "Too High";
	}
	else if (a == -1) {
		std::cout << "Too Low";
	}
	else {
		return;
	}
	
	if (GetGuessesLeft() > 0) {
		std::cout << " Try Again" << std::endl;
	}
}