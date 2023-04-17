// This program demonstrates an application 
// of pure virtual functions.
#include <iostream> // cin, cout required
#include <fstream> // ifstream, ofstream required
#include <string> // string class
//#include <cstdlib> toupper, tolower
using namespace std;

class Encryption //Abstract Base Class
{
protected:
   ifstream inFile;
   ofstream outFile;
public:
   Encryption(const string& inFileName, const string& outFileName); //overloaded constructor
   virtual  ~Encryption();
   // Pure virtual function
   virtual char transform(char ch) const = 0; //PVM 
   // Do the actual work.
   virtual void encrypt() final; //virtual function that will compile during run-time & cannot be overwritten
   virtual void decrypt() final;
};

//**************************************************
// Constructor opens the input and output file.    *
//**************************************************
Encryption::Encryption(const string& inFileName, const string& outFileName)
{
   inFile.open(inFileName);
   outFile.open(outFileName);
   if (!inFile)
   {
      cout << "The file " << inFileName
         << " cannot be opened.";
      exit(1);
   }
   if (!outFile)
   {
      cout << "The file " << outFileName
         << " cannot be opened.";
      exit(1);
   }
}

//**************************************************
//Destructor closes files.                         *
//**************************************************
Encryption::~Encryption()
{
   inFile.close();
   outFile.close();
}

//*****************************************************
//Encrypt function uses the virtual transform         *
//member function to transform individual characters. *
//***************************************************** 
void Encryption::encrypt()
{
   char ch;
   char transCh;
   inFile.get(ch);
   while (!inFile.fail())
   {
      transCh = transform(ch);
      outFile.put(transCh);
      inFile.get(ch);
   }
}

// The subclass simply overides the virtual
// transformation function
class SimpleEncryption : public Encryption 
{
public:
   char transform(char ch) const override
   {
      return ch + 1;
   }
   SimpleEncryption(const string& inFileName, const string& outFileName)
      : Encryption(inFileName, outFileName)
   {
   }
};

class SimpleDecryption : public Encryption
{
public:
    char transform(char ch) const override
    {
        return ch - 1;
    }
    SimpleDecryption(const string& inFileName, const string& outFileName)
        : Encryption(inFileName, outFileName)
    {
    }
};

void Encryption::decrypt()
{
    char ch;
    char transCh;
    inFile.get(ch);
    while (!inFile.fail())
    {
        transCh = transform(ch);
        outFile.put(transCh);
        inFile.get(ch);
    }
}

int main()
{
   string inFileName, outFileName, IF2, OF2;
   cout << "Enter name of file to encrypt: ";
   cin >> inFileName;
   cout << "Enter name of file to receive "
      << "the encrypted text: ";
   cin >> outFileName;
   SimpleEncryption obfuscate(inFileName, outFileName);
   obfuscate.encrypt();

   cout << "Enter name of file to decrypt: ";
   cin >> IF2;
   cout << "Enter name of file to recieve decryption: ";
   cin >> OF2;
   SimpleDecryption SD(IF2, OF2);
   SD.decrypt();
   return 0;
}