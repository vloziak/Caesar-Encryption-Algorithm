#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

string encrypt(string& rawText, int key) {
    string encryptedText = rawText;
    for (int i = 0; i < rawText.length(); ++i) {
        if (rawText[i] >= 'a' && rawText[i] <= 'z') {
            encryptedText[i] = ((rawText[i] - 'a' + key) % 26) + 'a';
        } else if (rawText[i] >= 'A' && rawText[i] <= 'Z') {
            encryptedText[i] = ((rawText[i] - 'A' + key) % 26) + 'A';
        } else {
            encryptedText[i] = rawText[i];
        }
    }
    return encryptedText;
}

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin,text);
    string encrypt_text = encrypt(text, 2);
    cout << encrypt_text << endl;

    return 0;
}