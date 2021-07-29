#include <iostream>
#include <algorithm>

using namespace std;

class Student {
public:
    string name;
    int score;
    Student(string name, int score){
        this->name = name;
        this->score = score;
    }
    //정렬기준은 점수가 작은 순서
    bool operator <(const Student &student) const{
        return this->score < student.score;
    }
};

int main(void){
    Student students[] = {
            Student("하윤", 90),
            Student("임덕영", 97),
            Student("최진욱", 93)
    };
    sort(students, students + 3);
    for(int i = 0; i < 3; i++)
        cout << students[i].name << ' ';
}
