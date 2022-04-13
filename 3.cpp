#include<iostream>
#include<string.h> 
using namespace std;
    /* third part */
    class StudentInformations {
        public :
            string student_name ;
            int student_ID , age , height , weight ; 
    };

    class SalamatSchool : protected StudentInformations {
    };
    class MadaniSchool : private StudentInformations{   
    };
    class GetInfo1 : public SalamatSchool {
        public:
			void get_info (){
                cout<< "enter student's name : " ;
                cin>> student_name;

                cout<< "enter student's ID : " ;
                cin>> student_ID;

                cout<< "enter student's age : " ;
                cin>> age ;

                cout<< "enter student's height : " ;
                cin>> height ;

                cout<< "enter student's weight : " ;
                cin>> weight ;
            }  
    };

    class GetInfo2 : public MadaniSchool {
        public:
			void get_info (){
                cout<< "enter student's name : " ;
                cin>> student_name; //Error

                cout<< "enter student's ID : " ;
                cin>> student_ID;   //Error

                cout<< "enter student's age : " ;
                cin>> age ;         //Error

                cout<< "enter student's height : " ;
                cin>> height ;      //Error

                cout<< "enter student's weight : " ;
                cin>> weight ;      //Error
            } 
    };

int main()
{
	
//	GetInfo1 g1;
//	g1.get_info();
	
	
    return 0;
}