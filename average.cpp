#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc - 1 <= 0) {
        cout << "Please input numbers to find average.";
        return 1;
    }

    double sum = 0;
    for (int i = 1; i < argc; i++) {
        sum += stod(argv[i]);
    }

    cout << "---------------------------------\n";
    cout << "Average of " << argc-1 << " numbers = " << (float)(sum / (argc-1)) << endl;
    cout << "---------------------------------\n";
    return 0;
}
