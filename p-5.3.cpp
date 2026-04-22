#include <iostream>
#include <fstream>

using namespace std;

class Inventory {
private:
    string name;
    int quantity;
    float price;
    string fileName = "inventory.txt";

public:
    void addItem() {
        ofstream outFile(fileName, ios::app);

        cout << "\n--- Add New Item ---" << endl;
        cout << "Enter Item Name: ";
        cin >> name;
        cout << "Enter Quantity: ";
        cin >> quantity;
        cout << "Enter Price: ";
        cin >> price;

        outFile << name << " " << quantity << " " << price << endl;

        outFile.close();
        cout << "Item added successfully!" << endl;
    }

    void viewAllItems() {
        ifstream inFile(fileName);

        if (!inFile) {
            cout << "No inventory records found!" << endl;
            return;
        }

        cout << "\n--- Current Inventory ---" << endl;
        cout << "Name\t\tQuantity\tPrice" << endl;
        cout << "---------------------------------------" << endl;

        while (inFile >> name >> quantity >> price) {
            cout << name << "\t\t" << quantity << "\t\t" << price << endl;
        }

        inFile.close();
    }

    void searchItem() {
        ifstream inFile(fileName);
        string searchName;
        int flag = 0;

        if (!inFile) {
            cout << "Inventory file doesn't exist!" << endl;
            return;
        }

        cout << "\nEnter Item Name to Search: ";
        cin >> searchName;

        while (inFile >> name >> quantity >> price) {
            if (name == searchName) {
                cout << "\nItem Found Details:" << endl;
                cout << "Name: " << name << endl;
                cout << "Quantity: " << quantity << endl;
                cout << "Price: " << price << endl;
                flag = 1;
                break;
            }
        }

        if (!flag) {
            cout << "Item '" << searchName << "' not found." << endl;
        }

        inFile.close();
    }
};

int main() {
    Inventory shop;
    int choice;

    do {
        cout << "\n===== Inventory Management System =====" << endl;
        cout << "1. Add Item" << endl;
        cout << "2. View All Items" << endl;
        cout << "3. Search Item" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: shop.addItem(); break;
            case 2: shop.viewAllItems(); break;
            case 3: shop.searchItem(); break;
            case 4: cout << "Exiting program..." << endl; break;
            default: cout << "Invalid selection!" << endl;
        }
    } while (choice != 4);

    return 0;
}