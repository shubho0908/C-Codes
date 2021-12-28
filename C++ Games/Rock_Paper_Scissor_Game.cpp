#include <iostream>
#include <time.h>
using namespace std;

//This code is inspired by CodeWithHarry sir.

int game(char you, char comp)
{
    //Draw
    if (you == comp)
    {
        return 0;
    }

    //Game Conditions
    if (you == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    if (you == 'p' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'p')
    {
        return 1;
    }
    if (you == 's' && comp == 'r')
    {
        return -1;
    }
    else if (you == 'r' && comp == 's')
    {
        return 1;
    }
}

int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;
    if (number < 33)
    {
        comp = 'r';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'p';
    }
    else
    {
        comp = 's';
    }

    cout << "Enter 'r' for Rock, 's' for Scissors & 'p' for Paper." << endl;
    cin >> you;
    int result = game(you, comp);
    if (result == 0)
    {
        cout << "Oh no! It's a draw." << endl;
    }
    else if (result == 1)
    {
        cout << "You Win!" << endl;
    }
    else
    {
        cout << "You Lose!" << endl;
    }

    cout << "You chose " << you << " and Computer chose " << comp << endl;

    return 0;
}
