#include<iostream.h>
using namespace std;
int sort(int arr[],int n)

{
	int i;
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		if(a[i]<=a[i+1])
			temp=a[i];
			[i]=a[i+1];
			a[i+1}=temp;
		}
	}
for(int i=0;i<n;i++)
{
	cout<<a[i]<<"\t";
}
int main()
{
	int a[n],n;
	cin>>n;
	cout<<"Enter elements:";
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(arr,n);
	
	return 0;
}

