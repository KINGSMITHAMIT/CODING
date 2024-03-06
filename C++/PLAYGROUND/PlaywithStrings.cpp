// #include<bits/stdc++.h>

// using namespace std;
// int main(){
//         string str = "1234 5678 910";
//     cout<<str<<endl;
//     // cout<<str+"asbc\n";
//     int len = str.length();
//     reverse(str.begin()+1, (str.end()-(len-5)));
//     // reverse(str.begin()+1, str.begin()+((5)));
//     string str2 = str.substr(5,4);
//     cout<< str2;

// return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Input an Even string"<<endl;
    string str;
    getline(cin, str);
    int len= str.length();
    string str2 = str.substr(len/2);
    cout<<str2;
return 0;
}