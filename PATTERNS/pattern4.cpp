#include<bits/stdc++.h>
using namespace std;
class Pattern {
public:
     void printTriangle(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
};

int main() {
    int size;
    cout << "Enter the size of the triangle: ";
    cin >> size;

    Pattern p;
    p.printTriangle(size);

    return 0;
}


















