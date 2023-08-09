#include <bits/stdc++.h>
using namespace std; 
    int getNext(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        int slow = n, fast = n;
        do {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        } while (slow != fast);
        return slow == 1;
    }

int main(){
    int n;
    cin>>n;
    if(isHappy(n)){
    cout<<"true"<<endl;
    }
    else{
    cout<<"false"<<endl;
    }

    return 0;
}