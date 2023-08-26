 #include <iostream>
 using namespace std;
 
 int main(){
   // pointer is a data type ----> which holds the address of other data types. 
    
        int a =3;
        int* b;b = &a;
    // & ---> (Address of) operator
       cout<<"the address of a is  "<< b<<endl;
       //& ampercent laga do variable ke, toh address mil jate hai store karne ke liye. 
       cout<<"the address of a is  "<< &a<<endl;
    // * --->(value at) Dereference operator
       cout<<"the value at address b is "<< *b<<endl;
    // * ke baad koi pointer variable agar app place karte ho toh woh apko uski value print karke de degi


// pointer to pointer
int** c= &b;
cout<< "the address of b is  "<<c<<endl;
cout<< "the value at address value_at(value_at(c)) is "<< **c<<endl;
   return 0;
 }