

//I'll continue to edit this code later on, it works good but still want to change it and make it more interesting.


#include <iostream>
#include <string>
using namespace std;

char ans;
int ques = 1;
string name;

int money = 0;

int display()
{

    cout << "                                                                      WELCOME TO KAUN BANEGA CROREPATI (KBC)                                                         " << endl;
    cout << endl;
    cout << endl;
    cout << "Please Enter your first name: ";
    cin >> name;
    cout << endl;
    cout << "Welcome to KBC " << name << " Ji" << endl;
    cout << endl;

    system("cls");
    cout << "Let's Begin" << endl;
    cout << endl;
    cout << "Kaun Banega Crorepati" << endl;
}

int TopBar()
{
    system("cls");
    cout << "Question No." << ques << endl;
    cout << "Prize Money: Rs." << money << endl;
    cout << endl;
    cout << endl;
}

int que1()
{
    TopBar();
    cout << "1. What does 'Jugnoo' produce?" << endl;
    cout << "a) Sahad (Honey)" << endl;
    cout << "b) Kapas (Cotton)" << endl;
    cout << "c) Prakash (Light)" << endl;
    cout << "d) Mome (Wax)" << endl;
    cin >> ans;
    if (ans == 'c')
    {
        ques++;
        cout << endl;
        cout << "Correct Answer!" << endl;
        money += 1000;
        return 0;
    }
    else
    {

        return -1;
    }
}
int que2()
{
    TopBar();
    cout << "2. Where was the great Arab traveller Ibn Battutah born?" << endl;
    cout << "a) Saudi Arabia" << endl;
    cout << "b) Syria" << endl;
    cout << "c) Egypt" << endl;
    cout << "d) Morocco" << endl;
    cin >> ans;

    if (ans == 'd')
    {
        ques++;
        cout << endl;
        cout << "Correct Answer!" << endl;
        money += 1500;
        return 0;
    }
    else
    {

        return -1;
    }
}
int que3()
{
    TopBar();
    cout << "3. A coin of what value is called as 'Athhanni'?" << endl;
    cout << "a) 1 Rupee" << endl;
    cout << "b) 25 Paise" << endl;
    cout << "c) 50 Paise" << endl;
    cout << "d) 2 Rupees" << endl;
    cin >> ans;

    if (ans == 'c')
    {
        ques++;
        cout << endl;
        cout << "Correct Answer!" << endl;
        money += 3000;
        return 0;
    }
    else
    {

        return -1;
    }
}
int que4()
{
    TopBar();
    cout << "4. Which glacier is the primary source of the river Ganga?" << endl;
    cout << "a) Pindari" << endl;
    cout << "b) Godwin-Austen" << endl;
    cout << "c) Siachen" << endl;
    cout << "d) Gangotri" << endl;
    cin >> ans;

    if (ans == 'd')

    {
        ques++;
        cout << endl;
        cout << "Correct Answer!" << endl;
        money += 5000;
        return 0;
    }
    else
    {

        return -1;
    }
}
int que5()
{
    TopBar();
    cout << "5. Who was the first person to be awarded the Bharat Ratna posthumously?" << endl;
    cout << "a) Rajiv Gandhi" << endl;
    cout << "b) Vinoba Bhave" << endl;
    cout << "c) Lal Bahadur Shastri" << endl;
    cout << "d) Indira gandhi" << endl;
    cin >> ans;

    if (ans == 'c')
    {
        ques++;
        cout << endl;
        cout << "Correct Answer!" << endl;
        money += 15000;
        return 0;
    }
    else
    {

        return -1;
    }
}

int main()
{
    system("cls");
    display();
    TopBar();
    int one = que1();
    if (one == 0)
    {
        int two = que2();
        if (two == 0)
        {
            int three = que3();
            if (three == 0)
            {
                int four = que4();
                if (four == 0)
                {
                    int fv = que5();
                    if (fv == 0)
                    {
                        cout << endl;
                        cout << "Congratulations " << name << " Ji! You've successfully completed this game." << endl;
                        cout << "Your total prize money is Rs." << money << endl;
                    }
                    else
                    {
                        cout << endl;
                        cout << "This is a Wrong Answer! The Correct Answer is (c)" << endl;
                        cout << "Your total balance is Rs." << money << endl;
                        abort;
                    }
                }
                else
                {
                    cout << endl;
                    cout << "This is a Wrong Answer! The Correct Answer is (d)" << endl;
                    cout << "Your total balance is Rs." << money << endl;
                    abort;
                }
            }
            else
            {
                cout << endl;
                cout << "This is a Wrong Answer! The Correct Answer is (c)" << endl;
                cout << "Your total balance is Rs." << money << endl;
                abort;
            }
        }
        else
        {
            cout << endl;
            cout << "This is a Wrong Answer! The Correct Answer is (d)" << endl;
            cout << "Your total balance is Rs." << money << endl;
            abort;
        }
    }
    else
    {
        cout << endl;
        cout << "This is a Wrong Answer! The Correct Answer is (c)" << endl;
        cout << "Your total balance is Rs." << money << endl;
    }

    return 0;
}
