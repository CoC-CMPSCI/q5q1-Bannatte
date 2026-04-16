#include <iostream>
using namespace std;

int main()
{
    int n;
    // TODO: ask user for input
    cin >> n;

    char letter;
    // TODO: outer loop for each row
    for (int i=1; i<=n; i++){
        // TODO: inner loop to print letters for this row
        for (int j=1; j<=i; j++){
            // TODO: print the letter for this column
            letter = 64 + j;
            cout << letter << " ";
        }
        // TODO: print newline after each row
        cout << "\n";
    }
    return 0;
}
