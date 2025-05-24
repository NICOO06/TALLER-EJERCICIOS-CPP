#include <iostream>
using namespace std;

int main() {
    int gramos, caloriasPorGramo;
    cin >> gramos >> caloriasPorGramo;

    int total = gramos * caloriasPorGramo;
    cout << total;
    return 0;
}
