// quadratic function solution result
#include <iostream>
#include <cmath>
using namespace std;
pair< bool, pair<double, double> > quadratic (int a, int b, int c) {
    double inside = b*b - 4*a*c;
    pair<double, double> blank;
    if (inside < 0){
        return make_pair(false, blank);
    };
    pair<double, double> answer = make_pair( (-b + sqrt(inside))/2, (-b - sqrt(inside))/2 );
    return make_pair(true, answer);
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    // pair< bool, pair<double, double> > result = quadratic(a, b, c);
    // auto result = quadratic(a, b, c); // when the returned type is determined, use auto
    auto [found, solutions] = quadratic(a, b, c); // structred bind
    if (found){
        // pair<double, double> solution = result.second;
        // auto solution = result.second;
        auto [x1, x2] = solutions; // structred bind
        // cout << solution.first << " and " << solution.second << endl;
        cout << x1 << " and " << x2 << endl;
    }
    else{
        cout << "No solution found!" << endl;
    };
    return 0;
}