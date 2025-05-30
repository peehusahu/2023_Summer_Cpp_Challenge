//Title: Sum of Digits	
//Description: Write a program that asks the user to enter a positive integer and calculates the sum of its digits.
#include <iostream>
using namespace std;
int sumOfDigits(int num){
    int digSum = 0;
    
   
    while(num > 0){
        int lastDig = num % 10;
        num = num / 10;
        digSum = digSum + lastDig;
    }
    return digSum;
}
int main(){int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    cout<<"The sum of digits is: "<<sumOfDigits(num);
    return 0;
}
