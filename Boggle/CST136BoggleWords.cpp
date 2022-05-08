// CST136BoggleWords.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//
//#include <iostream>
//#include <fstream>
//#include <string>
//
//using std::string;
//using std::ifstream;
//using std::fstream;
//using std::cout;
//using std::endl;
//using std::getline;
//
//int main()
//{
//    string inString;
//    ifstream inFile;
//    inFile.open("C:\\TEMP\\engmix.txt");
//    fstream outFile;
//    outFile.open("C:\\TEMP\\boggle.txt",fstream::out);
//
//    if (inFile.is_open() && outFile.is_open() )
//    {
//        cout << "Files are open." << endl;
//        
//        while (getline(inFile, inString))
//        {
//            if (inString.length() > 3 && inString.length() < 17)
//            {
//                cout << inString << endl;
//                outFile << inString << endl;
//            }
//        }
//    }
//    else
//    {
//        cout << "Error opening files." << endl;
//    }
//    inFile.close();
//    outFile.close();
//}

