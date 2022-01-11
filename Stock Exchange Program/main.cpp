//Stock-exchange program
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Global Variables
string username, password;
char dob[20];

//Forward Declarations
int Open();
void Gain(), Lose();
int TM();
int TT();
int TS();
int TP();
int RL();
int Portfolio();
int Index();
int Nifty();
int Home();
int Sensex();

//Main Code:

int Login()
{
    string us, ps;
    cout << "\t\t\t\t\t\t Login to your Demat Account \t\t\t\t\t\t" << endl;
    cout << endl;
    cout << endl;
    cout << "Enter your username: ";
    cin >> us;
    cout << endl;
    cout << "Enter your password: ";
    cin >> ps;
    if (us == username && ps == password)
    {
        system("cls");
        cout << "Congrats! You've successfully Logged In to your Demat account." << endl;
        cout << endl;
        Home();
    }
    else if (us != username && ps == password)

    {
        system("cls");

        cout << "Incorrect username!" << endl;
        cout << endl;
        Login();
    }
    else if (us == username && ps != password)

    {
        system("cls");

        cout << "Incorrect password!" << endl;
        cout << endl;
        Login();
    }
    else
    {
        system("cls");

        cout << "This user doesn't exist! Please create a Demat account first." << endl;
        cout << endl;
        Open();
    }
}

int Open()
{
    ofstream out("s.data.txt");
    cout << "\t\t\t\t\t\t\t Open Your Demat Account \t\t\t\t\t\t\t" << endl;
    cout << endl;
    cout << endl;
    cout << "Create an username: ";
    cin >> username;
    cout << endl;
    cout << "Choose a password: ";
    cin >> password;
    if (password == username)
    {
        system("cls");
        cout << "Your username and password can't be exact same." << endl;
        cout << endl;
        Open();
    }
    else
    {
        cout << endl;
        cout << "Enter your DOB [dd/mm/yyyy]: ";
        cin >> dob;
        if (dob[2] && dob[5] != '/')
        {
            system("cls");
            cout << "Please enter your Date of Birth in the correct formate [dd/mm/yyyy]." << endl;
            cout << endl;
            Open();
        }
        else
        {
            system("cls");
            cout << "Congrats! You've successfully created your Demat account." << endl;
            cout << endl;
            Login();
        }

        out << "Username: " << username << endl;
        out << "Password: " << password << endl;
        out << "Date-of-birth: " << dob << endl;
    }
}

int Home()
{
    int option;
    cout << "Please choose an option from the below " << endl;
    cout << endl;
    cout << "1. Portfolio\n";
    cout << "2. Index Funds (NIFTY50 & SENSEX)\n";
    cout << "3. Top Gainers\n";
    cout << "4. Top Losers\n";
    cout << endl;
    cout << "select an option [1/2/3/4]: ";
    cin >> option;

    if (option == 1)
    {
        system("cls");
        Portfolio();
    }
    else if (option == 2)
    {
        system("cls");
        Index();
    }
    else if (option == 3)
    {
        system("cls");
        Gain();
    }
    else if (option == 4)
    {
        system("cls");
        Lose();
    }
    else
    {
        system("cls");
        cout << "Invalid Input!" << endl;
        cout << endl;
        Home();
    }
}

void buy()
{
    string type, ans, enter;
    long int shares, price;
    cout << "Please Select Delievery type [BSE/NSE]: ";
    cin >> type;
    if (type == "NSE" || type == "BSE")
    {
        cout << "Please Select no. of shares (" << type << "): ";
        cin >> shares;
        cout << "Please Enter Price Limit: ";
        cin >> price;
        cout << endl;
        cout << "Enter 'Confirm' for the confirmation of your order: ";
        cin >> ans;
        if (ans == "Confirm")
        {
            system("cls");
            cout << "Congrats! You've successfully purchased " << shares << " shares worth of Rs " << price << endl;
        }
        else
        {
            system("cls");
            cout << "Transaction failed! Please enter valid input." << endl;
            cout << endl;
            buy();
        }
    }
    else
    {
        system("cls");

        cout << "Invalid Input! Please type either 'NSE' or 'BSE'." << endl;
        cout << endl;
        buy();
    }
}

