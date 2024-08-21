#include <iostream>
using namespace std;
//base class 
class employee {
    protected:
    int salary;
};
//derived class 

class Programmer : public employee {
    public:
    int bonus;
    void setSalary(int s){
        salary =s;

    }
    int getSalary(){
        return salary;
    }
};
 int main() {
Programmer myobj;
myobj.setSalary(5000);
myobj.bonus = 500;

cout << "Salary: " << myobj.getSalary() << endl;
cout << "Bonus: " << myobj.bonus << endl;
    return 0;
}

