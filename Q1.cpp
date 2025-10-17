#include <iostream>
using namespace std;

struct Item {
    int id;
    float cost;
};

int main() {
    Item items[6]= {
        {1,20.05},
        {2,40.20},
        {3,5.70},
        {4,55.25},
    };
    cout<<"Items with cost greater than 50.00"<<endl;
    for(int i=0; i<6; i++){
        if (items[i].cost>50.00){
            cout<<"Item ID: "<<items[i].id<<" Cost: "<<items[i].cost<<endl;
        }
    }
 return 0;
}
