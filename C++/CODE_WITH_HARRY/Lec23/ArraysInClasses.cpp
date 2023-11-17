#include<bits/stdc++.h>
using namespace std;
class Shop{
    int counter;
    int product[100];
    int product_price[100];

    public:

        void set_counter(void){counter = 0;}
        void set_price(void);
        void display_price(void);
};
void Shop :: set_price(void)
{
            cout<<"Enter the product ID: ";
            cin>>product[counter];
            cout<<"\n"<<"Enter the price of the product: ";
            cin>>product_price[counter];
            counter++;
            cout<<"\n";
            }
void Shop :: display_price(void)
            {
            for(int i=0; i<counter; i++){
            cout<<"The product : "<<product[i]<<" and the price : "<<product_price[i]<<endl;
        }
        }
int main(){
    cout<<"Radhe_Radhe"<<endl;
    Shop Karim_Veg_Inn;
    Karim_Veg_Inn.set_counter();
    Karim_Veg_Inn.set_price();
    Karim_Veg_Inn.set_price();
    Karim_Veg_Inn.set_price();
    Karim_Veg_Inn.display_price();
return 0;
}


// #include <iostream>
// using namespace std;

// class Shop
// {
//     int itemId[100];
//     int itemPrice[100];
//     int counter;

// public:
//     void initCounter(void) { counter = 0; }
//     void setPrice(void);
//     void displayPrice(void);
// };

// void Shop ::setPrice(void)
// {
//     cout << "Enter Id of your item no " << counter + 1 << endl;
//     cin >> itemId[counter];
//     cout << "Enter Price of your item" << endl;
//     cin >> itemPrice[counter];
//     counter++;
// }

// void Shop ::displayPrice(void)
// {
//     for (int i = 0; i < counter; i++)
//     {
//         cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
//     }
// }

// int main()
// {
//     Shop dukaan;
//     dukaan.initCounter();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.displayPrice();
//     return 0;
// }
