#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice, qty;
    float price, total, discount = 0.0, finalBill;

    cout << "----------- MENU -----------" << endl;
    cout << "1. Bread   - Rs. 100" << endl;
    cout << "2. Milk    - Rs. 150" << endl;
    cout << "3. Eggs    - Rs. 200" << endl;
    cout << "4. Juice   - Rs. 300" << endl;
    cout << "-----------------------------" << endl;

    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Enter quantity: ";
    cin >> qty;

    // Determine item and price using switch
    string item;
    switch (choice) {
        case 1: item = "Bread"; price = 100; break;
        case 2: item = "Milk"; price = 150; break;
        case 3: item = "Eggs"; price = 200; break;
        case 4: item = "Juice"; price = 300; break;
        default:
            cout << "Invalid choice!" << endl;
            return 0;
    }

    // Calculate totals
    total = price * qty;
    if (total > 1000)
        discount = total * 0.10;   // 10% discount

    finalBill = total - discount;

    // Display Receipt
     
    cout << "\n----------- SHOP RECEIPT -----------\n";
    cout << setw(12) << "Item"
         << setw(8) << "Qty"
         << setw(10) << "Price"
         << setw(10) << "Total" << endl;
    cout << "------------------------------------" << endl;

    cout << setw(12) << item
         << setw(8) << qty
         << setw(10) << price
         << setw(10) << total << endl;

    cout << "------------------------------------" << endl;
    if (discount > 0)
        cout << setw(20) << "Discount (10%)"
             << "-" << discount << endl;

    cout << left << setw(20) << "Final Bill" <<setw(20) << finalBill << endl;
    cout << "------------------------------------" << endl;
    cout << "Thank You for Shopping!" << endl;
    return 0;
}
