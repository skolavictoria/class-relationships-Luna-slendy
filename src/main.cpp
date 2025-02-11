#include <iostream>
#include "Student.h"
#include "Professor.h"
#include "Course.h"
#include "Department.h"

int main() {
    Student* student1 = new Student("John Doe", 20, "S1001");
    Student* student2 = new Student("Jane Doe", 21, "S1002");
    Professor* professor1 = new Professor("Dr. Smith", 45, "E2001");
    Course* course1 = new Course("C101", "Math 101");
    Course* course2 = new Course("C102", "Physics 101");
    Course* course3 = new Course("C103", "Chemistry 101");
    Department* department = new Department("Science Department");

    student1->enrollCourse(course1);
    student1->enrollCourse(course2);
    student2->enrollCourse(course2);

    professor1->assignCourse(course1);
    professor1->assignCourse(course3);

    department->addProfessor(professor1);
    department->addCourse(course1);
    department->addCourse(course2);
    department->addCourse(course3);

    std::cout << "Student Information:" << std::endl;
    student1->displayInfo();
    student1->displayCourses();
    std::cout << std::endl;

    std::cout << "Professor Information:" << std::endl;
    professor1->displayInfo();
    professor1->displayAssignedCourses();
    std::cout << std::endl;

    std::cout << "Department Information:" << std::endl;
    department->displayProfessorsAndCourses();

    delete student1;
    delete student2;
    delete professor1;
    delete course1;
    delete course2;
    delete course3;
    delete department;

    return 0;
}
