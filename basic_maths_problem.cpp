#include<iostream>
using namespace std;

// problem1: Function to count the number of digits in n that evenly divide n
int evenlyDivides(int n) {
    int rem;
    int remaining=n,ans=0;
    while(true){
        if(remaining==0)
        return ans;
        rem=remaining%10;
        if(rem!=0 && n%rem==0){
        ans++;
        }
        remaining/=10;
      
        
    }
    return ans;
}

// problem 2: reverse number
int revnum(int n){
    int ans=0;
    while(n!=0){
        ans=ans*10+n%10;
        n/=10;
    }
    return ans;
}

// problem 3: check palindrome
bool isPalindrome(int x) {
    if(x<0)
    return false;
    long ans=0;
    int n=x;
    while(n>0){
        ans=ans*10+n%10;
        n/=10;
    }
    if(x==ans)
    return true;
    return false;
}

// problem 4: check armstrong number
bool checkArmstrong(int n){
	int num=n;
	int ans=0;
	int digit=0;
	for(int i=1;i<num;i*=10){
		digit++;
	}
	while(num>0){
		ans+=pow(num%10,digit);
		num/=10;
	}
	if (ans==n)
	return true;
	return false;
}

/*problem 5: sum of 1 to n divisor:
 Given a positive integer n, The task is to find the value of Σi F(i) where i is from 1 to n and 
 function F(i) is defined as the sum of all divisors of i.*/
 /*int sumOfDivisors(int n) {
    int sum = 0;
    for(int i=1;i<=n;++i){
        for(int j=1;j*j<=i;++j){
            if(i%j==0){
                if(i/j == j)
                sum+=j;
                else 
                sum+=j+i/j;
            }
        }
    }
    return sum;
}*/
//more optimized approach
int sumOfDivisors(int n) {
    int sum = 0;
    for(int i=1;i<=n;++i){
        sum+=(n/i)*i;
    }
    return sum;
}
int main(){
    int p1=evenlyDivides(2376);
    cout<<p1<<endl;
    int p2 = revnum(2038);
    cout<<p2<<endl;
    cout<<isPalindrome(1000000001);
    cout<<"another branch"<<endl;
    }