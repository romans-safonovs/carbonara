#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    if (argc == 1) {
        return 1;
    }
    int prev1 = 1;
    int prev2 = 0;
    int tmp;
    for (int i=0; i<stoi(argv[1]); i++) {
        if ((i == 0) || (i == 1)){
            cout << i << " ";
        }
        else {
            cout << prev1+prev2 << " ";
            tmp = prev1;
            prev1 = prev1+prev2;
            prev2 = tmp;
        }
    }
    cout << endl;
    return 0;
}
