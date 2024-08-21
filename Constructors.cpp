#include <iostream>
using namespace std;
class Car {
    public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z){
        brand =x;
        model =y;
        year =z;
    }
};
int main() {
    //create 5 Car object starting with object1
    Car object1("Toyota", "Camry", 2020);
    Car object2("Honda", "Accord", 2019);
    Car object3("Ford", "Mustang", 2018);
    Car object4("BMW", "X5", 2017);
    Car object5("Mercedes", "E-Class", 2016);
    //print values of the car object
    cout << "Car 1: " << object1.brand << " " << object1.model << ", " << object1.year << endl;
    cout << "Car 2: " << object2.brand << " " << object2.model << ", " << object2.year << endl;
    cout << "Car 3: " << object3.brand << " " << object3.model << ", " << object3.year << endl;
    cout << "Car 4: " << object4.brand << " " << object4.model << ", " << object4.year << endl;
    cout << "Car 5: " << object5.brand << " " << object5.model << ", " << object5.year << endl;
    return 0;
    
}