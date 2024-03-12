#include<iostream>
using namespace std;

class Student{
    protected:
    public:
    int roll;
    void set_roll(int r)
    {
        roll=r;
    }
    void print_number(void)
    {
        cout<<"Your Roll number is: "<<roll<<endl;
    }
 };
 class Test : virtual public Student{
    protected:
    public:
    float math,science;
        void set_marks(float m, float s){
            math=m;
            science=s;
        }
        void print_marks(void){
            cout<<"Your marks are:"<<endl<<"1.Math = "<<math<<" 2.Science = "<< science <<endl;
        }
 };
 class Sports : virtual public Student{
    protected:
    public:
        float score;
        void set_score(float x){
            score=x;
        }
        void print_score(void){
            cout<<"Your PT score is: "<<score<<endl; 
        }
 };
 class Result : public Test , public Sports{
        private:
        float total;
        public:
        void display(void){
            total= math + science + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is : "<<total<<endl;
        }
 };
 int main()
 {
    Result satyam;
    satyam.set_roll(65);
    satyam.set_marks(78.6,94.1);
    satyam.set_score(7.6);
    satyam.display();
return 0;
 }