/*Goal: Practice using a class*/

#include<iostream>
using namespace std;
//****************************************************
class Student{
  string name;
  int id;
  int gradDate;

  public:
    // para asignar valores a las variables
    void setName(string nameIn);
    void setId(int idIn);
    void setGradDate(int dateIn);
    // para acceder a las variables privadas
    Student(); //invocar al constructor
    string getName();
    int getId();
    int getGradDate();
    void print();
    ~Student(); //invocar al destructor
};
// constructor (valores por defecto)
Student::Student(){
  name = "Unknow";
  id = 0;
  gradDate = 0;
}
// destructor (liberamos memoria)
Student::~Student(){
  cout<<"\nStudent delete\n";
}
//funciones modificadoras.
void Student::setName(string nameIn){name = nameIn;}
void Student::setId(int idIn){id = idIn;}
void Student::setGradDate(int gradDateIn){gradDate = gradDateIn;}

//funciones de acceso
string Student::getName(){return name;}
int Student::getId(){return id;}
int Student::getGradDate(){return gradDate;}
void Student::print(){cout<<name<<" "<<id<<" "<<gradDate;}
//****************************************************


int main()
{
  int integer1; 
  float float1;
  Student student1; 
  
  integer1 = 4; //assign a value to integer1
  float1 = 4.333; //assign a value to float1

  student1.setName("Catherine Gamboa"); //assign a value to the student name
  student1.setId(54345); //assign a value to the student id number
  student1.setGradDate(2017); //assign a value to the student grad date

  //Let's print the values of our variables
  cout<<"integer1 = "<<integer1<<"\n";
  cout<<"float1 = "<<float1<<"\n\n";

  //There are two ways we can print the values of our class:
  //The first is to call the print function we created.
  cout<<"Using the Student::print function\n";
  cout<<"Student1 = ";
  student1.print();
  cout<<"\n\n";

  //The second is to access each member of the class using the get functions
  cout<<"Using the student access functions\n";
  cout<<"Student1 name = "<<student1.getName()<<"\n";
  cout<<"Student1 ID = "<<student1.getId()<<"\n";
  cout<<"Student1 Grad Date = "<<student1.getGradDate()<<"\n";

  return 0; 
}