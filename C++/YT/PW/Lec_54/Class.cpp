#include<bits/stdc++.h>
using namespace std;
class vegetable{
        public:
            string name;
            int cost_per_kg;
            int weight_in_grams;
            int calculate_cost( int weight_in_grams , int cost_per_kg){
                int price = (cost_per_kg * weight_in_grams)/1000;
                return price;
            }
                
    };

int main(){
    cout<<"Radhe_Radhe"<<endl;
    
    vegetable carrot;
    carrot.name = "carrot";
    carrot.cost_per_kg = 40;
    carrot.weight_in_grams = 250;
    cout<<carrot.name<<endl;
    cout<<carrot.cost_per_kg<<endl;
    cout<<carrot.calculate_cost( carrot.weight_in_grams, carrot.cost_per_kg )<<endl;

return 0;  
};
