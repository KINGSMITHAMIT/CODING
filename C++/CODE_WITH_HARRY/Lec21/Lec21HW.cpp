#include<bits/stdc++.h>
using namespace std;
class Animal
{
    private:
        int no_of_legs, no_of_teeths; 
    public: 
        int no_of_horns, no_of_tails;
        void change_data(int a, int b);
        void print_data(){
            cout<<"the no_of_horns: "<<no_of_horns<<endl;
            cout<<"the no_of_tails: "<<no_of_tails<<endl;
            cout<<"the no_of_legs: "<<no_of_legs<<endl;
            cout<<"the no_of_teeths: "<<no_of_teeths<<endl;
        }
    
};
void Animal::change_data(int a, int b){
    no_of_legs=a; 
    no_of_teeths=b;
    }
int main(){
    Animal Dog;
    Dog.no_of_horns = 0;
    Dog.no_of_tails = 1;
    Dog.change_data(4, 42);
    Dog.print_data();
    return 0;
}
