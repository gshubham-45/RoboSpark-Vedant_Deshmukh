#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int rollNo;
        float cgpa;
        int adYear;
        string city; 
        float *marks = new float[5];
        float *sub_cred = new float[5];
         float *stud_grade = new float[5];

        
        Student()
        {
           /* name = "default name";
            rollNo = 00;
            cgpa = 0;
            adYear = 4;
            city ="None";
            float *marks;
            float *sub_cred;
            float *stud_grade;
            //*mark=new arr[5]*/
            getInput();
            Cgpa();
        }


    void getInput()
    {
        std::cout << "Give the input:\n";
        cout << "Name: ";
        cin >> name;
        cout << "Roll No: ";
        cin >> rollNo;
        cout << "Year of admission :  ";
        cin >> adYear;
        cout << "current city :  ";
        cin >> city;
        for (int i =0;i<5;i++)
        {
            cout << "enter subject" << i+1 << " marks  : "  ;
            cin >> marks[i] ;
            cout << "enter subject" << i+1 << " credits (out of 5): "  ;
            cin >> sub_cred[i] ;
             cout << "enter subject" << i+1 << " grade got to student (out of 10) : "  ;
            cin >> stud_grade[i] ;
        }


    }


    void showDetails()
    {
        cout << "Check that you entered proper Detais :" << endl;
        cout << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No:" << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Year of admission: " << adYear << endl;
        cout << "city :  " << city << endl;
    }


    void totalMarks()
    {
        float total=0.0;
        //float ar[5];
        
        for (int j =0;j<5;j++)
        {
            total+= marks[j];
        }
        cout << "total marks of " << name <<" :  " << total << endl;
    }

    void Cgpa()
    {
        float tc=0;
         for (int k =0;k<5;k++)
        {
            cgpa+= sub_cred[k]*stud_grade[k];
            tc+=sub_cred[k];
        }
        cgpa/=tc;
        cout << cgpa << endl;
    }
    
};

int main()
{

    Student s;
    //s.getInput();
    s.showDetails();
    s.totalMarks();
   // cout << s.cgpa << endl;
    //s.Cgpa();
}