#include<iostream>
#include<string>
using namespace std;
class Employee{
private:
    int id;
    string name;
    string dept;
    double baseSal;
public:
    Employee(){
        id=0;
        name="Unknown";
        dept="Not Assigned";
        baseSal=0;
    }
    Employee(int i,string n){
        id=i;
        name=n;
        dept="Not Assigned";
        baseSal=0;
    }
    Employee(int i,string n,string d,double sal){
        id=i;
        name=n;
        dept=d;
        baseSal=sal;
    }
    Employee(const Employee &e){
        id=e.id;
        name=e.name;
        dept=e.dept;
        baseSal=e.baseSal;
    }
    double calculatepay(){
        return baseSal;
    }
    double calculatepay(double bonus){
        return baseSal+bonus;
    }
    double calculatepay(double workinghours,double rateperhour){
        return baseSal+(workinghours*rateperhour);
    }
    double calculatePay(double bonus,double taxPercentage,bool tax){
        double totalsal=baseSal+bonus;
        double taxAmount=totalsal*taxPercentage/100;
        return totalsal-taxAmount;
    }
    void updateProfile(string d){
        dept=d;
    }
    void updateProfile(double salary){
        baseSal=salary;
    }
    void updateProfile(string d,double salary){
        dept=d;
        baseSal=salary;
    }
    void displayDetails(){
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Base salary: "<<baseSal<<endl;
    }
};
int main(){
    Employee e;
    e.displayDetails();
    Employee e1(1,"Harsha");
    e1.displayDetails();
    Employee e2(2,"Jaya","xyz",100000);
    e2.updateProfile("abc");
    e2.displayDetails();
    e2.updateProfile(200000);
    e2.displayDetails();
    e2.updateProfile("luv",120000);
    e2.displayDetails();
    return 0;
}