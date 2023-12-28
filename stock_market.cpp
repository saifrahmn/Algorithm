#include<bits/stdc++.h>

using namespace std;

double findingSell(double lowestStock,double singleUnit,double stockPrice,double sellingUnit){
    double lastStock = lowestStock - singleUnit;
    return (stockPrice - lastStock + sellingUnit);
}
double findingCost(double stockPrice,double lowestStock){
    double sum=0.0;
    for(double i = stockPrice;i>lowestStock;i--){
        sum = sum + i;
    }
    return sum;
}

int main(){
    double stockPrice;
    double lowestStock;
    double highestStock;
    int units;

    cout<<"Enter the price of stock"<<endl;
    cin>>stockPrice;

    cout<<"Enter the lowest price you are expecting"<<endl;
    cin>>lowestStock;

    cout<<"Enter the highest price you want to finish buying"<<endl;
    cin>>highestStock;

    cout<<"How many units you are looking to buy"<<endl;

    double singleUnit = (stockPrice - lowestStock)/100;
    double sellingUnit = (highestStock - stockPrice)/100;

    double sellingPrice = findingSell(lowestStock,singleUnit,stockPrice,sellingUnit);

    double costPrice = findingCost(stockPrice,lowestStock);

    cout<<"Whereas your selling price is: "<<sellingPrice*49<<endl;
    cout<<"Your cost price for 100 stocks is"<<costPrice<<endl;
    double profit = sellingPrice - costPrice;
    cout<<"here is the Profit you made: "<<profit<<endl;
    
}
