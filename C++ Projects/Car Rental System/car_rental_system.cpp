#include <iostream>
#include <time.h>
#include <fstream>
#include <string>
using namespace std;
/*
Car rental system including:
1. Login page
2. Car availibility
3. car price
4. car details*/

string name, pass, us, ps, a, b, opt, car;
char op;
int HomePage();
int CarDetails();
int CarAvailability();
int CarRent();

int CarAvailability()
{
    srand(time(0));
    int num = rand() % 100 + 1;
    system("cls");
    cout << endl;
    cout << endl;
    cout << "Please enter the name of your dream car [Enter the car name & it's model number without leaving a space between]: ";
    cin >> car;
    system("cls");
    cout << endl;
    cout << "Your Car is " << car << endl;
    if (num > 50)
    {
        cout << endl;
        cout << endl;
        cout << "Your dream car is available in it's nearby showroom." << endl;
    }
    else if (num < 50)
    {
        cout << endl;
        cout << endl;
        cout << "Sorry! Your car isn't available to book at this moment. Please try later!" << endl;
    }
    else
    {
        cout << endl;
        cout << endl;
        cout << "Error to search for your car's availabilty. Please contact it's official; showroom." << endl;
    }
}

int CarDetails()
{
    char carname;
    string ans2, menu;
    system("cls");
    cout << endl;
    cout << endl;
    cout << "Please select a car from the list: " << endl;
    cout << endl;
    cout << " \ta) Mercedes-Benz A-Class Limousine " << endl;
    cout << " \tb) Tata Punch " << endl;
    cout << " \tc) Mahindra Thar " << endl;
    cout << " \td) Lamborghini Huracan " << endl;
    cout << " \te) Hyundai Creta " << endl;
    cout << endl;
    cout << "Select an option [a, b, c, d, e]: ";
    cin >> carname;
    if (carname == 'a')
    {
        system("cls");
        cout << "Car Name: Mercedes-Benz A-Class Limousine" << endl;
        cout << endl;
        cout << "Car Price: 39.9L - 56.24L INR" << endl;
        cout << "Seating Capacity: 5 seater" << endl;
        cout << "Mileage: 13.4 - 21.4 km/lt" << endl;
        cout << "Class: Sedan" << endl;
    }
    else if (carname == 'b')
    {
        system("cls");
        cout << "Car Name: Tata Punch" << endl;
        cout << endl;
        cout << "Car Price: 5.49L - 9.39L INR" << endl;
        cout << "Seating Capacity: 5 seater" << endl;
        cout << "Mileage: 19.2 - 23.7 km/lt" << endl;
        cout << "Class: SUV" << endl;
    }
    else if (carname == 'c')
    {
        system("cls");
        cout << "Car Name: Mahindra Thar" << endl;
        cout << endl;
        cout << "Car Price: 12.79L - 14.79L (Petrol) INR" << endl;
        cout << "Car Price: 12.99L - 15.09L (Diesel) INR" << endl;
        cout << "Seating Capacity: 4 seater" << endl;
        cout << "Mileage: 13 - 15.2 km/lt" << endl;
        cout << "Class: SUV" << endl;
    }
    else if (carname == 'd')
    {
        system("cls");
        cout << "Car Name: Lamborghini Huracan" << endl;
        cout << endl;
        cout << "Car Price: 3.22Cr - 4.99Cr INR" << endl;
        cout << "Seating Capacity: 2 seater" << endl;
        cout << "Mileage: 10.3 - 11.9 km/lt" << endl;
        cout << "Class: Coupe" << endl;
    }
    else if (carname == 'e')
    {
        system("cls");
        cout << "Car Name: Hyundai Creta" << endl;
        cout << endl;
        cout << "Car Price: 9.82L - 17.32L INR" << endl;
        cout << "Seating Capacity: 5 seater" << endl;
        cout << "Mileage: 16.8 - 21.4 km/lt" << endl;
        cout << "Class: SUV" << endl;
    }
    else
    {
        cout << "Please choose from the mentioned list." << endl;
        cout << endl;
        cout << "Would you like to choose again? [Type 'yes' or 'no']: ";
        cin >> ans2;
        if (ans2 == "yes")
        {
            CarDetails();
        }
        else
        {
            abort;
        }
    }

    cout << endl;
    cout << endl;

    cout << "Press 'MM' to go back to Main Menu: ";
    cin >> menu;
    if (menu == "MM")
    {
        HomePage();
    }
    else
    {
        cout << "Incorrect keyword!" << endl;
    }
}

