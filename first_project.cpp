#include<iostream>
#include<string.h> 
using namespace std;
    /* third part */
    /* master's profile */
    class StudentInformations {
        private : 
            string student_name = "Ali Shahbazi";
            int student_ID = 1273896858;
        protected : 
        float math, chemistry ;
    };
    class StudentScores : public StudentInformations{
        public :
        void get_scores(){ 
            cout << "enter math score : ";
            cin >> math ;
            cout << "enter chemistry score : ";
            cin >> chemistry;
         };
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

    /*third part test*/
    StudentScores obj1;
    obj1.get_scores();

    /*fifth part test */
    BachelorsStudents s1;
    s1.get_student_informations();
    s1.show_student_informations();
    

    return 0;
}