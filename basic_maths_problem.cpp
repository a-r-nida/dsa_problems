#include<iostream>
using namespace std;
// problem1: Function to count the number of digits in n that evenly divide n
int evenlyDivides(int n) {
    int rem;
    int remaining=n,ans=0;
    while(true){
        if(remaining!=0)
        return ans;
        rem=remaining%10;
        if(rem!=0 && n%rem==0){
        ans++;
        }
        remaining/=10;
      
        
    }
    return ans;
}
int main(){
    cout<<"here are some basic maths problems"<<endl;
    int p1=evenlyDivides(23456);
    }