int signup()
{
    system("cls");
    cout << "\t\t\t\t\t\t\t  Welcome to Car Dekho.com \t\t\t\t\t\t\t" << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t\t     Registration Form \t\t\t\t\t\t\t" << endl;
    cout << endl;
    cout << "Enter an username: ";
    cin >> name;
    cout << endl;
    cout << "Set a password: ";
    cin >> pass;
    ofstream out("data1.txt");
    out << a;
    out << "username: " << name << endl;
    out << "password: " << pass << endl;
}

int CarRent()
{
    string name1, car1, state, cc;
    long int pin,number;
    system("cls");
    cout << "Enter the car you want to rent: ";
    cin >> car1;
    cout<<endl;
    cout << "Enter your name: ";
    cin >> name1;
    cout<<endl;
    cout << "Enter your state: ";
    cin >> state;
    cout<<endl;
    cout << "Enter your Area pincode: ";
    cin >> pin;
    cout<<endl;
    cout << "Enter your mobile number: ";
    cin >> number;

    cout << endl;
    cout << endl;
    cout << "Type 'Confirm' for Confirmation of the rent of your car: ";
    cin >> cc;
    if (cc == "Confirm")
    {
        system("cls");
        cout << endl;
        cout << endl;
        cout << "Congratulations! Your car has been booked, You'll recieve your car within few weeks." << endl;
    }
    else
    {
        system("cls");
        cout << endl;
        cout << endl;
        cout << "Error! Incorrect keyword." << endl;
        cout << endl;
        CarRent();
    }
}

int HomePage()
{
    // system("cls");
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t How can we help you? \t\t\t\t\t\t" << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t a) Car Availability \t\t\t\t" << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t b) Car Details \t\t\t\t" << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t c) Rent a Car \t\t\t\t" << endl;
    cout << endl;
    cout << "Please select an option ['a' or 'b' or 'c']: ";
    cin >> op;
    if (op == 'a')
    {
        CarAvailability();
    }
    else if (op == 'b')
    {
        CarDetails();
    }
    else if (op == 'c')
    {
        CarRent();
    }
    else
    {
        cout << endl;
        cout << "Please choose 'a' or 'b'." << endl;
    }
}
int signin()
{
    system("cls");
    ifstream in("data1.txt");
    in >> b;
    cout << "\t\t\t\t\t\t\t  Welcome to Car Dekho.com \t\t\t\t\t\t\t" << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t\t      Log-In Page \t\t\t\t\t\t\t" << endl;
    cout << endl;
    cout << "Enter your username: ";
    cin >> us;
    cout << endl;
    cout << "Enter your password: ";
    cin >> ps;

    if (us == name && ps == pass)
    {
        system("cls");
        cout << "\t\t\t\t\t\t\t  Welcome to Car Dekho.com \t\t\t\t\t\t\t" << endl;
        cout << endl;
        cout << "\n\n\n";
        cout << "You've successfully Loged-In to our website." << endl;
        cout << endl;
        HomePage();
    }
    else
    {
        system("cls");
        cout << "\n\n\n";

        cout << "User doesn't exist." << endl;
        cout << "\n\n";
        cout << "Would you like to Sign-Up to enjoy our services? [Type 'yes' or 'no']: ";
        cin >> opt;
        if (opt == "yes")
        {
            signup();
            signin();
        }
        else if (opt == "no")
        {
            abort;
        }
        else
        {
            cout << endl;
            cout << endl;
            cout << "Type 'yes' or 'no' only." << endl;
        }
    }
}

int main()
{
    signup();
    system("cls");
    cout << "\n\n\n";
    cout << "\t\t\t\tCongratulations! You've successfully registered your account with us." << endl;
    cout << "\n\n";
    cout << "Would you like to Log-In to our main website? [Type 'yes' or 'no']: ";
    cin >> opt;
    if (opt == "yes")
    {
        signin();
    }
    else
    {
        abort;
    }
    return 0;
}
