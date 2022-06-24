 #include <iostream>
using namespace std;

int main() {
int yourFriends;
int totalFriends;
cout << "Type a number: ";
cin >> yourFriends;
totalFriends = yourFriends*yourFriends;
cout << "Your friend knows ";
cout << totalFriends;
cout << " people.\n";
totalFriends = totalFriends*yourFriends;
cout << "And, they know ";
cout << totalFriends;
cout << " people.\n";
}