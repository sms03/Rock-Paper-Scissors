#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum Choice { ROCK, PAPER, SCISSORS };

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation

    int playerChoice;
    int computerChoice = rand() % 3; // 0: ROCK, 1: PAPER, 2: SCISSORS

    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ";
    cin >> playerChoice;

    if (playerChoice < 0 || playerChoice > 2) {
        cout << "Invalid choice. Please enter 0, 1, or 2." << endl;
        return 1;
    }

    cout << "Computer's choice: ";
    switch (computerChoice) {
        case ROCK:
            cout << "Rock" << endl;
            break;
        case PAPER:
            cout << "Paper" << endl;
            break;
        case SCISSORS:
            cout << "Scissors" << endl;
            break;
    }

    cout << "Your choice: ";
    switch (playerChoice) {
        case ROCK:
            cout << "Rock" << endl;
            break;
        case PAPER:
            cout << "Paper" << endl;
            break;
        case SCISSORS:
            cout << "Scissors" << endl;
            break;
    }

    // Determine the winner
    if (playerChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((playerChoice == ROCK && computerChoice == SCISSORS) ||
               (playerChoice == PAPER && computerChoice == ROCK) ||
               (playerChoice == SCISSORS && computerChoice == PAPER)) {
        cout << "Congratulations! You win!" << endl;
    } else {
        cout << "Sorry, you lose. Better luck next time!" << endl;
    }

    return 0;
}