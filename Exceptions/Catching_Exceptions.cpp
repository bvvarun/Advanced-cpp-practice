#include <iostream>
#include <exception>

using namespace std;

void goesWrong() {
    bool error1 = true;
    bool error2 = false;

    if (error1)
    {
        throw bad_alloc();
    }

    if (error2)
    {
        throw exception();
    }
    
    
}
int main() {

    try
    {
        goesWrong();
    }
    
    catch(bad_alloc & e)
    {
        cout<< e.what() << endl;
    }
    //exception is a parent class of bad_alloc. Always put parent class last. If not parent class catches the exception that the sub class had to catch. **Due to polymorphism**
    catch(exception & e)
    {
        cout<< "error1:" << e.what() << endl;
    }

    return 0;
} 