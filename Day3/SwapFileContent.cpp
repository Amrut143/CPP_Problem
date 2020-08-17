#include <iostream>
#include <fstream>
using namespace std;

void swapContent() {

	string line;
	fstream fileStream;
	fileStream.open("file1.txt", ios::in);

	if(fileStream.is_open()) {
		cout << "File1 is open to read" << endl;
		while(getline(fileStream, line)) {
				cout << line << endl;

				fstream fileStream("temp.txt", ios::out);
				if(fileStream.is_open()) {
					cout << "Temp File is open to write" << endl;
					fileStream << line << endl;
					fileStream.close();
				}
		}
		fileStream.close();
	}

	fileStream.open("file2.txt", ios::in);

   if(fileStream.is_open()) {
      cout << "File2 is open to read" << endl;
      while(getline(fileStream, line)) {
            cout << line << endl;

            fstream fileStream("file1.txt", ios::out);
            if(fileStream.is_open()) {
               cout << "File1 is open to write" << endl;
               fileStream << line << endl;
               fileStream.close();
            }
      }
      fileStream.close();
   }


   fileStream.open("temp.txt", ios::in);

   if(fileStream.is_open()) {
      cout << "Temp is open to read" << endl;
      while(getline(fileStream, line)) {
            cout << line << endl;

            fstream fileStream("file2.txt", ios::out);
            if(fileStream.is_open()) {
               cout << "File2 is open to write" << endl;
               fileStream << line << endl;
               fileStream.close();
            }
      }
      fileStream.close();
   }
}

void writeToFile() {

   fstream firstFile, secondFile;

   firstFile.open("file1.txt", ios::out);

   if(firstFile.is_open()) {
         cout << "First File is open to write" << endl;
         firstFile << "This is C++ file" << endl;
         firstFile.close();
   }

    secondFile.open("file2.txt", ios::out);

    if(secondFile.is_open()) {
         cout << "Second File is open to write" << endl;
         secondFile << "This is Java file" << endl;
         secondFile.close();
   }
}

int main() {

   writeToFile();
   swapContent();
   return 0;
}



