#include <iostream>
#include <math.h>
using namespace std;
  
int main()
{
    double num[6];
    while(scanf("%lf, %lf, %lf, %lf, %lf, %lf", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5])!=EOF)
    {
        //Input
        if(num[0]==num[2]&&num[1]==num[3]||num[0]==num[4]&&num[1]==num[5]||num[4]==num[0]&&num[5]==num[1]) cout<<"error"<<endl;
        for( int i=0 ; i<3 ; i++ )
        {
            cout<<"(";
            for( int j=0 ; j<2 ; j++ )
            {
                cout<<num[i*2+j];
                if( j==0 ) cout<<", ";
            }
            cout<<")\n";
        }
    
        //Using determinant
        double A=num[2]-num[0];
        double B=num[3]-num[1];
        double C=num[4]-num[0];
        double D=num[5]-num[1];
        cout<<"ABCD:  "<<A<<", "<<B<<", "<<C<<", "<<D<<endl;
        
        //Calculating area
        double area=abs(A*D-B*C)/2;
        cout<<"Area:  "<<area<<endl;
        
        //Determine whether it's a triangle or not
        cout<<"Is it triangle?  ";
        if(area!=0) cout<<"yes "<<endl;
        else cout<<"no"<<endl;
        
        //Calculate the areas of the three triangles formed when connected to the origin
        double area1=abs(num[0]*num[3]-num[2]*num[1])/2;
        double area2=abs(num[0]*num[5]-num[4]*num[1])/2;
        double area3=abs(num[2]*num[5]-num[4]*num[3])/2;
        cout<<"area 1, 2, 3:  "<<area1<<", "<<area2<<", "<<area3<<endl<<"area 1, 2, 3's sum:  "<<area1+area2+area3<<endl;
        
        //Determine whether it covers the origin or no
        cout<<"Does it cover the origin?  ";
        if(area1+area2+area3==area) cout<<"yes";
        else cout<<"no";
        cout<<endl<<endl;
    }
    
    return 0;
}