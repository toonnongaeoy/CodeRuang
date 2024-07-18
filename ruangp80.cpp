#include <iostream>
#include <climits>
using namespace std;

int main() {
    int x , i;

    cout << "==============================================" << endl;
    cout << "\t      Ranges of Character" << endl;
    cout << "==============================================" << endl;
    cout << "signed char    : " << CHAR_MIN << " to " << CHAR_MAX << endl;
    cout << "unsigned char  : 0 to " << UCHAR_MAX << endl;

    if (i == 0 , i <= UCHAR_MAX, i++) {
        cout << "==============================================" << endl;
        char c = 'A';
        cout << "Character : " << c << " ( " << int(c) << " ) " << endl;
        c = char(int(c + 1));
        cout << "Next Character : " << c << " ( " << int(c) << " ) " << endl;
        cout << "==============================================" << endl;
    }
    
    return 0;
}