#include <iostream>

using namespace std;

int main() {
    // ปิดการ sync กับ stdio ของ C เพื่อเพิ่มความเร็วในการอ่าน/เขียนข้อมูลขนาดใหญ่
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long k; // ใช้ long long เพราะ k อาจมีค่าได้ถึง 10^9

    if (!(cin >> n >> k)) {
        return 0;
    }

    // จองหน่วยความจำบน Heap ตามขนาด n
    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // คำนวณจุดเริ่มต้นใหม่หลังจากการหมุน k ครั้ง
    int start = k % n;

    // พิมพ์สมาชิกทั้งหมดเริ่มจากตำแหน่ง start
    for (int i = 0; i < n; ++i) {
        int idx = (start + i) % n;
        cout << arr[idx] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    // คืนหน่วยความจำที่จองไว้ด้วย new[]
    delete[] arr;

    return 0;
}