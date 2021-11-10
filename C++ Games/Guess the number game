#include <iostream>
#include <time.h>
using namespace std;

//Guess the Number game

int main()
{
    int num, guess, nguess = 1;
    srand(time(0));
    num = rand() % 100 + 1;
    do
    {
        cout << "Guess the number:" << endl;
        cin >> guess;
        if (guess > num)
        {
            cout << "Lower number please!" << endl;
        }
        else if (guess < num)
        {
            cout << "Higher number please!" << endl;
        }
        else
        {
            cout << "You've guessed it in " << nguess << " attempts." << endl;
        }
        nguess++;

    } while (guess != num);

    return 0;
}
