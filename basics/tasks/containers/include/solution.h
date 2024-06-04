#pragma once
#include<bits/stdc++.h>

class StudentDatabase {
  std::vector<std::string> courses;
  std::map<std::string,int> grades;
  std::set<std::string> profs;
  std::unordered_map<std::string,int> creds; 

  public:

  void addCourse(std:: string cname,int cred){
    courses.push_back(cname);
    creds[cname]=cred;
  } 
  void addGrade(std:: string stu,int grade){
    grades[stu]=grade;
  }
  void addProfessor(std:: string pname){
    profs.insert(pname);
  }

  std::vector<std::string> getCourses(){
    return courses;}
  std::map<std::string,int> getGrades(){
    return grades;}
  std::set<std::string> getProfessors(){
    return profs;}
  std::unordered_map<std::string,int> getCredits(){
    return creds;} 
  
  
  void printCourses() const{
    for(auto it:courses)std::cout<<it<<" ";
    std::cout<<"\n";
  }
  void printGrades() const{
    for(auto it:grades)std::cout<<it.first<<": "<<it.second<<std::endl;
  }
  void printProfessors() const{
    for(auto it:profs)std::cout<<it<<" ";
    std::cout<<std::endl; 
  }
  void printCredits() const{
    for(auto it:creds)std::cout<<it.first<<": "<<it.second<<std::endl;
  }
};
