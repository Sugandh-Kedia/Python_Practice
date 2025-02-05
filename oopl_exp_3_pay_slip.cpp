#include <iostream>
#include<string>
using namespace std;

class Employee{
protected:
   string emp_name;
   string emp_id;
   string address;
   string email_id;
   string mobile_no;

public:
    Employee(string name, string id, string email_id, string addr, string mobile)
        : emp_name(name), emp_id(id), address(addr), email_id(email_id), mobile_no(mobile){}
        
    void display_pay_slip(double basic_pay){
        cout << "Name of Employee: " << emp_name << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Address: " << address << endl;
        cout << "Mail ID: " << email_id << endl;
        cout << "Mobile Number: " << mobile_no << endl;
        double da = 0.97 * basic_pay;
        double hra = 0.10 * basic_pay;
        double pf = 0.12 * basic_pay;
        double staff_club_fund = 0.001 * basic_pay;
        double gross_salary = basic_pay + da + hra;
        double net_salary = gross_salary - pf - staff_club_fund;
        cout << "Basic Pay: " << basic_pay << endl;
        cout << "Dearness Allowance (DA): " << da << endl;
        cout << "House Rent Allowance (HRA): " << hra << endl;
        cout << "Provident Fund (PF): " << pf << endl;
        cout << "Staff Club Fund: " << staff_club_fund << endl;
        cout << "Gross Salary: " << gross_salary << endl;
        cout << "Net Salary: " << net_salary << endl;
        cout << "----------------------------------" << endl;
    }
};
class Programmer : public Employee {
public:
    Programmer(string name, string id, string addr, string mail, string mobile, double basic_pay)
        : Employee(name, id, addr, mail, mobile) {
            display_pay_slip(basic_pay);
    }
};

class TeamLead : public Employee {
public:
    TeamLead(string name, string id, string addr, string mail, string mobile, double basic_pay)
        : Employee(name, id, addr, mail, mobile) {
            display_pay_slip(basic_pay);
    }
 };

 class AssistantProjectManager : public Employee {
 public:
     AssistantProjectManager(string name, string id, string addr, string mail, string mobile, double basic_pay)
        : Employee(name, id, addr, mail, mobile) {
            display_pay_slip(basic_pay);
     }
 };

 class ProjectManager : public Employee {
 public:
     ProjectManager(string name, string id, string addr, string mail, string mobile, double basic_pay)
        : Employee(name, id, addr, mail, mobile) {
            display_pay_slip(basic_pay);
    }
 };

int main()
{
    int a;
    cout<<"Choose 1 for programer\n"<<"Choose 2 for Team Leader\n"<<"Choose 3 for Assistant Project Manager\n"<<"Choose 4 for ProjectManager\n"<<endl;
    cout<<"Enter your choice: "<<endl;
    cin>>a;
    if(a==1){
        Programmer programmer("Viraj Parmar", "EMP123", "123 Main St.", "john@example.com", "555-1234", 50000);
    }
    else if(a==2){
        TeamLead team_lead("Sagar Acharya", "EMP456", "456 Elm St.", "jane@example.com", "555-5678", 60000);
    }
    else if(a==3){
        AssistantProjectManager assistant_pm("Sandeep Patil", "EMP789", "789 Oak St.", "michael@example.com", "555-9876", 70000);
    }
    else if(a==4){
        ProjectManager project_manager("Sourabh Shah", "EMP101", "101 Pine St.", "sarah@example.com", "555-1111", 80000);
    }
    else{
        cout<<"Invalid option"<<endl;
    }


    return 0;
}