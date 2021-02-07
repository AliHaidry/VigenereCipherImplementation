#include<iostream>
#include<string>
#include "Vigenere.h"


using namespace std;

// the constructor of the class
Vigenere::Vigenere(string chosenKey)
{
      for (int i = 0; i < chosenKey.size(); ++i)  // the chosen key
      {
         if (chosenKey[i] >= 'A' && chosenKey[i] <= 'Z')
            this->key += chosenKey[i];
         else if (chosenKey[i] >= 'a' && chosenKey[i] <= 'z')
            this->key += chosenKey[i] + 'A' - 'a';
      }
}

string Vigenere::encrypt(string t)
{
   string encryptedOutput;
   for (int i = 0, j = 0; i < t.length(); ++i) 
   {
      char c = t[i];
      if (c >= 'a' && c <= 'z')
         c += 'A' - 'a';
      else if (c < 'A' || c > 'Z')
         continue;
      //** added 'A' to bring it in range
      //** of ASCII alphabet [ 65-90 | A-Z ]
      encryptedOutput += (c + key[j] - 2 * 'A') % 26 + 'A';
      j = (j + 1) % key.length();
   }
   return encryptedOutput;
}

string Vigenere::decrypt(string t)
{
   string decryptedOutput;
   for (int i = 0, j = 0; i < t.length(); ++i) 
   {
      char c = t[i];
      if (c >= 'a' && c <= 'z')
         c += 'A' - 'a';
      else if (c < 'A' || c > 'Z')
         continue;
      //** added 'A' to bring it in range of
      //** ASCII alphabet [65-90 | A-Z]
      decryptedOutput += (c - key[j] + 26) % 26 + 'A';
      j = (j + 1) % key.length();
   }
   return decryptedOutput;
}
