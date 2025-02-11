#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <vector>
#include <iostream>
#include <string>
#include "Professor.h"
#include "Course.h"

class Department {
private:
    std::string departmentName;
    std::vector<Professor*> professors;
    std::vector<Course*> courses;
public:
    Department(const std::string& name)
        : departmentName(name) {}
    void addProfessor(Professor* professor) {
        professors.push_back(professor);
    }
    void addCourse(Course* course) {
        courses.push_back(course);
    }
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

#endif // DEPARTMENT_H
