#include <iostream>
#include <string>
using namespace std;

class Fuel {
protected:
    string fuelType;
public:
    Fuel(string f) {
        fuelType = f;
    }
};

class Brand {
protected:
    string brandName;
public:
    Brand(string b) {
        brandName = b;
    }
};

class Car : public Fuel, public Brand {
public:
    Car(string f, string b) : Fuel(f), Brand(b) {}

    void displayDetails() {
        cout << "Brand: " << brandName << " | Fuel: " << fuelType << endl;
    }
};

int main() {
    Car c1("Petrol", "Toyota");
    Car c2("Electric", "Tesla");
    Car c3("Diesel", "Tata");

    c1.displayDetails();
    c2.displayDetails();
    c3.displayDetails();

    return 0;
}