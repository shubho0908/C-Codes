#include <iostream>
#include <stdlib.h>
using namespace std;
char ans;
int que = 1, correct = 0, score = 0;
int head()
{
    system("cls");
    cout << "Question No : " << que << "                                     "
         << "Correct Answer : " << correct << "                                     "
         << "Score : " << score << endl;
}

int que1()
{
    head();
    cout << "1. Which of the following type of class allows only one object of it to be created?" << endl;
    cout << "a) Virtual class" << endl;
    cout << "b) Abstract class" << endl;
    cout << "c) Singleton class" << endl;
    cout << "d) Friend class" << endl;
    cout << "Enter your answer (a, b, c, d) : ";
    cin >> ans;
    if (ans == 'c')
    {
        que++;
        correct++;
        score += 5;
    }
    else
    {
        que++;
        correct;
        score -= 5;
    }
}
int que2()
{
    head();
    cout << "2. Which of the following concepts means determining at runtime what method to invoke?" << endl;
    cout << "a) Data hiding" << endl;
    cout << "b) Dynamic Typing" << endl;
    cout << "c) Dynamic binding" << endl;
    cout << "d) Dynamic loading" << endl;
    cout << "Enter your answer (a, b, c, d) : ";
    cin >> ans;
    if (ans == 'c')
    {
        que++;
        correct++;
        score += 5;
    }
    else
    {
        que++;
        correct;
        score -= 5;
    }
}
int que3()
{
    head();
    cout << "3. Why reference is not same as a pointer?" << endl;
    cout << "a) A reference can never be null" << endl;
    cout << "b) A reference once established cannot be changed" << endl;
    cout << "c) Reference doesn't need an explicit dereferencing mechanism" << endl;
    cout << "d) All of the above" << endl;
    cout << "Enter your answer (a, b, c, d) : ";
    cin >> ans;
    if (ans == 'd')
    {
        que++;
        correct++;
        score += 5;
    }
    else
    {
        que++;
        correct;
        score -= 5;
    }
}
int que4()
{
    head();
    cout << "4. Which of the following concepts provides facility of using object of one class inside another class?" << endl;
    cout << "a) Encapsulation" << endl;
    cout << "b) Abstraction" << endl;
    cout << "c) Composition" << endl;
    cout << "d) Inheritance" << endl;
    cout << "Enter your answer (a, b, c, d) : ";
    cin >> ans;
    if (ans == 'c')
    {
        que++;
        correct++;
        score += 5;
    }
    else
    {
        que++;
        correct;
        score -= 5;
    }
}
int que5()
{
    head();
    cout << "5. Which of the following concepts means wrapping up of data and functions together?" << endl;
    cout << "a) Abstraction" << endl;
    cout << "b) Encapsulation" << endl;
    cout << "c) Inheritance" << endl;
    cout << "d) Polymorphism" << endl;
    cout << "Enter your answer (a, b, c, d) : ";
    cin >> ans;
    if (ans == 'b')
    {
        que++;
        correct++;
        score += 5;
    }
    else
    {
        que++;
        correct;
        score -= 5;
    }
}

int result()
{
    cout << endl;
    cout << endl;
    cout << endl;
    // cout << endl;
    cout << "You've completed the Quiz." << endl;
    cout << "You've answered " << correct << " out of 5 correctly." << endl;
    if (correct < 3)
    {
        cout << "You FAILED the Quiz." << endl;
        cout << "Your total score is " << score << endl;
    }
    else
    {
        cout << "You PASSED the Quiz." << endl;
        cout << "Your total score is " << score << endl;
    }
}

int main()
{

    head();
    que1();
    que2();
    que3();
    que4();
    que5();
    result();

    return 0;
}
