#include <iostream>

using namespace std;

int main() {
    int num1 {50} ;
    int num2 {20} ;

    int result;
  //  cin >> num1 ;
  //  cin >> num2 ; 

// Addition

    result = num1 + num2 ;
    cout << num1 << "+" <<  num2 << " = "<< result << endl;

// Substraction
   
    result = num1 - num2 ;
    cout << num1 << "-" << num2 << "=" << result << endl ;

// multiplication 

    result = num1 * num2 ;
    cout << num1 << "*" << num2 << "=" << result << endl ;

// Division 

    result = num1 / num2 ; 
    cout << num1 << "/" << num2 << "=" << result << endl ;

// Modulus  
 
    result = num1 % num2 ; 
    cout << num1 << "%" << num2 << "=" << result << endl ; 

  
    cout << endl;
    return 0 ;

    // Bye Bye
}