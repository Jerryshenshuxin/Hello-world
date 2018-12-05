#include<stdio.h>
#include<cmath>
#include<iostream>
using namespace std;

#define a2 10          
#define a3 10         
#define d5 12
float sita1,sita2,sita3,sita4;
float duty[5];

int main()
{
	//cout<<cos(90)<<endl;
	float x,y,z;
	float c1,c3,s3;
	cin>>x>>y>>z;
	if(x==0)
	  sita1=3.14/2;
    else 
	  sita1=atan(y/x) ;
    if(sita1<0)
      sita1=3.14+sita1;
	  
	c1=cos(sita1);
	sita3=acos((x*x+c1*c1*z*z+2*c1*c1*z*d5+c1*c1*d5*d5-c1*c1*a2*a2-c1*c1*a3*a3)/(2*c1*c1*a2*a3));
	if(sita3>0)
	  sita3=-sita3;
	s3=sin(sita3);
	c3=cos(sita3);

	sita2=acos((x*c3*a3+x*a2+z*c1*s3*a3+d5*c1*s3*a3)/(c1*(c3*a3+a2)*(c3*a3+a2)+s3*s3*a3*a3*c1));
	sita4=-sita2-sita3;
	 
	cout<<sita1*180/3.14<<endl;
	cout<<sita2*180/3.14<<endl;
	cout<<sita3*180/3.14<<endl;
	cout<<sita4*180/3.14<<endl;
} 
