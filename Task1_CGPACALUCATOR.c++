#include <iostream>
using namespace std;
int main()
{
    int n,credit;
    int totalCredits=0;
    float gradePoint,cgpa;
    float totalGradePoints=0;
    cout<<"Enter number of courses: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<"\nCourse "<<i<<endl;
        cout<<"Enter Grade Point: ";
        cin>>gradePoint;
        cout<<"Enter Credit Hours: ";
        cin>>credit;
        totalGradePoints += gradePoint * credit;
        totalCredits += credit;
    }
    cgpa=totalGradePoints/totalCredits;
    cout<<"Total Credits = "<<totalCredits;
    cout<<"CGPA = "<<cgpa<< endl;
    return 0;
}