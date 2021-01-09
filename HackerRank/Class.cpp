#include <iostream>
#include<string>
#include <sstream>
using namespace std;

class Student
{
private:
  int age,standard;
  string first_name,last_name;
public:
  void set_age(int& AGE){
    age = AGE;
  }
  void set_first_name(string& FIRST_NAME){
    first_name = FIRST_NAME;
  }
  void set_last_name(string& LAST_NAME){
    last_name = LAST_NAME;
  }
  void set_standard(int& STANDARD){
    standard = STANDARD;
  }
  int get_age(){
     return age;
  }
  int get_standard(){
     return standard;
  }
  string get_first_name(){
     return first_name;
  }
  string get_last_name(){
     return last_name;
  }
  string to_string(){

    string output;
    ostringstream strng;
    strng << age;
    output = strng.str();
    output.append("," + first_name + "," + last_name + ",");
    ostringstream strng1;
    strng1 << standard;
    output += strng1.str();
    return output ;
  }
};



/*
Enter code for class Student here.
Read statement for specification.
*/

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}