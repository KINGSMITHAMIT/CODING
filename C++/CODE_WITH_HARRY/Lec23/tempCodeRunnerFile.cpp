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