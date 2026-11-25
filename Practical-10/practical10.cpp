#include <iostream>
using namespace std;

// Function template
template <typename T>
T myMax(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    // Compare student marks
    cout << "Higher Marks: "
         << myMax<int>(75, 90) << endl;

    // Compare product prices
    cout << "Higher Price: "
         << myMax<double>(499.50, 699.75) << endl;

    // Compare sensor readings
    cout << "Higher Sensor Reading: "
         << myMax<float>(25.5f, 30.8f) << endl;

    return 0;
}
