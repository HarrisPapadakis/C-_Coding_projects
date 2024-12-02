// Single Level Inheritance: Inheriting fields and Methods
#include <iostream>
using namespace std;

class Animal
{
private:
    int feet;

public:
    void setFeet(int feet)
    {
        this->feet = feet;
    }

    int getFeet() const
    {
        return feet;
    }

    void walk()
    {
        cout << "Walking with " 
			<< getFeet() << " feet." << endl;
    }
};

class Dog : public Animal
{
private:
    int no_of_barks;

public:
    void setNoOfBarks(int no_of_barks)
    {
        this->no_of_barks = no_of_barks;
    }

    int getNoOfBarks() const
    {
        return no_of_barks;
    }

    void bark()
    {
        cout << "Barking " << getNoOfBarks() << " times." << endl;
    }
};


int main(void)
{
    Dog d1;

    d1.setFeet(4);
    d1.setNoOfBarks(19);

    d1.walk();
    d1.bark();

    return 0;
}

