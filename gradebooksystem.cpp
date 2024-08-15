#include "gradebooksystem.h"
#include"course.h"
#include<iostream>
#include "student.h"
#include<unistd.h>
using namespace std;
gradebooksystem::gradebooksystem(){
}
gradebooksystem::gradebooksystem(int user_count)
{
                count=0;
                m_size=user_count;
                co=new course[m_size];
                Count=0;

                s1=new student[m_size];

                //ctor
}

gradebooksystem::~gradebooksystem()
{
                delete []co;
                //dtor
}

void gradebooksystem::addcourse(){
                course *newcourse=new course();

                newcourse->putdata();
                co[count++]=*newcourse;


}
void  gradebooksystem::editcourse(int id){
                 if (count==0)
    {


        cout<<"****************************************\n";
        cout<<"\t     not found"<<endl;
        cout<<"****************************************\n";

        sleep(1.5);
        system("cls");
        return;
    }
    else{
                for(int i=0;i<count;i++){
                                if(co[i].get_id()==id){
                                                co[i].putdata();
                                }
                }
    }
                                }
void gradebooksystem::deletecourse(int id){
                   if (count==0)
    {


        cout<<"****************************************\n";
        cout<<"\t     not found"<<endl;
        cout<<"****************************************\n";

        sleep(1.5);
        system("cls");
        return;
    }
    else
    {
        bool deleted=false;
        for(int i=0; i<count; i++)
        {
            if(co[i].get_id()==id)
            {
                if(i==count-1)
                {
                    count--;
                    deleted=true;

                }
                else
                {
                    co[i]=co[count-1];
                    count--;
                    deleted=true;
                }
            }
        }
        if(deleted)
        {
            cout<<"deleted successfully ...";
            sleep(2);
        }
        else
        {
            cout<<"not found";
            sleep(2);


        }
    }
                                }
void  gradebooksystem::printcourses(){
                if(count==0){
                                cout<<"\n\n\t\t no courses have been added ...."<<endl;
                }
                else{
                for(int i=0;i<count;i++){
                                co[i].getdata();
                                cout<<"\n---------------------------"<<endl;
                }
                }
                                }

void gradebooksystem::addstudent(){
                int id;
                string name;
                cout<<"enter id of course ";
                cin>>id;
                for(int i=0;i<count;i++){
                                if(co[i].get_id()==id){
                                                                name=co[i].returnname();

                                }
                }
               student *newstudent=new student(name);
                newstudent->putdata();

                s1[Count++]=*newstudent;



}
void gradebooksystem::editstudent(int id){
                  if (Count==0)
    {


        cout<<"****************************************\n";
        cout<<"\t     not found"<<endl;
        cout<<"****************************************\n";

        sleep(1.5);
        system("cls");
        return;
    }
    else{
                for(int i=0;i<Count;i++){
                                if(s1[i].get_id()==id){
                                                s1[i].putdata();
                                }
                }
                                }
}
void gradebooksystem::deletestudent(int id){
                 if (Count==0)
    {


        cout<<"****************************************\n";
        cout<<"\t     not found"<<endl;
        cout<<"****************************************\n";

        sleep(1.5);
        system("cls");
        return;
    }
    else
    {
        bool deleted=false;
        for(int i=0; i<Count; i++)
        {
            if(s1[i].get_id()==id)
            {
                if(i==Count-1)
                {
                    Count--;
                    deleted=true;

                }
                else
                {
                    s1[i]=s1[Count-1];
                    Count--;
                    deleted=true;
                }
            }
        }
        if(deleted)
        {
            cout<<"deleted successfully ...";
            sleep(2);
        }
        else
        {
            cout<<"not found";
            sleep(2);


        }
                                }
}

void gradebooksystem::printinfo(){

                for(int i=0 ;i<Count;i++){
                                s1[i].getdata();

                                cout<<"\n---------------------------------"<<endl;
                }
}
void gradebooksystem::searchstudent(string key){

    int found=0;
    for(int i=0; i<Count; i++)
    {
        if(s1[i].findany(key))
        {
            s1[i].getdata();
            cout<<"\n----------------------------------"<<endl;

            found++;

        }
    }
    if(found==0)
    {
         cout<<"\n\n\n\n\n";


        cout<<"\t\t\t\t*****************************************\n";
cout<<"\t\t\t\t*\t\t";

        cout<<"NOT FOUND";


 cout<<"\t\t*"<<endl;
        cout<<"\t\t\t\t*****************************************\n";
        sleep(1.5);
        /*

        system("cls");
        */

        return;

    }
    else
    {
         cout<<"\n\n\n\n\n";


        cout<<"\t\t\t\t*****************************************\n";
cout<<"\t\t\t\t*\t\t";


        cout<<"FOUNDED"<<found;


 cout<<"\t\t*"<<endl;
        cout<<"\t\t\t\t*****************************************\n";






    }
}



