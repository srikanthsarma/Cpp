#include <bits/stdc++.h>

using namespace std;


class Student
{
private:
  int Scores[5];
public:
  void input();
  int calculateTotalScore();
  void set_score(int value,int index){
    Scores[index] = value;

  }
  int get_score(int index){
    return Scores[index];
  }
};

void Student::input(){
  for (int i = 0; i < 5; i++)
  {
    int x;
    cin >> x;
    set_score(x,i);
    
  }
}
int Student::calculateTotalScore(){
  int sumOfScores = 0;
  for (int i = 0; i < 5; i++)
  {
    sumOfScores += get_score(i);
  }
  return sumOfScores;
}


int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
