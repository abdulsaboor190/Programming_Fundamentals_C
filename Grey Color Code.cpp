// Abdul Saboor   Roll NO: 23I-3039   Assignment=1
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num1, num2, check;
    cout << "Enter a number: ";
    cin >> num1;
    bitset<16> what(num1);
    
    num2 = num1; 
    num2 >>= 1;
    check = num2 ^ num1;  

	cout<<"The Binary of "<<num1<<" is: "<<what<<endl<<endl;
 
    cout<< ((check >> 15) & 1)
    <<((check >> 14) & 1)
    <<((check >> 13) & 1)
    <<((check >> 12) & 1)
    <<((check >> 11) & 1)
    <<((check >> 10) & 1)
    <<((check >> 9) & 1)
    <<((check >> 8) & 1)
    <<((check >> 7) & 1)
    <<((check >> 6) & 1)
    <<((check >> 5) & 1)
    <<((check >> 4) & 1)
    <<((check >> 3) & 1)
    <<((check >> 2) & 1)
    <<((check >> 1) & 1)
    <<(check & 1);
    
    return 0;
}
