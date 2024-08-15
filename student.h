#ifndef STUDENT_H
#define STUDENT_H
#include<string>
#include<iostream>
using namespace std;
class student
{
                public:
                                student(string name1);
                                student();
                                virtual ~student();
                                void putdata();
                                void getdata();
                                int get_id();
                                string returncoursename(string course_name);
                                bool findany(string key)const;

                protected:

                private:
                                string name;
                                string coursename;
                                int id;
                                int amount;
                                int arr[1000];
                                int count;
                                int grade;


};

#endif // STUDENT_H
