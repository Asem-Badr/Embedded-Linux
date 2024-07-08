#include <iostream> 
using namespace std;

int main(){
    /*this program will take input in a binary format and print the 
    decimal equivalent of the binary number or take the decimal and 
    convet it to binay 
    it should detect the input itself and convert it to the other format*/
    string input;
    cout << "Enter a binary number or a decimal number: ";
    cin >> input;
    int decimal = 0;
    int binary = 0;
    bool isBinary = true;
    for (int i = 0; i < input.length(); i++){
        if (input[i] != '0' && input[i] != '1'){
            isBinary = false;
            break;
        }
    }
    if (isBinary){
        for (int i = 0; i < input.length(); i++){
            if (input[i] == '1'){
                decimal += 1 << (input.length() - i - 1);
            }
        }
        cout << "Decimal: " << decimal << endl;
    } else {
        binary = stoi(input);
        string binaryString = "";
        while (binary > 0){
            binaryString = to_string(binary % 2) + binaryString;
            binary /= 2;
        }
        cout << "Binary: " << binaryString << endl;
    }


    return 0;
}