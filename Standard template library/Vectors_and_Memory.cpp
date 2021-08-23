#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<double> numbers(20);

    int capacity = numbers.capacity();

    cout << "Capacity:" << numbers.capacity() << endl;



    return 0;
}