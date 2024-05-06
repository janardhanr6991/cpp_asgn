# Assignment 7: Exploring STL Containers - vector, map, unordered_map, set

## Objective
The objective of this assignment is to explore basic C++ containers.

## Task
Create a database of a faculty with following information:
1. All students' courses.
2. Association of students to grades, students must be sorted by names.
3. Professors list sorted by names.
4. Courses to number of credits you get for a course

Using your class modify `main.cpp` to print message like shown below:

### Example Output:

```
Courses: [CS101, MA201, HS301]
Grades: {Alex: 88, Maria: 92, Peter: 78}
Professors: {Anna, Oppenheimer, Zack}
Credits: {CS101: 5, MA201: 8, HS301: 10}
```

### Guidance:

1. Create a class called StudentDatabase
2. Store courses in class fields: courses, grades, professors, credits. Decide what containers do you want to use:
- Courses - use std::vector.
- Grades - find out what is the difference between std::map std::unordered_map. Use one which suits best.
- Professors - find out what is the difference between std::set std::unordered_set. Use one which suits best.
- Credits - find out what is the difference between std::map std::unordered_map. Use one which suits best.
3. Implement methods `getCourses()`, `getGrades()`, `getProfessors()`, `getCredits()`.
4. Implement methods `printCourses()`, `printGrades()`, `printProfessors()`, `printCredits()`.
5. Implement methods `addCourse(const std::string& course, int credit)`, `addGrade(const std::string& student, int grade)`, `addProfessor(const std::string& name)`

## Instructions
1. Set up your C++ development environment if you haven’t already.
2. Modify file `include/solution.h` and function in it.
3. Modify file `main.cpp`.
4. Compile and run your program to ensure it works correctly:
```shell
cmake -S . -B build
cmake --build build
./build/main
```

### Running the Tests
To run the tests, follow these steps:

1. Make sure you have CMake installed on your system.
2. Navigate to the directory containing your CMakeLists.txt file and open a terminal.
3. Run the following commands:
```shell
cmake -S . -B build
cmake --build build
./build/solution_test
```
4. The tests should run, and you should see the output indicating whether they passed or failed.

