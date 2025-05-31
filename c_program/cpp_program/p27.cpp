#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> digitCount(10, 0);
    int temp = n;

    // Count the frequency of each digit
    while (temp > 0) 
    {
        digitCount[temp % 10]++;
        temp /= 10;
    }
    bool isAutobiographical = true;
    temp = n;
    int index = 0;
    // Check if the number is autobiographical
    while (temp > 0){
        if (digitCount[index] != temp % 10) {
            isAutobiographical = false;
            break;
        }
        temp /= 10;
        index++;
    }

    if (isAutobiographical) {
        cout << n << " is an autobiographical number." << endl;
    } else {
        cout << n << " is not an autobiographical number." << endl;
    }

    return 0;
}