#include <iostream>

using namespace std;

void mightGoWrong() {
    bool error = true;
    if (error)
    {
        throw "Error message";
    }
    
}

int main() {

    try
    {
        mightGoWrong();
    }
    catch(char const * e)
    {
        cout << "Error message:" << e << endl;
    }
    
    
    return 0;
}
