#include<iostream>
using namespace std;

int main()
{
	int n;
	int odd=0,even=0;
	cout<<"Enter five number:";
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		if(n%2==0)
		{
			even++;
		}else
		{
			odd++;
		}
	}

}