void sell()
{
    string type, ans, enter;
    long int shares, price;
    cout << "Please Select Delievery type [BSE/NSE]: ";
    cin >> type;
    if (type == "NSE" || type == "BSE")
    {
        cout << "Please Select no. of shares (" << type << "): ";
        cin >> shares;
        cout << "Please Enter Price Limit: ";
        cin >> price;
        cout << endl;
        cout << "Enter 'Confirm' for the confirmation of your order: ";
        cin >> ans;
        if (ans == "Confirm")
        {
            system("cls");
            cout << "Congrats! You've successfully sold " << shares << " shares worth of Rs " << price << endl;
        }
        else
        {
            system("cls");
            cout << "Transaction failed! Please enter valid input." << endl;
            cout << endl;
            sell();
        }
    }
    else
    {
        system("cls");

        cout << "Invalid Input! Please type either 'NSE' or 'BSE'." << endl;
        cout << endl;
        sell();
    }
}

void Gain()
{
    string enter;
    system("cls");
    cout << "Top Gainers (NIFTY 100)" << endl;
    cout << endl;
    cout << "1. Adani Green Energy" << endl;
    cout << "Rs 1567.95" << endl;
    cout << "129.05 (8.97%)" << endl;
    cout << endl;
    cout << "2. HCL Technologies" << endl;
    cout << "Rs 1343.65" << endl;
    cout << "55.55 (4.31%)" << endl;
    cout << endl;
    cout << "3. Adani Ports" << endl;
    cout << "Rs 765.40" << endl;
    cout << "26.25 (3.55%)" << endl;
    cout << endl;
    cout << "4. Adani Transmissions" << endl;
    cout << "Rs 1867.45" << endl;
    cout << "47.75 (2.62%)" << endl;
    cout << endl;
    cout << "Enter 'H' to return to Home: ";
    cin >> enter;
    if (enter == "H")
    {
        system("cls");

        Home();
    }
    else
    {
        cout << "Invalid Input!" << endl;
        cout << endl;
    }
}

void Lose()
{
    string enter;
    system("cls");
    cout << "Top Losers (NIFTY 100)" << endl;
    cout << endl;
    cout << "1. JSW Steel" << endl;
    cout << "Rs 645.70" << endl;
    cout << "-26.40 (8.97%)" << endl;
    cout << endl;
    cout << "2. Tata Steel" << endl;
    cout << "Rs 1130.25" << endl;
    cout << "-38.80 (3.32%)" << endl;
    cout << endl;
    cout << "3. Avenue Supermarts" << endl;
    cout << "Rs 4504.90" << endl;
    cout << "-128.65 (2.78%)" << endl;
    cout << endl;
    cout << "4. NMDC" << endl;
    cout << "Rs 136.45" << endl;
    cout << "-3.50 (2.50%)" << endl;
    cout << endl;
    cout << "Enter 'H' to return to Home: ";
    cin >> enter;
    if (enter == "H")
    {
        system("cls");

        Home();
    }
    else
    {
        cout << "Invalid Input!" << endl;
        cout << endl;
    }
}

int Index()
{
    int option;
    cout << "Please choose an option:\n";
    cout << "\n";
    cout << "1. NIFTY 50\n";
    cout << "2. SENSEX\n";
    cout << endl;
    cout << "Enter an option[1 or 2]: ";
    cin >> option;

    if (option == 1)
    {
        system("cls");
        Nifty();
    }

    else if (option == 2)
    {
        system("cls");
        Sensex();
    }
    else
    {
        system("cls");
        cout << "Wrong input!" << endl;
        cout << endl;
        Index();
    }
}

