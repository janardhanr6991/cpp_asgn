#include <solution.h>

#include <gtest/gtest.h>
#include <utility>

class StudentDatabaseTest : public ::testing::Test {
protected:
    StudentDatabase db;
};

TEST_F(StudentDatabaseTest, TestCoursesAndCredits) {
    db.addCourse("CS101", 5);
    db.addCourse("MA201", 8);
    
    std::vector<std::string> expectedCourses = {"CS101", "MA201"};
    decltype(std::declval<StudentDatabase>().getCredits()) expectedCredits = {{"CS101", 5}, {"MA201", 8}};
    
    EXPECT_EQ(db.getCourses(), expectedCourses);
    EXPECT_EQ(db.getCredits(), expectedCredits);
}

TEST_F(StudentDatabaseTest, TestGrades) {
    db.addGrade("Zachar", 100);
    db.addGrade("Maria", 92);
    db.addGrade("Nicolas", 98);
    db.addGrade("Alex", 88);
    
    decltype(std::declval<StudentDatabase>().getGrades()) expectedGrades = {{"Alex", 88}, {"Maria", 92}, {"Zachar", 100}, {"Nicolas", 98}};
    EXPECT_EQ(db.getGrades(), expectedGrades);
    std::vector<std::string> sortedStudents = {"Alex", "Maria", "Nicolas", "Zachar"};
    std::vector<std::string> students;
    for (const auto& [student, _] : db.getGrades()) {
        students.push_back(student);
    }
    EXPECT_EQ(students, sortedStudents);
}

TEST_F(StudentDatabaseTest, TestProfessors) {
    db.addProfessor("Opel");
    db.addProfessor("Zack");
    db.addProfessor("Anna");
    
    decltype(std::declval<StudentDatabase>().getProfessors()) expectedProfessors = {"Anna", "Zack", "Opel"};
    EXPECT_EQ(db.getProfessors(), expectedProfessors);
    std::vector<std::string> sortedProfessors = {"Anna", "Opel", "Zack"};
    std::vector<std::string> professors;
    for (const auto& professor : db.getProfessors()) {
        professors.push_back(professor);
    }
    EXPECT_EQ(professors, sortedProfessors);
}
