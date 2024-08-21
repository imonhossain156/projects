#include <iostream>
#include <string.h>

using namespace std;

// Function to reverse a string

void reverseString(char str[]) {
int length = static_cast<int>(strlen(str));



   int start = 0, end = length - 1;
   while (start < end) {
      swap(str[start], str[end]);
      start++;
      end--;
   }
}
int main() {
   char str[] = "Hello, World!";
   reverseString(str);
   cout << "Reversed string: " << str << endl;
   return 0;

}
