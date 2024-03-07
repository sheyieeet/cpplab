#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
	srand(time(NULL));
	char ch = 0;
	for(int i = 0; i<10; i++){
		ch = rand() % 26 + 41;
		cout<<ch;
	}	
	return 0;
}
