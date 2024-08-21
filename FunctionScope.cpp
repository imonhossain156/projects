#include <iostream>

using namespace std;
int x=5;
void myFunction(){
    int x=50;
    cout<<x<<endl;

}
int main() {
myFunction();
    cout << "x in main: " << x << endl;
    return 0;
}