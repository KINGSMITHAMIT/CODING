//VECTOR IS ALL ABOUT SHORT_CUTS
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> arr(6, 100); // Assigning vector with value. 
// here by default the values have been initialzed as 0. You can obviouslly print them.
// here we can also create a vector with a size and can also store the same value in each. 
cout<<"Radhe_Radhe"<<endl;
cout<<"size: "<<arr.size()<<endl; // from the above written comment, therefore the size here has been printed as 6 but not 0. 
cout<<"capacity: "<<arr.capacity()<<endl;
for(int i = 0; i < (arr.size()); i++){
    cout<<"The vector array element "<<i<<" is "<<arr[i]<<" ";
    cout<<endl;
}
cout<<"size: "<<arr.size()<<endl; 
cout<<"capacity: "<<arr.capacity()<<endl;
return 0;
}