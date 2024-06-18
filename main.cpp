#include <iostream>
#include <string>

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

string decrypte(string& encryptedText, int key) {
    string decryptedText = encryptedText;
    for(int i = 0; i < encryptedText.length(); ++i) {
        if(encryptedText[i] >= 'a' && encryptedText[i] <= 'z') {
            decryptedText[i]=((encryptedText[i]- 'a'- key + 26)% 26)+ 'a';
        }else if (encryptedText[i] >= 'A'&& encryptedText[i]<= 'Z') {
            decryptedText[i]=((encryptedText[i]- 'A'- key + 26)% 26)+ 'A';
        }else {
            decryptedText[i] = encryptedText[i];
        }
    }
    return decryptedText;
}

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin,text);
    string encrypt_text = encrypt(text, 12);
    cout << "Code: " << encrypt_text << endl;

    string code;
    cout << "Enter code: ";
    getline(cin,code);
    string decrypted_text = decrypte(code, 12);
    cout << "Decrypted code: " << decrypted_text << endl;

    return 0;
}