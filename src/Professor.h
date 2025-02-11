#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"
#include <vector>
#include <iostream>
#include <string>

class Course;

class Professor : public Person {
private:
    std::string employeeID;
    std::vector<Course*> assignedCourses;
public:
    Professor(const std::string& name, int age, const std::string& employeeID)
        : Person(name, age), employeeID(employeeID) {}
    void assignCourse(Course* course) {
        assignedCourses.push_back(course);
    }
    void displayAssignedCourses() const {
        std::cout << "Assigned Courses:" << std::endl;
        for (auto course : assignedCourses) {
            std::cout << "- " << course->getCourseName() << std::endl;
        }
    }
    void displayInfo() const override {
        std::cout << "Professor: " << name << "\nAge: " << age << std::endl;
    }
    std::string getEmployeeID() const { return employeeID; }
};

#endif // PROFESSOR_H
