#include <iostream>
using namespace std;
class Cars {
public:
 string Brand;
 string Model;
 int Year;
 int Price;

};
int main (){
    Cars car1;
    car1.Brand = "Toyota";
    car1.Model = "Camry";
    car1.Year = 2020;
    car1.Price = 25000;

    Cars car2;
    car2.Brand = "Honda";
    car2.Model="Civic";
    car2.Year = 2015;
    car2.Price = 18000;

    cout << "Car 1: " << car1.Brand << " " << car1.Model << ", Year: " << car1.Year << ", Price: $" << car1.Price << endl;
    cout << "Car 2: " << car2.Brand << " " << car2.Model << ", Year: " << car2.Year << ", Price: $" << car2.Price << endl;
    return 0;
}