#include<bits/stdc++.h>

using namespace std;
typedef struct employee{
    int eid;
    char favChar;
    string salary;
} ep;
int main(){
    struct employee harry;
    harry.eid = 1;
    harry.favChar = 'c';
    harry.salary = "1200000 Rs";
    cout<<harry.eid<<endl<<harry.favChar<<endl<<harry.salary<<endl;
    ep lavish;
    lavish.eid = 7;
    lavish.favChar = 'l';
    lavish.salary = "2000.783$";
    cout<<lavish.eid<<endl<<lavish.favChar<<endl<<lavish.salary<<endl;
return 0;
}