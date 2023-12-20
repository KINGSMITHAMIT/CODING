#include<iostream>
using namespace std;

class Max
{
    public:
       
        int max(int a[],int n)
        {
            int m=INT16_MIN;
            for(int i=0;i<=n-1;i++)
            {
                if(a[i]>m)
                {
                    m=a[i];
                }
            }
            cout<<"Here is the Maximum Element: "<<m<<endl;
            return m;
            // return m;
        }
        // cout<<m<<endl;
};
class Min:public Max 
{
    public:
        int min(int a[],int n)
        {
            int l=INT8_MAX;
            for(int i=0;i<=n-1;i++)
            {
                if(a[i]<l)
                {
                    l=a[i];
                }
            }
            cout<<"So the Min Element: "<<l<<endl;
            //cout<<"The Max element is: "<<m<<endl;
        }
};

int main()
{
    // cout<<"All Ok"<<endl;
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];

    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }

    Max M2;
    M2.max(arr,n);
    Min M1;
    M1.min(arr,n);
    return 0;
}