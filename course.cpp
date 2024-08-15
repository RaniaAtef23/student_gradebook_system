#include "course.h"
#include "student.h"

course::course(){
}

course::~course()
{



                //dtor
}


void course:: putdata(){
                cout<<"course_name | ";
                cin>>name;
                cout<<"course_id | ";
                cin>>id;
}
void course:: getdata(){
                cout<<"course_name | "<<name<<endl;
                cout<<"course_id | "<<id<<endl;
}
int course::get_id(){
return id;
}

string  course::returnname(){
                return name;
}
