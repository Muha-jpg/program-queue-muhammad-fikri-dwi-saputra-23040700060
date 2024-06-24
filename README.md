Program ini  adalah implementasi dari sebuah antrian (queue) menggunakan array di dalam kelas Queue. Berikut penjelasan mengenai komponen-komponennya:

Konstanta dan Namespace:


#define MAX 100
using namespace std;
#define MAX 100 menetapkan ukuran maksimum array items sebagai 100.
using namespace std; digunakan agar tidak perlu menuliskan std:: sebelum menggunakan fungsi dari pustaka standar C++.
Deklarasi Kelas Queue:

Queue memiliki atribut private items[MAX], front, dan rear.
front dan rear digunakan untuk melacak elemen pertama dan terakhir dalam antrian.
Konstruktor Queue:


Queue() {
    front = -1;
    rear = -1;
}
Menginisialisasi front dan rear ke -1, menunjukkan bahwa antrian kosong.
Fungsi isFull:


bool isFull() {
    return (rear == MAX - 1);
}
Memeriksa apakah antrian penuh dengan membandingkan rear dengan MAX - 1.
Fungsi isEmpty:


bool isEmpty() {
    return (front == -1 || front > rear);
}
Memeriksa apakah antrian kosong.
Fungsi enqueue:


void enqueue(int element) {
    if (isFull()) {
        cout << "Queue is full" << endl;
    } else {
        if (front == -1) front = 0;
        items[++rear] = element;
        cout << "Inserted " << element << endl;
    }
}
Menambahkan elemen ke antrian jika tidak penuh, dan menampilkan pesan elemen berhasil ditambahkan.
Fungsi dequeue:


void dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Removed " << items[front++] << endl;
        if (front > rear) {
            front = rear = -1;
        }
    }
}
Menghapus elemen dari antrian jika tidak kosong, dan menampilkan pesan elemen berhasil dihapus.
Fungsi display:


void display() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << items[i] << " ";
        }
        cout << endl;
    }
}
Menampilkan semua elemen dalam antrian jika tidak kosong.
Fungsi main:


int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}
Membuat objek Queue dan menambahkan tiga elemen (10, 20, 30).
Menampilkan antrian setelah penambahan elemen, kemudian menghapus satu elemen, dan menampilkan antrian lagi setelah penghapusan elemen.
