#include <iostream>
using namespace std;

int main(){
    int array[5] = {30, 10, 20, 50, 40};
    int i;
    int *k;
    k = array;
    for (i = 0; i < 5; i++){
        cout << *(k+i) << " ";} 

    int max = *k;
    int min = *k;

    for(i = 0; i < 5; i++){
        if (*(k+i) > max){
            max = *(k+i);
        }
        if (*(k+i) < min){
            min = *(k+i);
        }
    }
    cout << "\nMax: " << max << endl;
    cout << "Min: " << min << endl;

    int sum = 0;
    for(i = 0; i < 5; i++){
        sum += *(k+i); // sum = sum + *(k+i);
    }
    int mean = sum / 5;
    cout << "Jumlah: " << sum << endl;
    cout << "Mean: " << mean << endl;

    return 0;

}