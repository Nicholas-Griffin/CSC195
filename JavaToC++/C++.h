#pragma once

class Randomizer {
private:
	int randomNumber;
	int guessesLeft;
	int guess;
	bool winner;
public:
	Randomizer() {
		guess = 0;
		guessesLeft = 5;
		randomNumber = RandomNumberGen();
		winner = false;
	}

	int RandomNumberGen();

	int CheckGuess();

	void Guess(int guess);

	void SetGuess(int guess) {
		this->guess = guess;
	}
	
	int GetGuessesLeft() {
		return guessesLeft;
	}

	bool GetWinner() {
		return winner;
	}

	int GetNumber() {
		return randomNumber;
	}
};
