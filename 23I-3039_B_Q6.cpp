// Abdul Saboor   Roll NO: 23I-3039   Assignment=1
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    unsigned int num1;
    cout << "Enter a number: ";
    cin >> num1;
     bitset<32> what(num1);
    cout<<"The Number is "<<num1<< " the and binary of it is: "<<what<<endl<<endl;
    long G1 = ((num1) & 255);
    long G2 = ((num1 >> 8) & 255);
    long G3 = ((num1 >> 16) & 255);
    long C = ((num1 >> 24) & 255);
    
    int final = G1 ^ G2;
    final = G3 ^ final;
    int key = final ^ C;
    cout << "G1: " << bitset<8>(G1) << endl;
    cout << "G2: " << bitset<8>(G2) << endl;
    cout << "G3: " << bitset<8>(G3) << endl;
    cout << "Constant: " << bitset<8>(C) << endl<<endl;
    cout << "Key: " << bitset<8>(key) << endl;
    return 0;
}
