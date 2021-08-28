#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(0);
    
    //Prining the elements of list
    for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *it << endl;
    }

    //adding after 3rd element and deleting 2nd element
    for(list<int>::iterator addIt = numbers.begin(); addIt != numbers.end(); addIt++){

        if (*addIt == 3)
        {
            numbers.insert(addIt, 100);
        }

        if (*addIt == 2)
        {
            addIt = numbers.erase(addIt);
        }
        
    }

    //Prining the elements of list
    for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *it << endl;
    }

    
    return 0;
}