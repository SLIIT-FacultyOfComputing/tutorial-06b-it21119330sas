#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int sd , char sname[]) {
  studentId= sd;
  strcpy(name,sname);
  
}

// Display StudentId and Name
void Student::display() {
cout<<"student ID:"<<studentId<<endl;
cout<<"name:"<<name<< endl;
  
}