int Nifty()
{
    string enter;
    cout << "Nifty 50" << endl;
    cout << "18055.75 +52.45(0.29)" << endl;
    cout << endl;
    cout << "|" << endl;
    cout << "|" << endl;
    cout << "|                 _" << endl;
    cout << "|                _ _" << endl;
    cout << "|               _   _  _       _" << endl;
    cout << "|             _      _   _   _   _" << endl;
    cout << "|        _   _             _      _      _" << endl;
    cout << "|      _   _                       _   _   _" << endl;
    cout << "|    _                              __" << endl;
    cout << "|   _" << endl;
    cout << "|_" << endl;
    cout << "|__________________________________________________" << endl;
    cout << endl;
    cout << endl;
    cout << "Performance:" << endl;
    cout << endl;
    cout << "Today's Low \t\t\t\t\t\t Today's High" << endl;
    cout << " 17496.40   \t\t\t\t\t\t   18081.25 " << endl;
    cout << endl;
    cout << endl;

    cout << "About: \n";
    cout << endl;
    cout << "The NIFTY 50 is a stock market index in India that represents a weighted average of 50 of the country's major firms listed on  the National Stock Exchange. It is one of India's two primary stock indices, the other being the BSE SENSEX." << endl;
    cout << endl;
    cout << "Enter 'H' to return to Home: ";
    cin >> enter;
    if (enter == "H")
    {
        system("cls");

        Home();
    }
    else
    {
        cout << "Invalid Input!" << endl;
        cout << endl;
    }
}

int Sensex()
{
    string enter;
    cout << "SENSEX" << endl;
    cout << "60616.9 +221.45(0.37)" << endl;
    cout << endl;
    cout << "|" << endl;
    cout << "|" << endl;
    cout << "|                 _" << endl;
    cout << "|                _ _" << endl;
    cout << "|               _   _  _       _" << endl;
    cout << "|             _      _   _   _   _" << endl;
    cout << "|        _   _             _      _      _" << endl;
    cout << "|      _   _                       _   _   _" << endl;
    cout << "|    _                              __" << endl;
    cout << "|   _" << endl;
    cout << "|_" << endl;
    cout << "|__________________________________________________" << endl;
    cout << endl;
    cout << endl;
    cout << "Performance:" << endl;
    cout << endl;
    cout << "Today's Low \t\t\t\t\t\t Today's High" << endl;
    cout << " 60281.56   \t\t\t\t\t\t   60689.72 " << endl;
    cout << endl;
    cout << endl;

    cout << "About: \n";
    cout << endl;
    cout << "In simple terms, the Sensex is the total value of equities from 30 different firms that are listed on the Bombay Stock Exchange (BSE).... People get more interested in buying stocks if the Sensex rises, for example, because they anticipate the economy will grow. However, when the Sensex falls, investors tend to cease investing in the economy." << endl;
    cout << endl;
    cout << "Enter 'H' to return to Home: ";
    cin >> enter;
    if (enter == "H")
    {
        system("cls");

        Home();
    }
    else
    {
        cout << "Invalid Input!" << endl;
        cout << endl;
    }
}

int Portfolio()
{
    int num;
    string opn;
    cout << "Symbols \t\t\t\t P&L(Rs.) \t\t Daily Gains(%) \t\t Total Gains(%)" << endl;
    cout << endl;
    cout << "1.TATAMOTORS \t\t\t\t Rs 16,000 \t\t    +5.86% \t\t\t     15.66%" << endl;
    cout << "2.TATASTEEL  \t\t\t\t Rs 55,000 \t\t    +6.05% \t\t\t     33.11%" << endl;
    cout << "3.TATAPOWER  \t\t\t\t Rs 8,000  \t\t    -3.75% \t\t\t     12.08%" << endl;
    cout << "4.TITAN      \t\t\t\t Rs 12,000 \t\t    -6.55% \t\t\t     16.58% " << endl;
    cout << "5.RELIANCE   \t\t\t\t Rs 25,500 \t\t    +4.45% \t\t\t     26.31% " << endl;
    cout << endl;
    cout << "To see any of your purchased stock's details, Enter [1/2/3/4]: ";
    cin >> num;
    if (num == 1)
    {
        system("cls");
        TM();
    }
    else if (num == 2)
    {
        system("cls");
        TS();
    }
    else if (num == 3)
    {
        system("cls");
        TP();
    }
    else if (num == 4)
    {
        system("cls");
        TT();
    }
    else if (num == 5)
    {
        system("cls");
        RL();
    }
    else
    {
        system("cls");
        cout << "Invalid input! Please choose a valid option." << endl;
        cout << endl;
        Portfolio();
    }
}

