#include <iostream>
using namespace std;
void swap(int *a, int *b) {
    int p = *a;
    *a = *b;
    *b = p;

}
int main(){
    int x =5;
    int y =6;

    cout << "Before swap: " << endl;
    cout << "x= " << x << " y= " << y << endl;
    swap(&x,&y);

    cout << "after swap: " << endl;
    cout << "x= " << x << " y= " << y << endl;
}
