
#include <iostream>
using namespace std;
int recursion(int num){
   if(num<=0) return 1;
    return num* recursion(num-1);
}
int main() {
    cout << "Enter your number:";
    
    int num;

    cin>>num;
    
    cout<<"Factorial of "<<num<<" is "<<recursion(num);

    return 0;
}