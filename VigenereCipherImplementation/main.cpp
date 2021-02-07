#include <iostream>
#include <string>
#include "Vigenere.h"

using namespace std;

// function prototype

void showMenu();


int main() {

   
   int optionVal;
   string setKey;
   string setOrigMessage;
   string setDecryptMessage;

   do {
      showMenu();
      cout << endl;
      cout << "Option:" << endl;
      cin >> optionVal;


      switch (optionVal)
      {
      case 1:
      {
         cout << "Set the key first in order to cipher or decrypt the message!" << endl;
         cin >> setKey;
         Vigenere setVigenereKey = (setKey);
         break;

      }
      case 2:
      {
         cout << "Enter the message to cipher!" << endl;
         cin >> setOrigMessage;
         Vigenere setVigenereKey = (setKey);
         string enc = setVigenereKey.encrypt(setOrigMessage);
         cout << endl;
         cout << "Original Message: " << setOrigMessage << endl;
         cout << "Encrypted Message: " << enc << endl;
         break;
      }
      case 3:
      {
         cout << "Enter the decrypted message to get the original message!" << endl;
         cin >> setDecryptMessage;
         Vigenere setVigenereKey = (setKey);
         string dec = setVigenereKey.decrypt(setDecryptMessage);
         cout << endl;
         cout << "Decrypted Message: " << dec << endl;
         break;
      }
      case 4:
      {
         cout << "You have exited the program!" << endl;
         break;
      }
      }
   } while (optionVal != 4);
   {
      // No Body Required !
   }

   system("PAUSE");
   return 0;
}




// function definition 

void showMenu()
{
   cout << "*************MENU*************" << endl;
   cout << "***|1|**********Set Key First !*************" << endl;
   cout << "***|2|**********Set Original Message to Cipher*************" << endl;
   cout << "***|3|**********Decrypt Message to see the Original Message*************" << endl;
   cout << "***|4|**********Exit the Program*************" << endl;

}

//BOSTONMASSACHUSETTSBD

//ECYWCTPOYVOIKIYHHZVPJ

