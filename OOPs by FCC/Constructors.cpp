#include <bits/stdc++.h>

class Employee
{
private:
  std::string m_name, m_company;
  int m_age;

public:
  Employee(std::string name, std::string company, int salary);
  ~Employee();
  void setName(const std::string& name)
  {
    m_name = name;
  }
  void setCopmpany(const std::string& company)
  {
    m_company = company;
  }
  void setAge(const int& age)
  {
    m_age = age;
  }
  std::string getName()
  {
    return m_name;
  }
  std::string getCompany()
  {
    return m_company;
  }
  int getAge()
  {
    return m_age;
  }
  void printDetails()
  {
    std::cout << "\nName : " << getName() << std::endl;
    std::cout << "Company : " << getCompany() << std::endl;
    std::cout << "Age : " << getAge() << "\n" << std::endl;
  }
};

Employee::Employee(std::string name, std::string company, int age)
{
  setName(name);
  setCopmpany(company);
  setAge(age);
}

Employee::~Employee()
{
}

int main()
{
  Employee employee1 = Employee("Srikanth", "DRDO", 25);
  employee1.printDetails();
  Employee employee2 = Employee("Sri", "Google", 34);
  employee2.printDetails();
}