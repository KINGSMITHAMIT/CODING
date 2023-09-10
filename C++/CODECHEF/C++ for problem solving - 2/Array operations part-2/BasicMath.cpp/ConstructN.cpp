// ish mai time limit exceed kar ja raha hai
// toh neeche dusra wala hai 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
    cin >> t;
	
	while(t--)
	{
	int N;
    int flag = 0;
	cin >> N;
	for (int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if ((2*i)+(7*j) ==N){
            flag++;  
            break;
            }
        else{
            continue;
        }
	}
    }
    if(flag == 1){
        cout << "yes" << endl;
            }
    else{
        cout << "no" << endl;
    }        
    }
return 0;
}
//Solution as follows
// 
// #include <bits/stdc++.h>
// using namespace std;
// 
// int main() 
// {
    // int t;
    // cin >> t;
    // 
    // while(t--)
    // {
        // int N;
        // cin >> N;
        // if (N == 1 || N == 3 || N == 5)
        // {
            // cout << "No" << endl;
        // }
        // else
        // {
            // cout << "Yes" << endl;
        // }
    // }
// }