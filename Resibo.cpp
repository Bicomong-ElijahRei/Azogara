#include <iostream>
#include <string>
using namespace std;

int main() {

    int productCodes[] = {1001, 1002, 1003, 1004, 1005};
    string productDescriptions[] = {"Egg", "Piattos", "Royal", "Hansel", "Combi"};
    int productPrices[] = {8, 20, 11, 9, 13};
    int productCode, quantity;
    char orderAgain;
    int totalCost = 0;
    int orderedProductCodes[10];
    int orderedQuantities[10];
    int orderedSubtotals[10];
    int itemCount = 0;

    do {
        cout << "Product Code          Product Description           Price " << endl;
        for (int i = 0; i < 5; ++i) {
            cout << "   " << productCodes[i] << "                    " << productDescriptions[i] << "                    " << productPrices[i] << endl;
        }

        cout << "Enter product code: ";
        while (!(cin >> productCode)) {
            cout << "Invalid input. Please enter a number for the product code: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        int index = -1;
        for (int i = 0; i < 5; ++i) {
            if (productCode == productCodes[i]) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            cout << "Invalid product code. Please try again." << endl;
            continue;
        }

        cout << "Enter quantity: ";
        while (!(cin >> quantity) || quantity <= 0) {
            cout << "Invalid input. Please enter a positive integer for the quantity: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        int subtotal = productPrices[index] * quantity;

        totalCost += subtotal;

        orderedProductCodes[itemCount] = productCode;
        orderedQuantities[itemCount] = quantity;
        orderedSubtotals[itemCount] = subtotal;
        itemCount++;

        cout << "Do you want to order again? (y/n): ";
        cin >> orderAgain;

    } while (orderAgain == 'y' || orderAgain == 'Y');

    cout << "\nOrder Receipt\n";
    cout << "Product Description    Quantity    Subtotal\n";
    for (int i = 0; i < itemCount; ++i) {
        cout << productDescriptions[i] << "                    " << orderedQuantities[i] << "                    " << orderedSubtotals[i] << endl;
    }

    cout << "Total Cost: " << totalCost << endl;

    int money;
    cout << "Enter the amount of money: ";
    while (!(cin >> money) || money < totalCost) {
        cout << "Invalid input. Please enter an amount greater than or equal to the total cost: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int change = money - totalCost;
    cout << "Change: " << change << endl;

    return 0;
}