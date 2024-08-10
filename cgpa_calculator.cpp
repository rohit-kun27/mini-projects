#include<iostream>
using namespace std;

int main(){
    int total_course, credit;
    double grade, total_grade=0, total_credit=0;

    cout<<"Enter Number of Courses: ";
    cin>>total_course;


    for(int i =1 ; i<=total_course; i++){
        cout<<"Enter Grade:"<<i<<": ";
        cin>>grade;

        cout<<"Enter Credit:"<<i<<": ";
        cin>>credit;

        total_grade +=(grade * credit);
        total_credit += credit;
    }

    double CGPA=(total_grade/total_credit);
    cout<<"Your CGPA: "<<CGPA<<endl;
    
    return 0;
}