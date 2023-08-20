#include<iostream>
using namespace std;
int main(){
//cout << "RADHE_RADHE"<<"SUBH_RATRI"<<endl;
int t;
    cin >> t;
    
    while(t--)
    {
        int N;
        cin >> N;
        int A[N];
        for(int i=0; i < N; i++)
        {
            cin >> A[i];
        }
        int minElement = A[0];
        int minElementIndex = 0;
        int i;
        for(i=1; i < N; i++)
        {
            if (A[i] < minElement)
            {
                //If we find an element smaller than the previous smallest, we update
                minElement = A[i];
                minElementIndex = i;
            }
            
        }
        //We are starting the operation from index of the smallest element
        i = minElementIndex;
        while(i > 0)
        {
            // We swap A[i] and A[i-1]
            int temp = A[i];
            A[i] = A[i-1];
            A[i-1] = temp;
            i--;
        }
        for(int i=0; i < N; i++)
        {
            cout<< A[i] << " ";
        }
        cout << endl;
    }
return 0;
}