int TM()
{
    string opn;

    cout << "Tata Motors" << endl;
    cout << "Rs 490.86  +1.75(0.36%)" << endl;
    cout << endl;
    cout << "|" << endl;
    cout << "|" << endl;
    cout << "|                 _" << endl;
    cout << "|                _ _" << endl;
    cout << "|               _   _  _       _" << endl;
    cout << "|             _      _   _   _   _" << endl;
    cout << "|        _   _             _      _      _" << endl;
    cout << "|      _   _                       _   _   _" << endl;
    cout << "|    _                              __" << endl;
    cout << "|   _" << endl;
    cout << "|_" << endl;
    cout << "|__________________________________________________" << endl;
    cout << endl;
    cout << endl;
    cout << "Performance:" << endl;
    cout << endl;
    cout << "Today's Low \t\t\t\t\t\t Today's High" << endl;
    cout << "   483.99   \t\t\t\t\t\t    503.14 " << endl;
    cout << endl;
    cout << endl;
    cout << "Enter 'Buy' to buy more shares, Enter 'Sell' to sell your shares or Enter 'back' to go back to Home: ";
    cin >> opn;
    if (opn == "Buy")
    {
        system("cls");

        buy();
    }
    else if (opn == "Sell")
    {
        system("cls");

        sell();
    }
    else if (opn == "back")
    {
        system("cls");

        Home();
    }
    else
    {
        cout << "Please enter a valid input." << endl;
        cout << endl;
        TM();
    }
}

int TS()
{
    string opn;
    cout << "Tata Steel" << endl;
    cout << "Rs 1130.00  -39.40(3.43%)" << endl;
    cout << endl;
    cout << "|" << endl;
    cout << "|" << endl;
    cout << "|                         _" << endl;
    cout << "|                        _  _" << endl;
    cout << "|                       _     _               _" << endl;
    cout << "|                      _       _             _" << endl;
    cout << "|        _           _            _         _" << endl;
    cout << "|      _   _       _                _     _   " << endl;
    cout << "|    _       _   _                      __" << endl;
    cout << "|   _          _" << endl;
    cout << "|_" << endl;
    cout << "|__________________________________________________" << endl;
    cout << endl;
    cout << endl;
    cout << "Performance:" << endl;
    cout << endl;
    cout << "Today's Low \t\t\t\t\t\t Today's High" << endl;
    cout << "  1113.00   \t\t\t\t\t\t   1162.70 " << endl;
    cout << endl;
    cout << endl;
    cout << "Enter 'Buy' to buy more shares, Enter 'Sell' to sell your shares or Enter 'back' to go back to Home: ";
    cin >> opn;
    if (opn == "Buy")
    {
        system("cls");

        buy();
    }
    else if (opn == "Sell")
    {
        system("cls");

        sell();
    }
    else if (opn == "back")
    {
        system("cls");

        Home();
    }
    else
    {
        cout << "Please enter a valid input." << endl;
        cout << endl;
        TS();
    }
}

