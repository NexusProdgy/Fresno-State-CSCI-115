#include<iostream>   
using namespace std;
/*void printFibonacciREC(int n) {
    static int n1 = 0, n2 = 1, n3;
    if (n > 0) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3 << " ";
        printFibonacciREC(n - 1);
    }
}
int main() {
    int n;
    clock_t start, end;
    cout << "Enter the number of elements: ";
    cin >> n;
    start = clock();
    cout << "Fibonacci Series: ";
    cout << "0 " << "1 ";
    printFibonacciREC(n - 2); 
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed << time_taken ;
    cout << " sec " << endl;
    return 0;
}*/
void fibIT(int num) {
    
    
    int x = 0, y = 1, z = 0;
    for (int i = 0; i < num; i++) {
        cout << x << " ";
        z = x + y;
        x = y;
        y = z;
        
    }
}
int main() {
    int num;
    clock_t start, end;
    cout << "Enter the number : ";
    cin >> num;
    start = clock();
    cout << "\nThe fibonacci series : ";
    fibIT(num);
    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed << time_taken;
    cout << " sec " << endl;
    return 0;
}