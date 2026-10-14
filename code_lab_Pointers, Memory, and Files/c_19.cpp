#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

double average(const vector<int>& v)
{
    double sum = 0;
    for (int x : v) {
        sum += x;
    }
    return sum / v.size();
}

int main()
{
    ifstream in("scores.txt");
    if (!in) {
        cout << "Cannot open scores.txt\n";
        return 1;
    }

    vector<int> v;
    int x;
    while (in >> x) {
        v.push_back(x);
    }
    in.close();

    double avg = average(v);
    int highest = v[0];
    for (int s : v) {
        if (s > highest) highest = s;
    }

    ofstream out("report.txt");
    out << "Count: " << v.size() << "\n";
    out << "Average: " << avg << "\n";
    out << "Highest: " << highest << "\n";
    out << "Above average:";
    for (int s : v) {
        if (s > avg) out << " " << s;
    }
    out << "\n";
    return 0;
}