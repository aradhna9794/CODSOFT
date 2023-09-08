#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generating a random number between 1 and 100
    int hidden_number = rand() % 100 + 1;

    int guess;
    int counts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    do
    {
        cout << "Enter your Guess : ";
        cin >> guess;

        counts++;

        if (guess < hidden_number)
        {
            cout << "Guessed number is less than secret number. Try again!" << endl;
        }
        else if (guess > hidden_number)
        {
            cout << "Guessed number is greater than secret number. Try again!" << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number " << hidden_number << " in " << counts << " attempts." << endl;
        }

    }
    while (guess != hidden_number);

    return 0;
}
