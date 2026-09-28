#include <iostream>

using namespace std;

int main() {
    string word;
    cout << "Type word or sentance:" << endl;
    getline(cin, word); // получаем строку с пробелами

    char symbol;
    cout << "Type any letter and program will count this letter:" << endl;
    cin >> symbol;

    int repeats = 0;

    for (int i = 0; i < word.length(); i++) {
        if (word[i] == symbol) {
            repeats += 1;
        }
    }

    cout << "Repeats:" << " " << repeats;

    return 0;
}

