#include <cstdlib>
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
    
    //using determinant
    double A=num[2]-num[0];
    double B=num[3]-num[1];
    double C=num[4]-num[0];
    double D=num[5]-num[1];
    
    //calculating area
    double area=abs(A*D-B*C)/2;
    
    //determine whether it's a triangle or not
    if(area!=0) cout<<"yes "<<area;
    else cout<<"no";
    
    return 0;
}
