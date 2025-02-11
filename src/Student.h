#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <vector>
#include <iostream>
#include <string>

// Forward declaration.
class Course;

class Student : public Person {
private:
    std::string studentID;
    // A Student is associated with Course objects.
    std::vector<Course*> enrolledCourses;
public:
    Student(const std::string& name, int age, const std::string& studentID)
        : Person(name, age), studentID(studentID) {}

    // Enroll the student in a course
    void enrollCourse(Course* course) {
        enrolledCourses.push_back(course);
        // add this student to the course’s list.
        course->addStudent(this);
    }

    // Display all courses in which the student are.
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

#endif 
