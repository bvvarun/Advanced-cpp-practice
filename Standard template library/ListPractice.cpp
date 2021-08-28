#include <iostream>
#include <list>

using namespace std;

int main() {

    list<string> menu = {"pasta", "pizza","drink"};
    list<string> pizzas = {"veg", "chicken", "beef", "fish", "somecrazyshit"};
    list<string> pastas = {"white", "red", "pesto"};
    list<string> drinks = {"cola", "sprite", "fruit juice"};


    //Prining the elements of list
    cout << "Here is our menu" << endl;
    for (list<string>::iterator it = menu.begin(); it != menu.end(); it++)
    {
        cout << *it << endl;
    }

    string choice;
    cout << "Please choose one amone above to expand!" << endl;
    cin >> choice;

    list<string>::iterator pitr = menu.begin();
    if (choice == *pitr)
    {
        for (list<string>::iterator it = pastas.begin(); it != pastas.end(); it++)
        {
            cout << *it << endl;
        } 
    } else if (choice == *pitr++)
    {
       for (list<string>::iterator it = pizzas.begin(); it != pizzas.end(); it++)
        {
            cout << *it << endl;
        } 
    } else {
        for (list<string>::iterator it = drinks.begin(); it != drinks.end(); it++)
        {
            cout << *it << endl;
        } 
    }
    
    return 0;
}
