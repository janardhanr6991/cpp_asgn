#pragma once
#include<iostream>

void solution() {
    double n1,n2;
    std::cout<<"Enter the first number: ";
    std::cin>>n1;
    if(std::cin.fail()){
        std::cout<<"Invalid input. Please enter a valid number.\n";
        return;
    }
    std::cout<<"Enter the second number: ";
    std::cin>>n2;
    if(std::cin.fail()){
        std::cout<<"Invalid input. Please enter a valid number.\n";
        return;
    }
    std::cout<<"Sum: "<<n1+n2<<"\n";
    std::cout<<"Difference: "<<n1-n2<<"\n";
    std::cout<<"Product: "<<n1*n2<<"\n";
    if(n2==0)std::cout<<"Division by zero error!\n";
    else std::cout<<"Quotient: "<<n1/n2<<"\n";
}
