\#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

// Base
class Person {
protected:
    std::string name;
    int age;
public:
    Person(const std::string& name, int age) 
        : name(name), age(age) {}

    virtual ~Person() {}

    virtual void displayInfo() const {
        std::cout << "Name: " << name << "\nAge: " << age << std::endl;
    }

    std::string getName() const { return name; }
    int getAge() const { return age; }
};

#endif 
