#include<iostream>
using namespace std;

int main()
{
	int arr[5] = {1,2,3,6,5};
	int n=sizeof(arr)/sizeof(int);
	int largest=arr[0];

	for(int i=1;i<n;i++)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
	}
	cout<<"largest is: "<<largest;

}