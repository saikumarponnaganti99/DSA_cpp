#include<iostream>
using namespace std;

int decToBinary(int decNum) {
    int ans=0, power=1;

    while(decNum > 0){
        int rem = decNum % 2;
        decNum = decNum/2;
        ans += rem * power;
        power *= 10;
    }
    return ans;

}

int main() {
    int decNum = 50;
    // cout<<"decimal "<<decNum <<" in binary is "<<decToBinary(decNum);
    for(int i=0; i<=10; i++){
        cout<<decToBinary(i)<<endl;
    }
}
