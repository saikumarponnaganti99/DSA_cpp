#include <iostream>
using namespace std;

// N factorial -> n! = 1*2*3*4....*N

// int fact(int N){
//     int facto = 1;
//     for(int i=1; i<=N; i++){
//         facto *= i;
//     }
//     return facto;
// }

// sum of digits of number

int sumdigi(int n)
{
    int sum = 0;
    while(n>0){
        sum += n % 10;
        n = n/10;
    }
    return sum;
}

int main()
{
    int num;
    cout << "enter an number : ";
    cin >> num;

    // cout<<"factorial of "<<num<<" is "<<fact(num);
    cout << "reminder " << num << " is " << sumdigi(num);
}