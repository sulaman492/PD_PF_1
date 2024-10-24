#include <iostream>
#include <iomanip>
using namespace std;
//Header
void cargoCalculator(int);
main()
{
    //Declaration
    int cargoNumber;
    //Input
    cout<<"Enter count of cargo for transportation: ";
    cin>>cargoNumber;
    //Output
    cargoCalculator(cargoNumber);
}
void cargoCalculator(int cargoNumber)
{
    //Declaration
    int cargoTon=0,cargobybus,cargobytrain,cargobytruck;
    int totalCargobus=0,totalCargotruck=0,totalCargotrain=0;
    float busprice=0,truckprice=0,trainprice=0,totalcargoprice=0,totaltons=0;
    float buspercent,truckpercent,trainpercent;
    for(int x=1; x<=cargoNumber; x++)
    {
        cout<<"Enter the tonnage of cargo: ";
        cin>>cargoTon;
        if (cargoTon<=3)//For minibus
        {
           cargobybus=cargoTon;
           totalCargobus=totalCargobus+cargobybus;
           busprice=200*totalCargobus;
        }
        if (cargoTon>3 && cargoTon<=11)//for truck
        {
            cargobytruck=cargoTon;
           totalCargotruck=totalCargotruck+cargobytruck;
            truckprice=175*totalCargotruck;
        }
        if (cargoTon>11)//for train
        {
            cargobytrain=cargoTon;
           totalCargotrain=totalCargotrain+cargobytrain;
            trainprice=120*totalCargotrain;
        }
    }
    //PROCESSING
        totaltons=totalCargobus+totalCargotruck+totalCargotrain;
        totalcargoprice=(busprice+truckprice+trainprice)/totaltons;
    //Finding percentages
        buspercent=(totalCargobus/totaltons)*100;
        truckpercent=(totalCargotruck/totaltons)*100;
        trainpercent=(totalCargotrain/totaltons)*100;
        //Output
        cout<<fixed<<setprecision(2);
        cout<<"Average Price: "<<totalcargoprice<<endl;
        cout<<"Cargo by bus: "<<buspercent<<"%"<<endl;
        cout<<"Cargo by truck: "<<truckpercent<<"%"<<endl;
        cout<<"Cargo by train: "<<trainpercent<<"%"<<endl;
}