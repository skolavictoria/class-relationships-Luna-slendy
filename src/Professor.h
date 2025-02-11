#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"
#include <vector>
#include <iostream>
#include <string>

// Forward declaration
class Course;

//class representing a professor.
class Professor : public Person {
private:
    std::string employeeID;
    //Professor is associated with Course objects.
    std::vector<Course*> assignedCourses;
public:
    Professor(const std::string& name, int age, const std::string& employeeID)
        : Person(name, age), employeeID(employeeID) {}

    // Assign a course to the professor.
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

#endif 
