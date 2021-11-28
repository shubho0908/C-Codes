// STUDENT REPORT MANAGEMENT

// 1. Takes Input/Output from user
// 2. Program collects student details like name, roll, marks in each subject and calculates their grades

#include <iostream>
using namespace std;


int ReportCard(){
    string name, name2,enter;
    char sec;
    int roll,clas;
    float marks[5];

    cout<<"Enter the name of the student: ";
    cin>>name>>name2;
    cout<<endl;
    cout<<"Enter "<<name<<" "<<name2<<"'s Roll Number: ";
    cin>>roll;
    cout<<endl;
    cout<<"Enter "<<name<<" "<<name2<<"'s Class: ";
    cin>>clas;
    cout<<endl;
    cout<<"Enter "<<name<<" "<<name2<<"'s Section: ";
    cin>>sec;
    cout<<endl;
    cout<<"Enter "<<name<<" "<<name2<<"'s English Marks: ";
    cin>>marks[0];
    cout<<endl;
    
    cout<<"Enter "<<name<<" "<<name2<<"'s Maths Marks: ";
    cin>>marks[1];
    cout<<endl;

    cout<<"Enter "<<name<<" "<<name2<<"'s Physics Marks: ";
    cin>>marks[2];
    cout<<endl;

    cout<<"Enter "<<name<<" "<<name2<<"'s Chemistry Marks: ";
    cin>>marks[3];
    cout<<endl;

    cout<<"Enter "<<name<<" "<<name2<<"'s Hindi Marks: ";
    cin>>marks[4];
    cout<<endl;

cout<<"Type 'Enter' to check the result: ";
cin>>enter;
if (enter == "Enter")
{
    system("cls");
    cout<<endl;
    cout<<name<<" "<<name2<<" of Class: "<<clas<<" Sec: "<<sec<<"Roll No. "<<roll<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Overall Percentage is "<<((marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/500)*100<<"%"<<endl;

}
else{
    cout<<"Incorrect! Please try again"<<endl;
    cout<<endl;
    ReportCard();
}

}

int Attendance(){
  string name, name2,enter;
    char sec;
    int roll,clas,attend, total = 280;
    float marks[5];

    cout<<"Enter the name of the student: ";
    cin>>name>>name2;
    cout<<endl;
    cout<<"Enter "<<name<<" "<<name2<<"'s Roll Number: ";
    cin>>roll;
    cout<<endl;
    cout<<"Enter "<<name<<" "<<name2<<"'s Class: ";
    cin>>clas;
    cout<<endl;
    cout<<"Enter "<<name<<" "<<name2<<"'s Section: ";
    cin>>sec;
    cout<<endl;
    cout<<"Enter the number of days "<<name<<" didn't attended class: ";
    cin>>attend;
    cout<<endl;
    cout<<name<<" attended total "<<(total-attend)<<" days out of "<<total<<" days."<<endl;

}





int StudentDetails()
{
    char opt;
    cout << "\t\t\t\t\t\t\t STUDENT REPORT SYSTEM" << endl;
    cout << endl;
    cout << endl;
    cout << "Please select an option from the following list: " << endl;
    cout << endl;
    cout << "a) Student Report Card Entry" << endl;
    cout << "b) Student Attendance Entry" << endl;
    cout << endl;
    cout << "Choose an option: ";
    cin >> opt;
    if (opt == 'a')
    {
        system("cls");
        ReportCard();
    }
    else if (opt == 'b')
    {
        system("cls");
        Attendance();
    }
    else
    {
        cout << "Incorrect! Please try again." << endl;
        cout << endl;
        StudentDetails();
    }
}

int HomePage()
{
    string type;
    system("cls");
    cout << "\t\t\t\t\t\t\t Welcome! Dear Sir/Madam" << endl;
    cout << endl;
    cout << endl;
    cout << "Type 'Enter' to continue: ";
    cin >> type;
    if (type == "Enter")
    {
        system("cls");
        StudentDetails();
    }
    else
    {
        cout << "Incorrect! Please try again." << endl;
        cout << endl;
        HomePage();
    }
}

int main()
{
    HomePage();

    return 0;
}