int TP()
{
    string opn;

    cout << "Tata Power" << endl;
    cout << "Rs 232.80  +1.10(0.4%)" << endl;
    cout << endl;
    cout << "|" << endl;
    cout << "|" << endl;
    cout << "|                 _" << endl;
    cout << "|                _ _" << endl;
    cout << "|               _   _  _       _" << endl;
    cout << "|             _      _   _   _   _" << endl;
    cout << "|        _   _             _      _      _" << endl;
    cout << "|      _   _                       _   _   _" << endl;
    cout << "|    _                              __" << endl;
    cout << "|   _" << endl;
    cout << "|_" << endl;
    cout << "|__________________________________________________" << endl;
    cout << endl;
    cout << endl;
    cout << "Performance:" << endl;
    cout << endl;
    cout << "Today's Low \t\t\t\t\t\t Today's High" << endl;
    cout << "   231.80   \t\t\t\t\t\t    236.70 " << endl;
    cout << endl;
    cout << endl;
    cout << "Enter 'Buy' to buy more shares, Enter 'Sell' to sell your shares or Enter 'back' to go back to Home: ";
    cin >> opn;
    if (opn == "Buy")
    {
        system("cls");

        buy();
    }
    else if (opn == "Sell")
    {
        system("cls");

        sell();
    }
    else if (opn == "back")
    {
        system("cls");

        Home();
    }
    else
    {
        cout << "Please enter a valid input." << endl;
        cout << endl;
        TP();
    }
}

int TT()
{
    string opn;

    cout << "Titan" << endl;
    cout << "Rs 2655.50  -1.65(0.05%)" << endl;
    cout << endl;
    cout << "|" << endl;
    cout << "|" << endl;
    cout << "|                 _" << endl;
    cout << "|                _ _" << endl;
    cout << "|               _   _  _        " << endl;
    cout << "|             _      _   _        " << endl;
    cout << "|        _   _             _             _" << endl;
    cout << "|      _   _                  _     _   _   _" << endl;
    cout << "|    _                           _    _" << endl;
    cout << "|   _" << endl;
    cout << "|_" << endl;
    cout << "|__________________________________________________" << endl;
    cout << endl;
    cout << endl;
    cout << "Performance:" << endl;
    cout << endl;
    cout << "Today's Low \t\t\t\t\t\t Today's High" << endl;
    cout << "  2634.30   \t\t\t\t\t\t    2678.75  " << endl;
    cout << endl;
    cout << endl;
    cout << "Enter 'Buy' to buy more shares, Enter 'Sell' to sell your shares or Enter 'back' to go back to Home: ";
    cin >> opn;
    if (opn == "Buy")
    {
        system("cls");

        buy();
    }
    else if (opn == "Sell")
    {
        system("cls");

        sell();
    }
    else if (opn == "back")
    {
        system("cls");

        Home();
    }
    else
    {
        cout << "Please enter a valid input." << endl;
        cout << endl;
        TT();
    }
}

int RL()
{
    string opn;

    cout << "Reliance Industries" << endl;
    cout << "Rs 2450.65  +12.45(0.5%)" << endl;
    cout << endl;
    cout << "|" << endl;
    cout << "|" << endl;
    cout << "|                 _" << endl;
    cout << "|                _ _" << endl;
    cout << "|               _   _  _       _" << endl;
    cout << "|             _      _   _   _   _" << endl;
    cout << "|        _   _             _      _      _" << endl;
    cout << "|      _   _                       _   _   _" << endl;
    cout << "|    _                              __" << endl;
    cout << "|   _" << endl;
    cout << "|_" << endl;
    cout << "|__________________________________________________" << endl;
    cout << endl;
    cout << endl;
    cout << "Performance:" << endl;
    cout << endl;
    cout << "Today's Low \t\t\t\t\t\t Today's High" << endl;
    cout << "  2435.00   \t\t\t\t\t\t   2474.95 " << endl;
    cout << endl;
    cout << endl;
    cout << "Enter 'Buy' to buy more shares, Enter 'Sell' to sell your shares or Enter 'back' to go back to Home: ";
    cin >> opn;
    if (opn == "Buy")
    {
        system("cls");

        buy();
    }
    else if (opn == "Sell")
    {
        system("cls");

        sell();
    }
    else if (opn == "back")
    {
        system("cls");

        Home();
    }
    else
    {
        cout << "Please enter a valid input." << endl;
        cout << endl;
        RL();
    }
}

int main()
{
    system("cls");
    // Open();
    sell();

    return 0;
}
