// 4
// aeiou                                Happy
// abxy                                 Sad
// aebcdefghij                          Sad
// abcdeeafg                            Happy

	    // maine toh galti se non contagious bana diya 
        // sawal ko sahi se samaj na tha 
#include<bits/stdc++.h>
using namespace std;
int main(){
cout << "Radhe_Radhe"<< endl;
int t;
cout<<"Enter the number of test cases to run"<<endl;
cin>>t;

while(t--){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    int n=s.size();
    int flag = 0;
   // cout<<n<<endl;
    int  i=0;
    while( i<n ){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
        i++;
        }
        else{
            flag = 1;
        break;
        }
    
}
if (flag==1) cout<<"Chef is Not Happy!"<<endl;
    else cout<<"Chef is Happy!"<<endl;
}
return 0;
}

// Explanation:
// Test case 
// 1: Since the string aeiou is a contiguous substring and consists of all vowels and has a length > 2
//  Chef is happy.

// Test case 
// 2: Since none of the contiguous substrings of the string consist of all vowels and have a length > 2
//  Chef is sad.

// Test case 
// 3: Since none of the contiguous substrings of the string consist of all vowels and have a length > 2
//  Chef is sad.

// Test case 
// 4: Since the string eea is a contiguous substring and consists of all vowels and has a length > 2
//  Chef is happy.

// / Solution as follows

// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
// 	int t;
//     cin >> t;
	
// 	while(t--)
// 	{
// 	    string S;
// 	    cin >> S;
// 	    int string_Length=S.length();
// 	    int i=0;
// 	    int flag=0;
// 	    while(i < (string_Length-2))
// 	    {
// 	        /if any element is a vowel, and its next 2 elements are vowels, then our condition is met
// 	        if ( S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
// 	        {
// 	            if ( S[i+1] == 'a' || S[i+1] == 'e' || S[i+1] == 'i' || S[i+1] == 'o' || S[i+1] == 'u')
// 	            {
// 	                if ( S[i+2] == 'a' || S[i+2] == 'e' || S[i+2] == 'i' || S[i+2] == 'o' || S[i+2] == 'u')
// 	                {
// 	                    flag = 1;
// 	                    break;
// 	                }
// 	            }
// 	        }
// 	        i++;
// 	     }     
// 	        if ( flag == 1 )
// 	        {
// 	            cout << "Happy" << endl;
// 	        }
// 	        else
// 	        {
// 	            cout << "Sad" << endl;
// 	        }
// 	}
// }
