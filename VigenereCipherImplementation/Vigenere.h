#ifndef VIGENERE_H
#define VIGENERE_H

#include <iostream>
#include <string>

using namespace std;


class Vigenere
{

   public:
      Vigenere(string chosenKey);
      string encrypt(string t);
      string decrypt(string t);

   private:
      string key; // represents the key.
};



#endif
