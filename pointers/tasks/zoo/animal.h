#include <iostream>
#include <string>

class Animal {
public:
  virtual ~Animal() {}

  virtual void makeSound() const = 0;

  virtual void printInfo() const = 0;
};

class Dog : public Animal {
public:
  void makeSound() const override {
    std::cout << "Bark!" << std::endl;
  }
  void printInfo() const override { std::cout << "Dog" << std::endl; }
};

class Cat : public Animal {
public:
  void makeSound() const override {
    std::cout << "Meow!" << std::endl;
  }
  void printInfo() const override { std::cout << "Cat" << std::endl; }
};

class Bird : public Animal {
public:
  void makeSound() const override {
    std::cout << "Tweet!" << std::endl;
  }
  void printInfo() const override { std::cout << "Bird" << std::endl; }
};
