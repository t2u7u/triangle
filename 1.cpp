#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //create random number
    double num[6];
    for( int i=0 ; i<6 ; i++ )
    {
        int a = rand()%2;
        if(a==0) num[i]=rand()%1001;
        else num[i]=-1*rand()%1001;
        cout<<num[i]<<'\n';
    }
    
    //finding the sides of the triangle
    double a=sqrt((num[0]-num[2])*(num[0]-num[2])+(num[1]-num[3])*(num[1]-num[3]));
    double b=sqrt((num[4]-num[2])*(num[4]-num[2])+(num[5]-num[3])*(num[5]-num[3]));
    double c=sqrt((num[0]-num[4])*(num[0]-num[4])+(num[1]-num[5])*(num[1]-num[5]));
    
    //using Heron's formula to find the area
    double s=(a+b+c)/2;
    double A=s-a;
    double B=s-b;
    double C=s-c;
    float area=sqrt(s*A*B*C);
    
    //determine whether it's a triangle or not
    if((a+b)>c&&(a+c)>b&&(b+c)>a) cout<<"yes "<<area;
    else cout<<"no";
    
    return 0;
}






