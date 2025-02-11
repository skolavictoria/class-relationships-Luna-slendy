#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <vector>
#include <iostream>
#include <string>

class Course;

class Student : public Person {
private:
    std::string studentID;
    std::vector<Course*> enrolledCourses;
public:
    Student(const std::string& name, int age, const std::string& studentID)
        : Person(name, age), studentID(studentID) {}
    void enrollCourse(Course* course) {
        enrolledCourses.push_back(course);
        course->addStudent(this);
    }
    void displayCourses() const {
        std::cout << "Enrolled Courses:" << std::endl;
        for (auto course : enrolledCourses) {
            std::cout << "- " << course->getCourseName() << std::endl;
        }
    }
    void displayInfo() const override {
        std::cout << "Student: " << name << "\nAge: " << age << std::endl;
    }
    std::string getStudentID() const { return studentID; }
};

#endif // STUDENT_H
