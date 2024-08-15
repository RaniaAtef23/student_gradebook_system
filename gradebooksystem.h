#ifndef GRADEBOOKSYSTEM_H
#define GRADEBOOKSYSTEM_H
#include"course.h"
#include "student.h"

class gradebooksystem
{
                public:
                                gradebooksystem();
                                gradebooksystem(int user_count);
                                virtual ~gradebooksystem();
                                void addcourse();
                                void editcourse(int id);
                                void deletecourse(int id);
                                void printcourses();
                                void addstudent();
                                void editstudent(int id);
                                void deletestudent(int id);
                                void searchstudent(string key);
                                void printinfo();

                protected:

                private:
                                course *co;
                                int count;
                                int m_size;
                                student *s1;
                                int Count;
};

#endif // GRADEBOOKSYSTEM_H
