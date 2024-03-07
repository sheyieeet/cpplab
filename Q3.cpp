#include<iostream>
#include<cmath>
using namespace std;

double roundUp(double n, int oper, int precision){
	n = n * pow(10, precision);
	switch(oper){
		case 1:
			n++;
			n = (int)n;
			n /= pow(10, precision);
			break;
		case 2:
			n = (int)n;
			n /= pow(10, precision);
			break;
	}
	return n;
}
int main(){
	double n = 0;
	int oper = 0;
	int precision = 0;
	
	cout<<"Please enter your number: ";
	cin>>n;
	
	cout<<"Please enter 1(celing) / 2(floor): ";
	cin>>oper;
	
	cout<<"Please enter precision number: ";
	cin>>precision;
	
	double result = roundUp(n, oper, precision);
	cout<<"The answer is = "<<result;
	return 0;
}
