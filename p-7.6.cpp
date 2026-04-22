#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base Constructor\n";
    }

    // Practical mujab ahi 'virtual' lagavadine check karvanu che
    virtual ~Base() {
        cout << "Base Destructor\n";
    }
};

class Derived : public Base {
private:
    int* data;

public:
    Derived() {
        cout << "Derived Constructor (Resource Allocated)\n";
        data = new int[10];
    }

    ~Derived() {
        cout << "Derived Destructor (Resource Cleaned)\n";
        delete[] data;
    }
};

int main() {
    cout << "--- Creating Object ---\n";
    Base* ptr = new Derived();

    cout << "\n--- Deleting Object ---\n";
    delete ptr;

    return 0;
}