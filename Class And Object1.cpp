#include<iostream>
using namespace std;
class student
{
    public:

    string name;
    int mid;
    float ends;
    bool pre_abs;

    void display_calculate_matks()
    {
        float total_marks;
        total_marks = mids*0.5 + ends*0.75;
        cout<<"The marks of "<<name<<"is "<<total_marks;
    }
};
class vehicle
{
    public:
    string car_name;
    string tyre_name;
    int number_of_seats;
    int number_of_tyres

};

int mamin(){
    student a,b,c; // here a,b,c are of type student.
    //a,b,c over here are objects of the particular class.
      a.name="Gagan";
    a.mid=50;
    a.ends=99.5;
    a.pre_abs=1;

    b.car_name="verna";
    b.numer_of_seats=2;
    b.number_of_tyres=4
    b.tyre_name="MRF";

    a.display_calculate_matks();



}
