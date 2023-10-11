#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Radhe_Radhe"<<endl<<endl;
vector<int> v;
v.push_back(3);
v.push_back(2);
v.push_back(9);
v.push_back(4);
cout<<v[3]<<endl;
// we can also print the vector arrayby using v.at(index num);
cout<<v.at(3)<<endl;
// not only can we print but also can we modify the values in the vector.
cout<<"after changing the value"<<endl; 
v.at(3)= 7;
cout<<v.at(3)<<endl;
cout<<"Now we are going to print the whole array by using the v.at() "<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
cout<<endl;
// we will be going to sort the array by using the sort function
sort(v.begin(), v.end());
cout<<"The array after using sort function "<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
cout<<endl;
cout<<endl<<"Thank_you :)";
return 0;
}