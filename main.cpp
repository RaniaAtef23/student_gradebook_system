#include <iostream>
#include<windows.h>
#include<unistd.h>
# define byte BYTE
#include "gradebooksystem.h"
#include "student.h"
#include "course.h"
#include <stdlib.h>
using namespace std;
char choice;
int ch;
string key;
HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
 gradebooksystem g1(20);


int id;

                 int c=1;

                  int n;


void printline(string s,bool lo=true){
                cout<<s<<(lo?"\n":"\t");
}

  int productid;

void studentinfo(){
                int c=1;
    while(c!=0){
                     system("cls");
                SetConsoleTextAttribute(h,11);
                printline("***DATA ENTRY>>***");
                printline("\t\t1-show courses");
                printline("\t\t2-ADD New student");
                printline("\t\t3-EDIT student");
                printline("\t\t4-DELETE student");
                printline("\t\t5-print student info");
                printline("\t\t6-search for a student");
                printline("\t\t7-BACK TO MAIN MENUE");
                printline("***SELECT YOUR CHOICE***",false);
                cin>>c;


                switch(c){
                case 1:
                               system("cls");
                               g1.printcourses();
                               sleep(2);
                                break;


                case 2:
                                system("cls");
                               g1.addstudent();

                                cout<<"\n\t\t\tadded successfuly.....";
                                sleep(2);
                                break;


                case 3:
                                cin>>id;
                                g1.editstudent(id);
                                system("cls");


                                sleep(3);



                                break;
                case 4:
                                 cin>>id;
                                 g1.deletestudent(id);
                                system("cls");


                                sleep(3);
                                break;
                case 5:
                                g1.printinfo();
                               cout<<"back to main menue(y/n)?";
               cin>>choice;
               if(choice=='y'){
                system("cls");
               }

                                break;
                case 6:

                                cout<<"search with/studentname | coursename |part of student name"<<endl;
                                cin>>key;
                                g1.searchstudent(key);
                                cin>>choice;
               if(choice=='y'){
                system("cls");
               }

                                break;
                case 7:
                                return;
                                break;
                default:

                                printline("INVALIDE ,TRY AGAIN");
                                break;


    }

}
}


void gradesysteminfo(){



    while(c!=0){
                system("cls");
                SetConsoleTextAttribute(h,15);
                printline("***SALES PROCESS>>***");
                printline("\t\t1-ADD course");
                printline("\t\t2-edit course");
                printline("\t\t3-delete course");
                printline("\t\t4-show added courses ");
                printline("\t\t5-BACK TO MAIN MENUE");
                printline("***SELECT YOUR CHOICE***",false);
                cin>>c;
        switch(c)
        {
        case 1:

                        cout<<"------------------------------------------------------------"<<endl;
                        g1.addcourse();
                        cout<<"\n\t\t\t added successfully....";
                         sleep(3);


            break;
       case 2:
                       cout<<"------------------------------------------------------------"<<endl;
                       cout<<"\n enter id | ";

                       cin>>id;
                        g1.editcourse(id);



                        cout<<"\n\t\t\t edited successfully....";
                         sleep(3);


                      break;



        case 3:
                        cout<<"------------------------------------------------------------"<<endl;
                        cout<<"\n enter id | ";
                        cin>>id;
               g1.deletecourse(id);


            break;
        case 4:
                        char choice;

               g1.printcourses();
               cout<<"back to main menue(y/n)?";
               cin>>choice;
               if(choice=='y'){
                system("cls");
               }


            break;

        case 5:
            return;
            break;
        default:
            printline("INVALIDE ,TRY AGAIN");
            break;



        }

    }
}

char m;
int main()
{
    int c=1;
    while(c!=0){
                system("cls");
                SetConsoleTextAttribute(h,14);
                printline("***HOPE YOU ENJOY IN MY APP***");
                printline("\t\t1-GRADE SYSTEM INFO");
                printline("\t\t2-student SYSTEM INFO");
                printline("\t\t0-EXIT");
                printline("***SELECT YOUR CHOICE***",false);
                cin>>c;
                switch(c){
                case 1:
                                gradesysteminfo();
                                system("cls");

                                break;
                case 2:
                                studentinfo();
                                system("cls");
                                break;


        case 0:
                                printline("\t\t7-THANK YOU FOR TRYING OUR SERVICE");
                                break;
                default:
                             printline("INVALIDE ,TRY AGAIN");
                                break;



                }


    }
}

