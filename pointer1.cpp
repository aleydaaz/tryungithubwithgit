#include <iostream>
using namespace std;

/*int main() {
    int *p;
    float *q;
    char *r;
    int n = 10;

    cout << "Nilai n: " << n << endl;
    p = (int *) malloc(sizeof(int));
    cout << "Nilai alamat p: " << p << endl;
    return 0;
}

int main() {
    int *p, *q, *r; //pointer, jd klo mau liat alamatnya tinggal cout << p
    int n = 10; //kalo mau liat alamatnya tinggal cout << &n
    p = &n; //alamat dari pointer p = alamat dari n
    //n = *p
    *p = 5;

    cout << "Nilai n: " << n << endl;
    cout << "Nilai p: " << *p << endl;
    cout << "Nilai alamat p: " << p << endl;
    cout << "Nilai alamat n: " << &n << endl; 
    return 0;
}

int main() {
    int a = 20;
    int *i;  // Pointer i dideklarasikan tetapi tidak diinisialisasi

    cout << *i << endl;  // Kesalahan: Dereferencing pointer yang belum diinisialisasi
    cout << i << endl;   // Mencetak alamat acak (karena pointer belum diinisialisasi)
    cout << &a << endl;  // Mencetak alamat dari variabel a
    cout << a << endl;   // Mencetak nilai dari a
    cout << &i << endl;  // Mencetak alamat memori di mana pointer i disimpan

    return 0;
}

int main(){

    //int array[3] = {10, 20, 30};
    //cout << "Alamat array: " << array << endl;
    //cout << *(array + 1) << endl;

    int array[3] = {10, 20, 30};
    int i;
    int *k;

    k = array;
    for (i = 0; i < 3; i++){
        cout << *(k+i) << " ";
    }
}

int main () {
    char kota[11] = "Yogyakarta";
    cout << "Kota = " << kota << endl;
    char *j = kota;
    cout << "Alamat i(kota) = " << j << endl;
    cout << *j << endl;

    int i;
    for(i=0; i<10; i++){
        cout << *(j+i) << " ";
    }

    return 0;
}

void ganti(int *p) {
    *p = 50;
    cout << "Alamat di dalam ganti: " << p << endl;
}

void kuadrat(int *nilai) {  // Fungsi untuk mengkuadratkan nilai
    *nilai = (*nilai) * (*nilai);
}

int main() {
    int x = 10;
    cout << "Nilai awal x: " << x << endl;

    ganti(&x);
    cout << "Nilai x setelah ganti: " << x << endl;
    cout << "Alamat x di main: " << &x << endl;

    void (*functionpointer)(int *);  // Function pointer untuk kuadrat
    functionpointer = &kuadrat;  // Mengisi function pointer dengan alamat fungsi kuadrat
    functionpointer(&x);
    cout << "Nilai x setelah function pointer: " << x << endl;

    return 0;
}*/

int main(){
    int x = 20;
    int *i=&x;
    int **ii=&i;
    cout << **ii << endl;
    cout << "Alamat x: " << &x << endl;
    cout << "Alamat *i: " << &i << endl;
    cout << "Alamat **ii: " << &ii << endl;

    return 0;
}
