#include <iostream>
#include <map>

using namespace std;

//class to be used to pass custom objects to map
class Person {
private:
    string name;
    int age;

public:

    //A map needs a default parameterless constructor to construct an object ans assign values to it  
    Person(): name(""), age(0) {}

    //A copy constructor to avoid shallow copy to another object
    Person(const Person &other) {
        name = other.name;
        age = other.age;
    }

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void print() {
        cout << name << ":" << age << endl;
    }
};

int main() {

    map<int, Person> people;

    /**Map constructs the person1 object using default constructor in the class and assiging parameters using = operator. 
     * This is a shallow copy. Pointers should not be copied when copying to an object. Provide a copy contructor in case
     * of use of pointers
    **/
    people[0] = Person("person1", 40);
    people[1] = Person("person2", 20);
    people[2] = Person("person3", 60);

    for(map<int, Person>::iterator it=people.begin(); it!=people.end(); it++) {

        cout << it->first << " - " << flush;
        it->second.print();
    }
    
    return 0;
}