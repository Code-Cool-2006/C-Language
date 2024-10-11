// Section 6
// Constants

/* 
    Rishab's Codding Classes
    Charges ₹10 per class
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service:
Number of rooms: 2
Price per room: $30
Cost: $60
Tax: $3.6
====================================
Total estimate: $63.6
This estimate is valid for 30 days

Pseudocode:
    Prompt the user to enter the number of rooms
    Display number of rooms
    Display price per room
    
    Display cost:  (number of rooms * price per room)
    Display tax:   number of rooms * price per room * tax rate
    Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
    Display estimate expiration time
*/

#include <iostream>

using namespace std;

int main() {
    cout << "Hello,Welcome to Rishab's Codding Classes" << endl;
    cout << "\nThis is the brochure";
    cout << "\nEstimate for codding Class " << endl;
    int number_of_classes=0;
    cout<<"\n# Enter the number of classes that you wish in a day #"<<endl;
    cin >> number_of_classes ;       
    cout << "Number of classes : " << number_of_classes << endl;
    cout << "Price per class: ₹50"<< endl;
    double cost = 50*number_of_classes;
    cout<<" Cost:₹= "<< cost <<endl;
    double Tax = 50*number_of_classes*0.10;
    cout << "Tax: ₹" << Tax << endl;
    cout << "============================================================" << endl;
    double Total = (50 * number_of_classes) + (50 * number_of_classes * 0.10) ;
    cout << "Total Estimate = ₹" << Total << endl ;

   
    return 0;
}

