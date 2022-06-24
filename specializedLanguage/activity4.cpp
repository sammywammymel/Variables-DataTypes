#include <iostream>
using namespace std;

int main() {
int yearlyLitters;
int annualMice;
int litterSize;
litterSize = 3;
yearlyLitters = 5;
cout << "One female mouse may give birth to ";
annualMice = litterSize * yearlyLitters;
cout << annualMice;
cout << " to ";
litterSize = 14;
yearlyLitters = 10;
annualMice = litterSize * yearlyLitters;
cout << annualMice;
cout << " mice per year.";
}