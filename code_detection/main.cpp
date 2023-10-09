
#include <iostream>
#include <fstream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;

const int MAX_CODE_SIZE = 250;

void getFileLength(ifstream &inf, const char filename[], int *len);

/**
 * ReadCode - this reads the secret code and Check if its > MAX_LEN => 250
 * Read the code from file  */
void readCode(ifstream &infile, const char filename[], int list[], int *length, bool &lenCodeOk);

/**
 * Read and compare the code in the files*/
void compareCode(ifstream &infile, const char filename[], ofstream &outfile, const int list[], int length);

int main()
{
    // STEP 1: ==========

    int codeArray[MAX_CODE_SIZE]; // Array to store the secret code
    int codeLength{};             // variable to store length of secret code
    bool lengthCodeOk{};          // var. to check if code len. is <= 250 char

    ifstream incode{};  // input file stream var.
    ofstream outcode{}; // output file stream var.

    // getFileLength(incode, "C:/Projects/CGI_projects/code_detection/codeIn.txt", codeLength);

    // cout << "File Length in C-type char: " << codeLength << "\n";

    char inputFile[100];  // var to store name of input file
    char outputFile[100]; // var to store name of output file

    // cout << "Enter the input file name:\n";
    // cin >> inputFile;
    // cout << endl;

    // STEP 2: ==========

    const char inFileName[] = "C:/Projects/CGI_projects/code_detection/codeIn.txt";

    incode.open(inFileName);
    if (!incode)
    {
        cout << "Cannot open the inp. file." << endl;
        return 1;
    }
    // cout << "Enter the output file name:\n";
    // cin >> outputFile;
    // cout << endl;

    // outcode.open(outputFile);

    outcode.open("C:/Projects/CGI_projects/code_detection/codeOut.txt");
    if (!outcode.is_open())
    {
        cout << "Something is wrong with output\n";
    }

    readCode(incode, inFileName, codeArray, &codeLength, lengthCodeOk);
    cout << "codeLength in 'main' = " << codeLength << "\n";

    if (lengthCodeOk)
        compareCode(incode, inFileName, outcode, codeArray, codeLength);
    else
        cout << "Length of the Secret Code must be <=" << MAX_CODE_SIZE << "\n";
    incode.close();
    outcode.close();

    return 0;
}

void getFileLength(ifstream &inf, const char filename[], int *len1)
{
    inf.open(filename, std::ios::binary);
    inf.seekg(0, std::ios::end);
    *(len1) = inf.tellg();
    inf.close();
}

void readCode(ifstream &infile, const char filename[], int list[], int *length, bool &lenCodeOk)
{
    int count;
    lenCodeOk = true;

    // Get the length of the secret code
    // infile >> length;
    getFileLength(infile, filename, &(*length));
    cout << "Length inside readCode = " << *length << "\n";

    // Check length do not exceed MAX SIZE
    if (*length > MAX_CODE_SIZE)
    {
        lenCodeOk = false;
        return;
    }

    // Get the secret code
    for (count = 0; count < *length; count++)
        infile >> list[count];
}

void compareCode(ifstream &infile, const char filename[], ofstream &outfile, const int list[], int length)
{
    // step A
    int length2;
    int digit;
    bool codeOk;
    int count;

    codeOk = true; // Step B

    // infile >> length2; // Step C
    getFileLength(infile, filename, &length2);
    cout << "Length2 = " << length2 << " and Length = " << length << "\n";

    if (length != length2)
    {
        cout << "The Original Code and Its Copy, are not of the same length.\n";
        return;
    }

    outfile << "Code Digit      Code Digit Copy \n";
    for (count = 0; count < length; count++)
    {
        infile >> digit;
        outfile << std::setw(5) << list[count] << std::setw(17) << digit;

        if (digit != list[count])
        {
            outfile << "code digits are not the same \n";
            codeOk = false;
        }
        else
            outfile << std::endl;
    } // End for count

    if (codeOk)

        outfile << "Msg transmitted OK.\n";
    else
        outfile << "Error in transmission. Retransmit!! \n";
}
