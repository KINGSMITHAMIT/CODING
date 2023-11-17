#include <bits/stdc++.h>
using namespace std;
class Binary
{
    string s;
    void check_binary(void);

public:
    void input_string(void);
    void swap_0_1(void);
    void display(void);
} b;

class Emloyee
{
    long salary;
    string name;
    char ch;

public:
} harry, lavish;


void Binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Not_Binary" << endl;
            exit(0);
        }
    }
}
void Binary ::input_string(void)
{
    cout << "Enter your string : ";
    cin >> s;
    cout << endl;
    check_binary();
}
void Binary ::swap_0_1(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void Binary ::display(void)
{
    cout<<"Dispalying your string"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    b.input_string();
    b.display();
    b.swap_0_1();
    b.display();
    return 0;
}