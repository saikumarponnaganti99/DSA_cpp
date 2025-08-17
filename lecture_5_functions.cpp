#include<iostream>
using namespace std;

// int printhello(){
//     cout<<"Hello World"<<endl;
//     return 3;
// }


//sum of two numbers
// int sum(int a, int b){
//     int s = a + b;
//     return s;
// }

//minimum of two numbers
// int minofTwo(int a, int b){
//     if(a<b){
//         return a;
//     }
//     return b;
// }


//calculate sum 1toN
int sumN(int N){
    int sum=0;
    for(int i=0; i<=N; i++){
        sum += i;

    }
    return sum;
}

int main(){
    // int val = printhello();
    // printhello();


    // cout<<sum(10, 5)<<endl;

    // cout<<minofTwo(10, 15)<<endl;

    // cout<<val<<endl;
    int num;
    cout << "enter number: ";
    cin >> num;
    int sum = sumN(num);

    cout<<sum<<endl;
    return 0; 
}