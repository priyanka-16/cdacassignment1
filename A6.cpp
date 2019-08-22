#include<iostream>
using namespace std;
#define PI 3.14;
int main()
{
	int a,b;
	cout<<"Enter First num";
	cin>>a;
	cout<<"Enter second num";
	cin>>b;
	double circle(int  a);
	int square(int a);
	int rect(int a,int b);
	cout<<circle(a);
	cout<<square(a);
	cout<<rect(a,b);

}
double circle(int a)
{
	if(a==0)
		return 0;
	else 
		return PI*a*a;
}
int square(int a)
{
	if(a==0)
		return 0;
	else
		return a*a;

}
 int rect(int a,int b)
{
	if(a==0||b==0)
		return  0;
	else
		return a*b;
}
