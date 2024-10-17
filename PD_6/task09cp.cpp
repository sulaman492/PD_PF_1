#include <iostream>
using namespace std;
//Header
string checkPointPosition(int,int,int);
string checkPointPositionLowerRectangle(int ,int );
string checkPointPositionUpperRectangle(int ,int );
string checkborder(int,int);
//Global variables
int x_coordinatesofcorner1,y_coordinatesofcorner1,x_coordinatesofcorner2,y_coordinatesofcorner2,x_coordinatesofcorner3,y_coordinatesofcorner3,x_coordinatesofcorner4,y_coordinatesofcorner4,x_coordinatesofcorner5,y_coordinatesofcorner5,x_coordinatesofcorner6,y_coordinatesofcorner6,x_coordinatesofcorner7,y_coordinatesofcorner7,x_coordinatesofcorner8,y_coordinatesofcorner8;
main()
{
    //Declaration
    int height,x_coordinates,y_coordinates;
    string result ;
    //Input
    cout<<"Enter height: ";
    cin>>height;
    cout<<"Enter x coordinates: ";
    cin>>x_coordinates;
    cout<<"Enter y coordinates: ";
    cin>>y_coordinates;
    //Output
    result = checkPointPosition(height,x_coordinates,y_coordinates);
    cout<<result;
}
string checkPointPosition(int height,int x_coordinates,int y_coordinates)
{
    //Declaration
    string lower_conclusion,upper_conclusion,finalconclusion,border_conclusion;//conclusion for x_coordinates & y_coordinates respectively
    //Processing  
    //Coords of figure
    x_coordinatesofcorner1=3*height;            //rightmost corner on x-axis
    y_coordinatesofcorner1=0;            
    x_coordinatesofcorner2=3*height;            //corner direclty above corner 1
    y_coordinatesofcorner2=height;
    x_coordinatesofcorner3=2*height;            //corner on left of corner 2
    y_coordinatesofcorner3=height; 
    x_coordinatesofcorner4=2*height;            //uppermost right corner
    y_coordinatesofcorner4=4*height; 
    x_coordinatesofcorner5=height;              //uppermost lest corner
    y_coordinatesofcorner5=4*height;
    x_coordinatesofcorner6=height;              //corner below corner 5
    y_coordinatesofcorner6=height;
    x_coordinatesofcorner7=0;                   //corner along corner 6
    y_coordinatesofcorner7=height;
    x_coordinatesofcorner8=0;                   //origin
    y_coordinatesofcorner8=0;    
    //Checking points in lower rectangle
    lower_conclusion=checkPointPositionLowerRectangle(x_coordinates,y_coordinates);
    //Checking points in upper rectangle
    upper_conclusion=checkPointPositionUpperRectangle(x_coordinates,y_coordinates);
    //Checking points on border
    border_conclusion=checkborder(x_coordinates,y_coordinates);
    //Checking point in the figure
    if((upper_conclusion=="True")||(lower_conclusion=="True"))
    {
        finalconclusion="Inside";
    }
    else//checking points outside the figure
    {
        finalconclusion="Outside";
    }
    //Checking on border
    if (border_conclusion=="True")
    {
        finalconclusion="Border";
    }
    return finalconclusion;
}
string checkPointPositionLowerRectangle(int x_coordinates,int y_coordinates)
{
    //Declaration
    string conclusionLower;
    if(((x_coordinates>x_coordinatesofcorner8)&&(y_coordinates>y_coordinatesofcorner8))&&((x_coordinates<x_coordinatesofcorner3)&&(y_coordinates<y_coordinatesofcorner3)))
    {
        conclusionLower="True";
    }
    else
    {
        conclusionLower="False";
    }
    return conclusionLower;
}
string checkPointPositionUpperRectangle(int x_coordinates,int y_coordinates)
{
    //Declaration
    string conclusionUpper;
    if(((x_coordinates>x_coordinatesofcorner6)&&(y_coordinates>y_coordinatesofcorner6))&&((x_coordinates<x_coordinatesofcorner4)&&(y_coordinates<y_coordinatesofcorner4)))
    {
        conclusionUpper="True";
    }
    else
    {
        conclusionUpper="False";
    }
    return conclusionUpper;
}
string checkborder(int x_coordinates,int y_coordinates)
{
    string border1,border2,border3,border4,border5,border6,border7,border8,borderconclusion;//Starring from origin and going towards right
    //Checking from border 1 to 8
    if (((x_coordinates>=x_coordinatesofcorner8)&&(y_coordinates>=y_coordinatesofcorner8))&&((x_coordinates<=x_coordinatesofcorner1)&&(y_coordinates<=y_coordinatesofcorner1)))
    {
        border1="True";
    }
    else
    {
        border1="False";
    }
    if (((x_coordinates>=x_coordinatesofcorner1)&&(y_coordinates>=y_coordinatesofcorner1))&&((x_coordinates<=x_coordinatesofcorner2)&&(y_coordinates<=y_coordinatesofcorner2)))
    {
        border2="True";
    }
    else
    {
        border2="False";
    }
    if (((x_coordinates>=x_coordinatesofcorner2)&&(y_coordinates>=y_coordinatesofcorner2))&&((x_coordinates<=x_coordinatesofcorner3)&&(y_coordinates<=y_coordinatesofcorner3)))
    {
        border3="True";
    }
    else
    {
        border3="False";
    }
    if (((x_coordinates>=x_coordinatesofcorner3)&&(y_coordinates>=y_coordinatesofcorner3))&&((x_coordinates<=x_coordinatesofcorner4)&&(y_coordinates<=y_coordinatesofcorner4)))
    {
        border4="True";
    }
    else
    {
        border4="False";
    }
    if (((x_coordinates>=x_coordinatesofcorner4)&&(y_coordinates>=y_coordinatesofcorner4))&&((x_coordinates<=x_coordinatesofcorner5)&&(y_coordinates<=y_coordinatesofcorner5)))
    {
        border5="True";
    }
    else
    {
        border5="False";
    }
    if (((x_coordinates>=x_coordinatesofcorner5)&&(y_coordinates>=y_coordinatesofcorner5))&&((x_coordinates<=x_coordinatesofcorner6)&&(y_coordinates<=y_coordinatesofcorner6)))
    {
        border6="True";
    }
    else
    {
        border6="False";
    }
    if (((x_coordinates>=x_coordinatesofcorner6)&&(y_coordinates>=y_coordinatesofcorner6))&&((x_coordinates<=x_coordinatesofcorner7)&&(y_coordinates<=y_coordinatesofcorner7)))
    {
        border7="True";
    }
    else
    {
        border7="False";
    }
    if (((x_coordinates>=x_coordinatesofcorner7)&&(y_coordinates>=y_coordinatesofcorner7))&&((x_coordinates<=x_coordinatesofcorner8)&&(y_coordinates<=y_coordinatesofcorner8)))
    {
        border8="True";
    }
    else
    {
        border8="False";
    }
    //Condition for lying on border
    if((border1=="True")||(border2=="True")||(border3=="True")||(border4=="True")||(border5=="True")||(border6=="True")||(border7=="True")||(border8=="True"))
    {
        borderconclusion="True";
    }
    else
    {
        borderconclusion="False";
    }
    return borderconclusion;
}