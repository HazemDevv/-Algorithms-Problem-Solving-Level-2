// Problem18Course5EncryptDecryptText.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>;
using namespace std;

string ReadText() {
    string Name = "";
    cout << "Please Enter a [Encrpt/Decrypt] \n";
    getline(cin, Name);

    return Name;
}
string EncryptionText(string OrginalName , short EncryptionKey){
    
    for (int i = 0; i <= OrginalName.length();i++){
    
        OrginalName[i] = char((int) OrginalName[i] + EncryptionKey);
    
    }
    return OrginalName;
}
string DecryptionText(string OrginalName, short EncryptionKey) {
    for (int i = 0; i <= OrginalName.length(); i++) {

        OrginalName[i] = char((int)OrginalName[i] - EncryptionKey);

    }
    return OrginalName;
}
   
int main()
{
    const short Key = 20;
    string TextBeforeEncryption = ReadText();
    string TextAfterEncryption = EncryptionText(TextBeforeEncryption,Key);
    string TextAfterDecryption = DecryptionText(TextAfterEncryption, Key);
    cout << "Text Before Encryption : " << TextBeforeEncryption << "\n"
        << "Text After Encryption : " << TextAfterEncryption << "\n"
        << "Text After Decryption : " << TextAfterDecryption << endl;
    return 0;
}
