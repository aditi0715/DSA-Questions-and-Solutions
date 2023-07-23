#include<iostream>
using namespace std;

class Student{
    int roll_number;
    public:
        void set_rollNumber(int a){
            roll_number = a;
        }

        void show_rollNumber(void){
            cout<< "Your roll number is " << roll_number << endl;
        }   
};

class Test : virtual public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }

        void get_marks(void){
            cout << "Marks obtained in maths are: " << maths << endl
                 << "Marks obtained in physics are: " << physics << endl;
            
        }
};

class Sports : virtual public Student{
    protected:
        float score;
    public: 
        void set_score(int sc){
            score = sc;
        }

        void get_score(void){
            cout << "The score obtained is: " << score << endl;
        }
};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = score + maths + physics; 
            show_rollNumber();
            get_marks();
            get_score();
            cout << "Your total score in the result is " << total << " out of 300" <<  endl;
        }
};

int main()
{
    Result sarthak;
    sarthak.set_rollNumber(01);
    sarthak.show_rollNumber();

    sarthak.set_marks(99, 97);
    sarthak.get_marks();

    sarthak.set_score(100);
    sarthak.get_score();

    sarthak.display();
    return 0;
}