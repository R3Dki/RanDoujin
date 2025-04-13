#define DEFAULT_LENGHT 6

#include <iostream>
using namespace std;

void DoujinCode(long len) {
    for (long i = 0; i < len; i++)
        cout << rand() % 9;
    puts(" ");
}

int main() {
    int lenght = DEFAULT_LENGHT, check = 0;
    system("title RanDoujin");
    cout << "RanDoujin: Random Doujinshi Code Generator\n\nSelect code lenght(0 for default(" << DEFAULT_LENGHT <<") ): ";
    cin >> check;
    if (check != 0) lenght = check;
    cout << "Select code generation mode(0 for single, 1 for batch): ";
    cin >> check;
    if (!check) {
        cout << "Generating...\nDoujinshi Code: ";
        srand(time(0));
        DoujinCode(lenght);
    } else if (check == 1) {
        cout << "Batch size: ";
        cin >> check;
        cout << "Generating " << check << " codes..." << endl;
        for (long i = 0; i < check; i++) {
            DoujinCode(lenght);
        }
        cout << "Done." << endl;
    } else {
        return 1;
    }
    return 0;
}
