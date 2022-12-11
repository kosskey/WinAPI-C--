#include <iostream>
#include <string>

//using std::cout;
//using std::cin;
using namespace std;

int main() {
    //int age;
    string age;

    cout << "Hello, world!\n";
    //cin >> age;
    getline(cin, age);
    cout << "Hello, " << age << "!\n";

    system("pause");

    return 0;
}
