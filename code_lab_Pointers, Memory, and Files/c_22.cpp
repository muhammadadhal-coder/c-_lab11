 #include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream in("grades.txt");
    if (!in) {
        cout << "Cannot open grades.txt\n";
        return 1;
    }

    ofstream out("passed.txt");
    string name;
    int score;
    int passed = 0, total = 0;
    while (in >> name >> score) {
        total++;
        if (score >= 50) {
            out << name << "\n";
            passed++;
        }
    }

    out << "Passed: " << passed << " of " << total << "\n";
    return 0;
}