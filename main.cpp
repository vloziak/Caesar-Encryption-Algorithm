#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

string encrypt(char* rawText, int key) {
    char* encryptedText = new char[strlen(rawText)+1];
    for (int i = 0; i < strlen(rawText); ++i) {
        if (rawText[i] >= 'a' && rawText[i] <= 'z') {
            encryptedText[i] = ((rawText[i] - 'a' + key) % 26) + 'a';
        } else if (rawText[i] >= 'A' && rawText[i] <= 'Z') {
            encryptedText[i] = ((rawText[i] - 'A' + key) % 26) + 'A';
        } else {
            encryptedText[i] = rawText[i];
        }
    }
    // encryptedText[strlen(rawText)] = '\0';
    return encryptedText;
}

int main() {
    char* text;
    cout << "Enter text: ";
    cin >> text;
    string encrypt_text = encrypt(text, 2);
    cout << encrypt_text << endl;

}