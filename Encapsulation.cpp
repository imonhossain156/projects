#include <iostream>
using namespace std;
class myClass {
    private:
    string Brand;
    string Model;
    int Year;

    public:
    void setObject(string B, string M, int Y){
        Brand = B;
        Model = M;
        Year = Y;
    }
    //getter
    string getBrand(){
        return Brand;
    }
    //getter
    string getModel(){
        return Model;
    }
    //getter
    int getYear(){
        return Year;
    }

};

int main() {
    myClass obj;
    obj.setObject("Toyota", "Camry", 2020);
    //create another object
    myClass obj2;
    obj2.setObject("Ford", "Mustang", 2018);
    //create another object
    myClass obj3;
    obj3.setObject("Honda", "Civic", 2019);
    //now print the objects
    cout << "Object 1: Brand = " << obj.getBrand() << ", Model = " << obj.getModel() << ", Year = " << obj.getYear() << endl;
    cout << "Object 2: Brand = " << obj2.getBrand() << ", Model = " << obj2.getModel() << ", Year = " << obj2.getYear() << endl;
    cout << "Object 3: Brand = " << obj3.getBrand() << ", Model = " << obj3.getModel() << ", Year = " << obj3.getYear() << endl;
    return 0;
}