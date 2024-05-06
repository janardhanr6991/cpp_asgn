# Assignment 7: Inheritance in C++

## Objective
The objective of this assignment is to explore and implement inheritance in C++, understanding the relationship between base and derived classes.

## Task
Create a class hierarchy that involves a base class Polygon and derived classes Rectangle and Triangle to compute the area of these shapes.

Also modify main.cpp to use both polygons.

### Example Output:

```
Which polygon you want to create? (1 - Rectangle, 2 - RightTriangle)
1
Enter sides lenghts:
5 4
Area of a polygon: 20
```

```
Which polygon you want to create? (1 - Rectangle, 2 - RightTriangle)
2
Enter sides lenghts:
5 4
Area of a polygon: 10
```

### Guidance:

1. Define a base class Polygon.
2. Add a pure virtual function double getArea() in Polygon to ensure that derived classes provide their own area calculations.
3. Define the derived class Rectangle that inherits Polygon:
- Implement a constructor, which accepts width and height as parameters
- Implement the getArea() function to calculate area of rectangle.
4. Define another derived class RightTriangle that also inherits from Polygon:
- Implement a constructor which accepts 2 catheti
- Implement the getArea() function to calculate area of right triangle.

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

