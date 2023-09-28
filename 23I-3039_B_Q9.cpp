// Abdul Saboor   Roll NO: 23I-3039   Assignment=1
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, sum;
    cout << "Enter the Four Numbers: ";
    cin >> a >> b >> c >> d;

    (a > b && b > c && c > d) ? cout<<"The Maximum is: " <<a<< " The Second Maximum is: "<< b : cout << "";
    (a > b && b > d && d > c) ? cout<<"The Maximum is: " <<a<< " The Second Maximum is: "<< b : cout << "";
    (a > c && c > b && b > d) ? cout<<"The Maximum is: " <<a<< " The Second Maximum is: "<< c : cout << "";
    (a > c && c > d && d > b) ? cout<<"The Maximum is: " <<a<< " The Second Maximum is: "<< c : cout << "";
    (a > d && d > b && b > c) ? cout<<"The Maximum is: " <<a<< " The Second Maximum is: "<< d : cout << "";
    (a > d && d > c && c > b) ? cout<<"The Maximum is: " <<a<< " The Second Maximum is: "<< d : cout << "";
    (b > a && a > c && c > d) ? cout<<"The Maximum is: " <<b<< " The Second Maximum is: "<< a : cout << "";
    (b > a && a > d && d > c) ? cout<<"The Maximum is: " <<b<< " The Second Maximum is: "<< a : cout << "";
    (b > c && c > a && a > d) ? cout<<"The Maximum is: " <<b<< " The Second Maximum is: "<< b : cout << "";
    (b > c && c > d && d > a) ? cout<<"The Maximum is: " <<b<< " The Second Maximum is: "<< b : cout << "";
    (b > d && d > a && a > c) ? cout<<"The Maximum is: " <<b<< " The Second Maximum is: "<< d : cout << "";
    (b > d && d > c && c > a) ? cout<<"The Maximum is: " <<b<< " The Second Maximum is: "<< d : cout << "";
    (c > a && a > b && b > d) ? cout<<"The Maximum is: " <<c<< " The Second Maximum is: "<< a : cout << "";
    (c > a && a > d && d > b) ? cout<<"The Maximum is: " <<c<< " The Second Maximum is: "<< a : cout << "";
    (c > b && b > a && a > d) ? cout<<"The Maximum is: " <<c<< " The Second Maximum is: "<< b : cout << "";
    (c > b && b > d && d > a) ? cout<<"The Maximum is: " <<c<< " The Second Maximum is: "<< b : cout << "";
    (c > d && d > a && a > b) ? cout<<"The Maximum is: " <<c<< " The Second Maximum is: "<< d : cout << "";
    (c > d && d > b && b > a) ? cout<<"The Maximum is: " <<c<< " The Second Maximum is: "<< d : cout << "";
    (d > a && a > b && b > c) ? cout<<"The Maximum is: " <<d<< " The Second Maximum is: "<< a : cout << "";
    (d > a && a > c && c > b) ? cout<<"The Maximum is: " <<d<< " The Second Maximum is: "<< a : cout << "";
    (d > b && b > a && a > c) ? cout<<"The Maximum is: " <<d<< " The Second Maximum is: "<< b : cout << "";
    (d > b && b > c && c > a) ? cout<<"The Maximum is: " <<d<< " The Second Maximum is: "<< b : cout << "";
    (d > c && c > a && a > b) ? cout<<"The Maximum is: " <<d<< " The Second Maximum is: "<< c : cout << "";
    (d > c && c > b && b > a) ? cout<<"The Maximum is: " <<d<< " The Second Maximum is: "<< c : cout << "";
    
    (a==b || b==c || c==d || a==c || a==d || b==d)? cout<<"Invalid Number" : cout<<"";
    

    return 0;
}
