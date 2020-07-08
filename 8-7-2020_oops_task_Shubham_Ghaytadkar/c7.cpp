#include<bits/stdc++.h>
using namespace std;
class personal
{
    protected :
        string name;
        string fathersName;
        string mothersName;
        string DOB;
        int age;
        double mob;
        string arr[3];
        string favGame;
        string city; 

    public:
        personal()
        {
            name = "default name";
            fathersName = "default";
            mothersName = "default";
            DOB = "00/00/0000";
            age=0;
            mob=91;
            arr[3];
            favGame="none";
            city ="None";
            getInput();
        }


    void getInput()
    {
        std::cout << "Give the personal input:\n";
        cout << "Name : ";
        cin >> name;
        cout << "Fathers name :   ";
        cin >> fathersName;
        cout << "Mothers name :  ";
        cin >> mothersName;
        cout << "Date of Birth :  ";
        cin >> DOB;
        cout << "your age :  ";
        cin >> age;
         cout << "your Mobile no :  ";
        cin >> mob;
        cout << "enter your 3 hobbies :  ";
        for (int i=0; i<3; i++)
            cin >> arr[i];
        cout << "Enter your favourite Game :  ";
        cin >> favGame;
        cout << "current city :  ";
        cin >> city;


    }


    void showPersonalDetails()
    {
        cout << "Your Personal Details :" << endl;
        cout << endl;
        cout << "Name: " << name << endl;
        cout << "Fathers name :  " << fathersName << '\t' << '\t';
        cout << "mothers name :  " << mothersName << endl;
        cout << "Date of Birth :  " << DOB << '\t';
        cout << "Age :  " << age << " yr" << endl;
        cout << "mobile  No. :  +91 " << mob << endl;
        cout << "Favourite Game :  " << favGame << endl;
        cout << "Hobbies :  " << '\t';
        for (int i =0 ; i<3;i++)
            cout << arr[i] << "," << '\t';
        cout << "\ncity :  " << city << endl;
    }

};

class academics
{
    protected :
        string clgName;
        string branch;
        int YOP;
        float cgpa; 

    public:
        academics()
        {
            clgName = "default name";
            branch = "default";
            YOP=0;
            cgpa = 10;
            getInput();
        }


    void getInput()
    {
        std::cout << "Give the Academics input:\n";
        cout << "Name of your College : ";
        cin >> clgName;
        cout << "your branch :   ";
        cin >> branch;
        cout << "Year of passing :  ";
        cin >> YOP;
        cout << "Enter cgpa :  ";
        cin >> cgpa;


    }


    void showAcademicsDetails()
    {
        cout << "Your Academics Details :" << endl;
        cout << endl;
        cout << "Name of your college: " << clgName << endl;
        cout << "your branch :   "<< branch << endl;
        cout << "Year of Passing :  " << YOP << endl;
        cout << "CGPA : " << cgpa << endl;
    }

};


class professional
{
    protected :
        string nameOrg;
        string jobAs;
        int workHr;
        int n;
        string pro[5]; 

    public:
        professional()
        {
            nameOrg = "default name";
            jobAs = "default";
            workHr=0;
            n=0;
            pro[n];
            getInput();
        }


    void getInput()
    {
        std::cout << "Give the Professional input:\n";
        cout << "Name of Organization : ";
        cin >> nameOrg;
        cout << "you are working as  :   ";
        cin >> jobAs;
        cout << "working hour :  ";
        cin >> workHr;
        cout << "Enter No. of project :  ";
        cin >> n;
        cout << "enter your " <<n<< " projects name" << endl ;
        for (int i=0; i<n; i++)
            cin >> pro[i];


    }


    void showprofessionalDetails()
    {
        cout << "Your Professional Details :" << endl;
        cout << endl;
        cout << "Name of Orgnization: " << nameOrg << endl;
        cout << "you are working as  :   "<< jobAs << endl;
        cout << "working hour :  " << workHr << endl;
        cout << "Your " <<n<< " projects name :  ";
        for (int i =0 ; i<n;i++)
            cout << pro[i] << "," << " ";
    }

};

class biodata : public personal, public professional, public academics
{
    public:
        biodata():personal(),academics(),professional()
        {}
};

int main()
{
    biodata p;
    p.showPersonalDetails();
    p.showAcademicsDetails();
    p.showprofessionalDetails();
}
