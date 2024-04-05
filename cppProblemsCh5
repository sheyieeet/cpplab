#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int maxLength = 20;

void print(int (&add)[]){
    for(int x: add){
        if(x == -1){
            break;
        }
        cout<<x<<' ';
    }
}
bool carry(int (&a)[], int lenadd){
    bool valid = true;
    for(int i=lenadd -1; i>=0; i--){
        if(a[i] >= 10 && i>0){
            a[i-1] += 1;
            a[i] -= 10;
        }
        else if(a[i]>=10 && i== 0){
            lenadd += 1;
            if(lenadd>20){
                cout<<"Integer overflow"<<endl;
                valid = false;
                return valid;
            }
            for(int j=0; j<lenadd-1; j++){
                a[j+1] = a[j];
            }
            a[0] = 1;
            a[1] -=10;
        }
    }
    return true;
}
int main(){
    char arr[maxLength+1];
    cout<<"input number: ";
    cin>>arr;

    int num1[20];
    int len1 = 0;
    memset(num1, -1,20);
    for(int i=0; i<maxLength-1; i++){
        if(arr[i] == '\0'){
            len1 = i;
            break;
        }
        num1[i] = arr[i] - '0';
        cout<<num1[i];
    }
    cout<<endl;

    cout<<"input number: ";
    cin>>arr;
    
    int num2[20];
    int len2 = 0;
    memset(num2, -1,20);
    for(int i=0; i<maxLength; i++){
        if(arr[i] == '\0'){
            len2 = i;
            break;
        }
        num2[i] = arr[i] - '0';
        cout<<num2[i];
    }
    cout<<endl;

    // perform addition through argorithm that resembles the addtion on paper
    
    int lenadd;
    int add[20];
    memset(add, -1, 20);
    if(len1>len2){
        lenadd = len1;
    }
    else{
        lenadd = len2;
    }

    for(int i=0; i<lenadd; i++){
        if(num1[i] == -1){
            num1[i] = 0;
        }
        if(num2[i] == -1){
            num2[i] = 0;
        }
        add[i] = num1[i] + num2[i];
    }

    // carry the digits if needed
    bool valid = true;
    for(int i=0; i<lenadd; i++){
        print(add);
        if(add[i] >=10){
            if(carry(add, lenadd)){
                cout<<"integer overflow";
                return 0;
            }
            i = 0;
        }
    }

    
    return 0;

}
