#ifndef COURSE_H
#define COURSE_H
#include<iostream>
#include"student.h"
#include <string>
using namespace std;
class course
{
                public:
                                course();

                                virtual ~course();
                                void putdata();
                                void getdata();
                                int get_id();
                                string returnname();





                protected:

                private:
                                string name;
                                int id;




};

#endif // COURSE_H
