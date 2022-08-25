#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double num[6];
    //create random number
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
    
        //Finding the sides of the triangle
        double a=sqrt((num[0]-num[2])*(num[0]-num[2])+(num[1]-num[3])*(num[1]-num[3]));
        double b=sqrt((num[4]-num[2])*(num[4]-num[2])+(num[5]-num[3])*(num[5]-num[3]));
        double c=sqrt((num[0]-num[4])*(num[0]-num[4])+(num[1]-num[5])*(num[1]-num[5]));
        cout<<"Side lenght a, b, c:  "<<a<<", "<<b<<", "<<c<<endl;
        
        
        //Using Heron's formula to find the area
        double s=(a+b+c)/2;
        double A=s-a;
        double B=s-b;
        double C=s-c;
        double area=sqrt(s*A*B*C);
        cout<<"Area:  "<<area<<endl;
        
        //Determine whether it's a triangle or not
        cout<<"Is it triangle?  ";
        if((a+b)>c&&(a+c)>b&&(b+c)>a) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        
        //Calculate the areas of the three triangles formed when connected to the origin
        double d=sqrt(num[0]*num[0]+num[1]*num[1]);
        double e=sqrt(num[2]*num[2]+num[3]*num[3]);
        double f=sqrt(num[4]*num[4]+num[5]*num[5]);
        cout<<"Side lenght d, e, f:  "<<d<<", "<<e<<", "<<f<<endl;
        double s1=(a+d+e)/2;
        double s1A=s1-a;
        double s1D=s1-d;
        double s1E=s1-e;
        double s2=(b+e+f)/2;
        double s2B=s2-b;
        double s2E=s2-e;
        double s2F=s2-f;
        double s3=(c+f+d)/2;
        double s3C=s3-c;
        double s3F=s3-f;
        double s3D=s3-d;
        double area1=sqrt(s1*s1A*s1D*s1E);
        double area2=sqrt(s2*s2B*s2E*s2F);
        double area3=sqrt(s3*s3C*s3F*s3D);
        cout<<"area 1, 2, 3:  "<<area1<<", "<<area2<<", "<<area3<<endl<<"area 1, 2, 3's sum:  "<<area1+area2+area3<<endl;
        
        //Determine whether it covers the origin or no
        cout<<"Does it cover the origin?  ";
        if(area1+area2+area3-area<=1) cout<<"yes";
        else cout<<"no";
        cout<<endl<<endl;
    }
    
    return 0;
}