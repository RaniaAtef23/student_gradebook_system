#include "student.h"

student::student()
{

                //ctor
}
student::student(string name1){
                coursename=name1;
}
student::~student()
{
                //dtor
}
void student::putdata(){
                cout<<"student_name | ";
                cin>>name;
                cout<<"student_id | ";
                cin>>id;
                cout<<"enter amount of tests | ";
                cin>>amount;
                for(int i=0 ;i<amount;i++){
                                cout<<"enter grade of test"<<i+1<<" ";
                                cin>>grade;
                                arr[count++]=grade;
                }


}
void  student::getdata(){
                int sum=0;
                int avr;
                cout<<"student_name | "<<name<<endl;
                cout<<"student_id | "<<id<<endl;
                cout<<"course_name | "<<coursename<<endl;
                cout<<"student_grades | "<<endl;
                for(int i=0 ;i<amount;i++){
                                cout<<"test"<<i+1<<" | "<<arr[i]<<endl;
                                sum=sum+arr[i];

                }
                avr=sum/amount;
                cout<<"\n avr | "<<avr<<endl;

                                }

int  student::get_id(){
                return id;
                                }
                                /*
string student:: returncoursename(string course_name){
                coursename=course_name;
                return coursename;
                                }
                                */
bool student::findany(string key)const
{

    int t=name.length();
    for(int n=0; n<t; n++)
    {
        string b =name.substr(0,n);
        if(b.compare(key)==0 )
        {
            return true;
        }
    }
    if(  name.compare(key)==0 ||coursename.compare(key)==0 )
    {

        return true;
    }


    return false;




}
