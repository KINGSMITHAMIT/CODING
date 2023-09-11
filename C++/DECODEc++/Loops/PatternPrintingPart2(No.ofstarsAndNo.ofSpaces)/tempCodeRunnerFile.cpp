cout<<"Enter a num for your number_SPIRAL"<<endl;
cin>>n;
int a = 1;
int m = 2*n-1;
// for(int i=1; i<=2*n-1; i++){
//     for(int j=1; j<=2*n-1; j++){
//     if(i==m||j==m||i==a||j==a){
//     cout<<n;
//         }  
//     else    cout<<" ";
//     }
//     cout<<endl;
// }
// 1 1 1 1
// 1 2 2 3
// 1 2 3 3 
// 1 2 3 4
// if you are able to print even this much of the pattern then its 80% already done...
for(int i =1;i<=n; i++){
    for(int j= 1; j<= n; j++){
        cout<<min(i,j)<<" ";
    } 
    //with Sir's help i was able to print this much and ahead i have tried my own way to print the spiral
    for(int k = n-1; k>=1; k--){
        cout<<min(i,k)<<" ";
    }
    cout<<endl;
}
for(int i = n-1;i>=1; i--){
    for(int j= 1; j<= n ; j++){
        cout<<min(i,j)<<" ";
    }
    for(int k = n-1; k>=1; k--){
        cout<<min(i,k)<<" ";
    }
    cout<<endl;
}
// once you are able to do this much then you just need to edit the values like where you are PRINTING 1 REPLACE IT WITH 4 AND VICE VERSA FOR OTHERS TOO.
// sir's logic and method -->
for(int i = 1; i <= 2*n-1; i++){
    for (int j = 1; j <=2*1; j++){
        int a = i;
        int b = j;
        if(a > n ) a = 2*n-i;
        if(b > n ) b = 2*n-j;
        int x = min(a,b);
        cout<< n-x+1;