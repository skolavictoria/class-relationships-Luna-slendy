#ifndef COURSE_H
#define COURSE_H

#include <vector>
#include <iostream>
#include <string>
#include "Student.h"

class Course {
private:
    std::string courseID;
    std::string courseName;
    std::vector<Student*> enrolledStudents;
public:
    Course(const std::string& id, const std::string& name)
        : courseID(id), courseName(name) {}
    std::string getCourseID() const { return courseID; }
    std::string getCourseName() const { return courseName; }
    void addStudent(Student* student) {
        enrolledStudents.push_back(student);
    }
    void displayEnrolledStudents() const {
        std::cout << "Enrolled Students:" << std::endl;
        for (auto student : enrolledStudents) {
            std::cout << "- " << student->getName() << std::endl;
        }
    }
};

#endif // COURSE_H
