#include <bits/stdc++.h>
using namespace std;

class str
{
    char *arr;
    int size;

public:
    str(int size)
    {
        this->size = size;
        arr = new char[size];
    
        for (int i = 0; i < size; i++)
        {
            arr[i] = '0';
        }
    }
    void getinput()
    {
        char s;
        cout << "input string of size " << size << "  :   " ;
        for (int i = 0; i < size; i++)
        {
            cin >> s;
            arr[i] = s;
        }
    }
    void display();
    str operator+(str obj);
    str operator*(int s);
    
    friend istream& operator >> (istream &cin, str &l);
    friend ostream& operator << (ostream &cout, str &l);

};

void str::display()
{
    cout << "str: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] ;
    cout << endl;
}

str str::operator*(int s)
{   str temps(size*s);
    int k=0;
    for (int j =0;j<s;j++)
    {
        for (int i = 0; i <size; i++)
        {
            temps.arr[k]=arr[i];
            k++;
        }
    }
    k=0;
    return temps;
}


str str::operator+(str obj)
{
    int i,j,k;
    j=0;
    str temp1(size+obj.size);
    for ( i =0; i<size; i++)
       temp1.arr[i]=arr[i] ;
    for (k=i;k<temp1.size;k++,j++)
        temp1.arr[k]=obj.arr[j] ;
        cout << "  string addition  ";
    return temp1;
}

istream& operator >> (istream &cin, str &l)
{
    cout << "Enter " << l.size << " character string : ";
    for (int i = 0; i < l.size; i++)
        cin >> l.arr[i];
    cout << endl;
    return cin;
}

ostream& operator << (ostream &cout, str &l)
{
    cout << "str: ";
    for (int i = 0; i < l.size; i++)
        cout << l.arr[i];

    cout <<endl;

    return cout;
}


int main()
{
    
    str l(5);
    str m(2);
    cin>>l;
    //l.getinput();
    m.getinput();
    l.display();
    (l*3).display();
    (l+m).display();
    cout<< l;
    
   
}



    
