#include <iostream>

using namespace std;

int main() {
    int count = 0;
    cout << "Please enter number of grades: ";
    cin >> count;
    double grades[count];
    int units[count];
    for (int i = 0; i < count; i++) {
        cout << "Please enter grade " << i + 1 << ": ";
        cin >> grades[i];
        cout << "Please enter units " << i + 1 << ": ";
        cin >> units[i];
    }
    double total = 0;
    for(int i = 0; i < count; i++) {
        total += grades[i] * units[i];
    }
    int totalUnits = 0;
    for(int i = 0; i < count; i++) {
        totalUnits += units[i];
    }
    double average = total / totalUnits;
    cout << "Your GPA is " << average << endl;

    return 0;
}
