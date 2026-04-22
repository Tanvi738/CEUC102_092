#include<iostream>
#include<iomanip>
using namespace std;

// User-defined manipulator for currency symbol
ostream& currency(ostream& output)
{
    output << "₹";
    return output;
}

int main()
{
    string name[3] = {"Amit", "Neha", "Raj"};
    int marks[3] = {85, 92, 78};
    double fees[3] = {12345.5, 15000.75, 9800.25};
    double percentage[3] = {85.00, 92.00, 78.00};

    // Header border
    cout << setfill('-') << setw(55) << "-" << endl;
    cout << setfill(' '); // Reset setfill

    // Headers with Alignment
    cout << left << setw(15) << "Name"
         << right << setw(10) << "Marks"
         << setw(15) << "Fees "
         << setw(12) << "Percentage" << endl;

    cout << setfill('-') << setw(55) << "-" << endl;
    cout << setfill(' ');

    for(int i = 0; i < 3; i++)
    {
        cout << left << setw(15) << name[i] // Name left align
             << right << setw(10) << marks[i] // Marks right align
             << setw(10) << currency << fixed << setprecision(2) << fees[i] // Currency + Value
             << setw(12) << fixed << setprecision(2) <<  percentage[i] << "%"
             << endl;
    }

    cout << setfill('-') << setw(55) << "-" << endl;

    return 0;
}