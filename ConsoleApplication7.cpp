#include <iostream>
#include <string>
using namespace std;

template <typename T>
T findMin(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    cout << "Мінімум серед 3 і 7: " << findMin(3, 7) << endl;
    cout << "Мінімум серед 4.5 і 2.3: " << findMin(4.5, 2.3) << endl;
    cout << "Мінімум серед 'apple' і 'banana': " << findMin(string("apple"), string("banana")) << endl;
    return 0;
}
#include <iostream>
using namespace std;

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swapValues(x, y);
    cout << "Після обміну: x = " << x << ", y = " << y << endl;

    double d1 = 1.5, d2 = 2.5;
    swapValues(d1, d2);
    cout << "Після обміну: d1 = " << d1 << ", d2 = " << d2 << endl;
    return 0;
}
#include <iostream>
using namespace std;

template <typename T>
T sumArray(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr1[] = { 1, 2, 3, 4, 5 };
    cout << "Сума масиву цілих: " << sumArray(arr1, 5) << endl;

    double arr2[] = { 1.1, 2.2, 3.3, 4.4 };
    cout << "Сума масиву дійсних: " << sumArray(arr2, 4) << endl;

    return 0;
}
#include <iostream>
using namespace std;

template <typename T>
T findMax(T arr[], int size) {
    T maxElem = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElem) {
            maxElem = arr[i];
        }
    }
    return maxElem;
}

int main() {
    int arr1[] = { 1, 5, 3, 9, 2 };
    cout << "Максимум у масиві цілих: " << findMax(arr1, 5) << endl;

    double arr2[] = { 1.1, 3.3, 2.2, 4.4 };
    cout << "Максимум у масиві дійсних: " << findMax(arr2, 4) << endl;

    return 0;
}
#include <iostream>
using namespace std;

template <typename T>
T findMinOfThree(T a, T b, T c) {
    return findMin(findMin(a, b), c);
}

int main() {
    cout << "Мінімум серед 3, 7 і 5: " << findMinOfThree(3, 7, 5) << endl;
    cout << "Мінімум серед 4.5, 2.3 і 3.1: " << findMinOfThree(4.5, 2.3, 3.1) << endl;
    return 0;
}
#include <iostream>
using namespace std;

template <typename T>
T power(T base, int exp) {
    T result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    cout << "2^5 = " << power(2, 5) << endl;
    cout << "3.5^3 = " << power(3.5, 3) << endl;
    return 0;
}
#include <iostream>
using namespace std;

template <typename T>
T averageArray(T arr[], int size) {
    T sum = sumArray(arr, size);
    return sum / size;
}

int main() {
    int arr1[] = { 1, 2, 3, 4, 5 };
    cout << "Середнє масиву цілих: " << averageArray(arr1, 5) << endl;

    double arr2[] = { 1.1, 2.2, 3.3, 4.4 };
    cout << "Середнє масиву дійсних: " << averageArray(arr2, 4) << endl;

    return 0;
}
#include <iostream>
using namespace std;

template <typename T>
int countElements(T arr[], int size) {
    return size;
}

int main() {
    int arr1[] = { 1, 2, 3, 4, 5 };
    cout << "Кількість елементів у масиві цілих: " << countElements(arr1, 5) << endl;

    double arr2[] = { 1.1, 2.2, 3.3, 4.4 };
    cout << "Кількість елементів у масиві дійсних: " << countElements(arr2, 4) << endl;

    return 0;
}
#include <iostream>
using namespace std;

template <typename T>
void swapElements(T arr[], int i, int j) {
    T temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main() {
    int arr1[] = { 1, 2, 3, 4, 5 };
    swapElements(arr1, 0, 4);
    cout << "Масив після перестановки: ";
    for (int i : arr1) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
using namespace std;

template <typename T>
int findIndex(T arr[], int size, T value) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr1[] = { 1, 2, 3, 4, 5 };
    cout << "Індекс числа 3: " << findIndex(arr1, 5, 3) << endl;

    double arr2[] = { 1.1, 2.2, 3.3, 4.4 };
    cout << "Індекс числа 2.2: " << findIndex(arr2, 4, 2.2) << endl;

    return 0;
}
