#include<iostream>

 


bool wetFloor = false; 
bool brokenVase = false; 
bool heavyObjectMissing = false; 
bool medicineScattered = false; 

int temp;
using namespace std; 

int main() { 
// wetFloor
cout << "Is there a wet floor? (1 for yes, 0 for No): ";
cin >> temp;
if (cin.fail() || (temp != 0 && temp != 1)) {
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Number input error. Please enter 1 or 0 only." << endl;
    return 1;
}
wetFloor = temp;

// brokenVase
cout << "Is there a broken vase? (1 for yes, 0 for No): ";
cin >> temp;
if (cin.fail() || (temp != 0 && temp != 1)) {
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Number input error. Please enter 1 or 0 only." << endl;
    return 1;
}
brokenVase = temp;

// heavyObjectMissing
cout << "Is there a heavy object missing? (1 for yes, 0 for No): ";
cin >> temp;
if (cin.fail() || (temp != 0 && temp != 1)) {
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Number input error. Please enter 1 or 0 only." << endl;
    return 1;
}
heavyObjectMissing = temp;

// medicineScattered
cout << "Is there scattered medicine? (1 for yes, 0 for No): ";
cin >> temp;
if (cin.fail() || (temp != 0 && temp != 1)) {
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Number input error. Please enter 1 or 0 only." << endl;
    return 1;
}
medicineScattered = temp;
}