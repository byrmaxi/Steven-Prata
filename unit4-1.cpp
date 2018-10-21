#include <iostream>
 
int main ()
{ 
    using namespace std;
    const int n = 20;
    char Fname[n];
    char Lname[n];
    int age;
    char grade;
    
    cout<<"what is your first name "<<endl;
    cin.getline(Fname,n);
    
    cout<<"what is your last name "<<endl;
    cin.getline(Lname,n);
    
    cout<<"what letter grade do you deserve "<<endl;
    cin>>grade;
    
    cout<<"what is your age "<<endl;
    cin>> age ;
    
    grade+=1;
    cout << "Name: " <<Lname << ", " << Fname << endl;
    cout << "Grade: " << grade << endl;;
    cout << "Age: " << age << endl;
    
}    