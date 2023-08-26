#include<bits/stdc++.h>
using namespace std;
int main(){
//cout<<"Radhe_Radhe"<<endl;
// Update the '_' below to solve this problem
	cout<< "enter no. of test cases"<<endl;
	int t;
    cin >> t;
	
	while(t--)
	{
	    string S;
        cout<<"enter your desired text or num."<<endl;
	    cin >> S;
	    int A[S.length()];
	    
	    for(int i = 0; i <S.length(); i++)
	    {
            //Converts a character into its ASCII value
	        A[i] = int(S[i]);
	    }
	    for(int i = 0; i <S.length(); i++)
	    {
	        cout << A[i] << " ";
	    }
	    cout << endl;    
	
	

}
return 0;
}