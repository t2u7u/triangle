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
    
    //using determinant and calculate area
    double area=abs((num[0]*num[3]+num[2]*num[5]+num[4]*num[1])-(num[4]*num[3]+num[2]*num[1]+num[0]*num[5]))/2;
    
    //determine whether it's a triangle or not
    if(area!=0) cout<<"yes "<<area;
    else cout<<"no";
    
    return 0;
}

