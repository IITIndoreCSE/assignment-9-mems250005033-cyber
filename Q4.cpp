#include<iostream>
#include<string>
using namespace std;
struct Salesrecord{
  string month;
  float amount;
};
int main(){
    Salesrecord sales[12];
    cout<<"Enter sales data for each month"<<endl;
    for(int i=0;i<12;i++){
        cout<<"Month "<<i+1<<" Name:";
        cin>>sales[i].month;
        cout<<"\nSales Amount:";
        cin>>sales[i].amount;
        cout<<endl;
    }
    float maxAmount=sales[0].amount;
    float minAmount=sales[0].amount;
    string maxMonth=sales[0].month;
    string minMonth=sales[0].month;
    for(int i=1;i<12;i++){
        if(sales[i].amount>maxAmount){
            maxAmount=sales[i].amount;
            maxMonth=sales[i].month;
        }
        if(sales[i].amount<minAmount){
            minAmount=sales[i].amount;
            minMonth=sales[i].month;
        }
    }
    cout<<"Month with maximum sales: "<<maxMonth<<" with amount "<<maxAmount<<endl;
    cout<<"Month with minimum sales: "<<minMonth<<" with amount "<<minAmount<<endl;
    return 0;
}
