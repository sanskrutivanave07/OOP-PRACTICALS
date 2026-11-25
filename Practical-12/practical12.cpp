#include <iostream>
#include <string>
using namespace std;

// Class template
template <typename T>
class Data {
private:
    T value;

public:
    // Constructor
    Data(T v) {
        value = v;
    }

    // Display function
    void display() {
        cout << "Stored Value: " << value << endl;
    }
};

int main() {
    // Store an integer
    Data<int> d1(100);

    // Store a decimal value
    Data<double> d2(95.75);

    // Store text
    Data<string> d3("Computer Science");

    d1.display();
    d2.display();
    d3.display();

    return 0;
}
