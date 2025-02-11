#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <vector>
#include <iostream>
#include <string>
#include "Professor.h"
#include "Course.h"

// Class representing a department
class Department {
private:
    std::string departmentName;
    //The Department aggregates professors
    std::vector<Professor*> professors;
    //The Department aggregates courses.
    std::vector<Course*> courses;
public:
    Department(const std::string& name)
        : departmentName(name) {}

    // Add a professor to the department.
    void addProfessor(Professor* professor) {
        professors.push_back(professor);
    }

    // Add a course to the department.
    void addCourse(Course* course) {
        courses.push_back(course);
    }

    // Display all professors and their assigned courses as well as the courses and their enrolled students.
    void displayProfessorsAndCourses() const {
        std::cout << "Department: " << departmentName << std::endl;
        std::cout << "Professors:" << std::endl;
        for (auto professor : professors) {
            std::cout << "- " << professor->getName() << std::endl;
            professor->displayAssignedCourses();
        }
        std::cout << "Courses:" << std::endl;
        for (auto course : courses) {
            std::cout << "- " << course->getCourseName() << std::endl;
            course->displayEnrolledStudents();
        }
    }
};

#endif 
