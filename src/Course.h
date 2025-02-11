#ifndef COURSE_H
#define COURSE_H

#include <vector>
#include <iostream>
#include <string>

// Forward declaration 
class Student;  

// Class representing a course
class Course {
private:
    std::string courseID;
    std::string courseName;
    //Course “owns” the list of students.
    std::vector<Student*> enrolledStudents;  
public:
    Course(const std::string& id, const std::string& name)
        : courseID(id), courseName(name) {}

    std::string getCourseID() const { return courseID; }
    std::string getCourseName() const { return courseName; }

    //add a student to this course.
    void addStudent(Student* student) {
        enrolledStudents.push_back(student);
    }

    // Displays all students in this course.
    void displayEnrolledStudents() const {
        std::cout << "Enrolled Students:" << std::endl;
        for (auto student : enrolledStudents) {
            std::cout << "- " << student->getName() << std::endl;
        }
    }
};

#endif 
