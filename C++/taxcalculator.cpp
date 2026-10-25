#include<iostream>
using namespace std;

int main()
{
	int income;
	cin>>income;

	if(income<500000)
	{
		cout<<"0% tax"<<endl;
	}else if(income >= 500000 && income<= 1000000)
	{
		cout<<"20% tax";
	}
	else{
		cout<<"30%tax";
	}
	return 0;
}
