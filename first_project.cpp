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

    /* fifth part */
    /* defining student class and get his/her informations */
    class Student {
        protected:
            string first_name, last_name, address, email ;
            int age, national_ID_number ;
        public :
            void get_student_informations(){
                cout << "enter your first name : ";
                cin >> first_name;

                cout << "enter your last name : ";
                cin >> last_name;

                cout << "enter your address : ";
                cin >> address ;

                cout << "enter your email : ";
                cin >> email ;

                cout << "enter your age : ";
                cin >> age;

                cout << "national_ID_number : ";
                cin >> national_ID_number; 
            }
    };

    /* defining child classes as student's degree */
    class BachelorsStudents : public Student {
        private:
            string student_degree = "Bachelor" ;
        public:
        /* defining a function to show students information */
            void show_student_informations (){
                cout << "first_name : "<< first_name <<endl;
                cout << "last_name : "<< last_name <<endl;
                cout << "address : "<< address <<endl;
                cout << "email : "<< email <<endl;
                cout << "age : "<< age <<endl;
                cout << "national_ID_number :" << national_ID_number <<endl;
                cout << "degree: " << student_degree << endl;
            }
    };

    class MasterStudents : public Student {
        private :
            string student_degree ="master";
        public:
        /* defining a function to show students information */
            void show_student_informations (){
                cout << "first_name : "<< first_name <<endl;
                cout << "last_name : "<< last_name <<endl;
                cout << "address : "<< address <<endl;
                cout << "email : "<< email <<endl;
                cout << "age : "<< age <<endl;
                cout << "national_ID_number :" << national_ID_number <<endl;
                cout << "degree: " << student_degree << endl;
            } 
    };

    class PhdStudents : public Student {
        private :
            string student_degree ="phd";
        public:
        /* defining a function to show students information */
            void show_student_informations (){
                cout << "first_name : "<< first_name <<endl;
                cout << "last_name : "<< last_name <<endl;
                cout << "address : "<< address <<endl;
                cout << "email : "<< email <<endl;
                cout << "age : "<< age <<endl;
                cout << "national_ID_number :" << national_ID_number <<endl;
                cout << "degree: " << student_degree << endl;
            } 
    };
     
int main(){

   /*fifth part test*/ 
    BachelorsStudents s1;
    s1.get_student_informations();
    s1.show_student_informations();

    return 0;
}