#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int SignUp()
{
    system("cls");
    string user, password;
    cout << "                                                                             WELCOME TO CPP REGISTRATION PORTAL                                                       " << endl;
    cout << "                                                                            ------------------------------------                                                       " << endl;
    cout << endl;
    cout << endl;
    cout << "Registration:" << endl;
    cout << endl;
    ofstream out("data.txt");

    cout << "Please choose a suitable username: ";
    cin >> user;
    cout << endl;
    out << user << endl;
    cout << "Please choose a password : ";
    cin >> password;
    out << password << endl;
    out.close();
    cout << endl;

    return 0;
}

int Signin()
{
    system("cls");

    string user, password, us, ps;

    cout << "                                                                             WELCOME TO CPP REGISTRATION PORTAL                                                       " << endl;
    cout << "                                                                            ------------------------------------                                                       " << endl;
    cout << endl;
    cout << endl;
    cout << "Sign-In:" << endl;
    cout << endl;
    cout << "Enter username: ";
    cin >> user;
    cout << endl;
    cout << "Enter password: ";
    cin >> password;

    ifstream in;
    in.open("data.txt");
    getline(in, us);
    getline(in, ps);

    if (us == user && ps == password)
    {
        system("cls");
        cout << endl;

        cout << "You've successfully Logged into our Portal." << endl;
    }
    else
    {
        system("cls");
        cout << endl;
        cout << "User doesn't exist." << endl;
        // Signin();
    }

    return 0;
}

int main()
{
    char ans;
    SignUp();
    // data();

    cout << "Congratulations! You've successfully signed up for our portal." << endl;
    cout << endl;
    cout << "Would you like to sign-in to our portal? ['y' for yes or 'n' for no]: ";
    cin >> ans;
    if (ans == 'y')
    {
        Signin();
    }
    else
    {
        abort;
    }

    return 0;
}
