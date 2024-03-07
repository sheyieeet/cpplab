#include<iostream>
using namespace std;
int main(){

	int nums[3];
	int a1, a2, a3;
	cout<<"Enter three integers"<<endl;
	cin>>nums[0]>>nums[1]>>nums[2];
	
	a1 = nums[0];
	a2 = nums[1];
	a3 = nums[2];
	for(int i=0; i<2; i++){
		if(nums[i] > nums[i+1]){
			int temp = nums[i];
			nums[i] = nums[i+1];
			nums[i+1] = temp;
		}
	}
	
	if(nums[0] + nums[1] > nums[2]){
		cout<<a1<<" "<<a2<<" "<<a3<<" is a triangle"<<endl;
	}
	else{
		cout<<a1<<" "<<a2<<" "<<a3<<" is not a triangle"<<endl;
	}
	
	int sqr1 = nums[0] * nums[0];
	int sqr2 = nums[1] * nums[1];
	int sqr3 = nums[2] * nums[2];
	
	if(sqr1 + sqr2 > sqr3){
		cout<<a1<<" "<<a2<<" "<<a3<<" form an acute triangle"<<endl;
	}
	else if(sqr1 + sqr2 == sqr3){
		cout<<a1<<" "<<a2<<" "<<a3<<" form an obtuse triangle"<<endl;
	}
	else{
		cout<<a1<<" "<<a2<<" "<<a3<<" form an obtuse triangle"<<endl;
	}
	
	return 0;
	
}
