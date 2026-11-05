#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:

	int subarraySum(vector<int>& nums,int k){
		int count =0,n;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(nums[i]+nums[j]==k){
					count++;
				}
			}
		}
	}
	return 0;
};

int main()
{
	int nums = [1,2,3];
	subarraySum(nums,3);
	return 0;
}