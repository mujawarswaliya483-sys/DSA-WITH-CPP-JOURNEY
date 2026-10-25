#include<iostream>
using namespace std;

class Area
{
	int length;
	int width;

public:
	void area(){
		int area;
		cin>>length;
		cin>>width;

		area = length * width;
		cout<<"Area is: "<<area;
	}
	
};

int main()
{
	Area a;
	a.area();
}