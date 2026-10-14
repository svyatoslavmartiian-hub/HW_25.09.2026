#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    //{
    //    const int size = 10;
    //    int arr[size] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    //    for (int i = 0;i < size;++i) {
    //        int randomNum = rand() % 100 + 1;
    //        arr[i] = randomNum;
    //    }
    //    int max_num = 0;
    //    int min_num = arr[0];
    //    for (int i = 0;i < size;++i) {
    //        cout << arr[i] << ' ';
    //    }

    //    for (int i = 0;i < size;++i) {
    //        if (arr[i] > max_num) {
    //            max_num = arr[i];
    //        }
    //        if (arr[i] < min_num) {
    //            min_num = arr[i];
    //        }
    //    }
    //    cout << "\nМаксимальний  елемент " << max_num;
    //    cout << "\nМінімальний елемент " << min_num;
    //}







    //{
    //    int const size = 12;
    //    int arr[size] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
    //    int num = 0;
    //    cout << "Ведіть прибуток за 1-й місяць: ";
    //    cin >> num;
    //    arr[0] = num;

    //    cout << "\nВедіть прибуток за 2-й місяць: ";
    //    cin >> num;
    //    arr[1] = num;

    //    cout << "\nВедіть прибуток за 3-й місяць: ";
    //    cin >> num;
    //    arr[2] = num;

    //    cout << "\nВедіть прибуток за 4-й місяць: ";
    //    cin >> num;
    //    arr[3] = num;

    //    cout << "\nВедіть прибуток за 5-й місяць: ";
    //    cin >> num;
    //    arr[4] = num;

    //    cout << "\nВедіть прибуток за 6-й місяць: ";
    //    cin >> num;
    //    arr[5] = num;

    //    cout << "\nВедіть прибуток за 7-й місяць: ";
    //    cin >> num;
    //    arr[6] = num;

    //    cout << "\nВедіть прибуток за 8-й місяць: ";
    //    cin >> num;
    //    arr[7] = num;

    //    cout << "\nВедіть прибуток за 9-й місяць: ";
    //    cin >> num;
    //    arr[8] = num;

    //    cout << "\nВедіть прибуток за 10-й місяць: ";
    //    cin >> num;
    //    arr[9] = num;

    //    cout << "\nВедіть прибуток за 11-й місяць: ";
    //    cin >> num;
    //    arr[10] = num;

    //    cout << "\nВедіть прибуток за 12-й місяць: ";
    //    cin >> num;
    //    arr[11] = num;

    //    int num1 = 0;
    //    int num2 = 0;
    //    cout << "\nВедіть першгу межу діапазона(від 1 до 12): ";
    //    cin >> num1;
    //    cout << "\nВедіть другу межу діапазона(від 1 до 12): ";
    //    cin >> num2;

    //    int temp = 0;
    //    if (num1 > num2) {
    //        temp = num2;
    //        num2 = num1;
    //        num1 = temp;
    //    }


    //    int max_num = arr[0];
    //    int min_num = arr[0];

    //    for (int i = num1; i < num2;++i) {
    //        if (arr[i] > max_num) {
    //            max_num = arr[i];
    //        }
    //        if (arr[i] < min_num) {
    //            min_num = arr[i];
    //        }
    //    }

    //    cout << "\n" << max_num << ' ' << min_num;    


    //}







    //{
    //    const int SIZE = 10;
    //    int arr[SIZE] = { 23, -10, 34, 4, 97, -39, 2, 32, 10, 110 };

    //    int sum = 0;
    //    int min_num = arr[0];
    //    int max_num = arr[0];
    //    int min_num_1 = 0, max_num_1 = 0;;

    //    for (int i = 0;i < SIZE;++i) {
    //        if (arr[i] < 0) {
    //            sum += arr[i];
    //        }
    //        if (arr[i] > max_num) {
    //            max_num = i;
    //        }
    //        if (arr[i] < min_num) {
    //            min_num = i;
    //        }
    //        if (arr[i] < 0) {
    //            max_num_1 = i;
    //        }

    //    }

    //    for (int i = 0;i < SIZE;++i) {
    //        if (arr[i] < 0) {
    //            min_num_1 = i;
    //            break;
    //        }
    //    }
    //    int sum_num_1 = 0;

    //    for (int i = min_num_1 + 1;i < max_num_1;++i) {
    //        sum_num_1 += arr[i];
    //    }

    //    int sum_num = 1;
    //    int suma = 1;

    //    for (int i = min_num + 1; i < max_num; ++i) {
    //        sum_num *= arr[i];
    //    }

    //    for (int i = 0; i < SIZE; ++i) {
    //        if (i % 2 == 0) {
    //            suma *= arr[i];
    //        }
    //    }
    //    


    //    



    //    cout << "Сума від'ємних чисел: " << sum << "\nДобуток між min і max елементами: " << sum_num << "\nДобуток елементів з парними номерами: " << suma << "\nСума між першим і останнім від'ємними елементами: " << sum_num_1;
    //}








    //{
    //    const int SIZE_10 = 10, SIZE_5 = 5;
    //    int arr[SIZE_10] = { 16, 15, -100, 2, 36, 10, 15, 0, - 23, 40 };
    //    int arr_5[SIZE_5] = { 0,1,2,3,4 };
    //    int arr_5_2[SIZE_5] = { 0,1,2,3,4 };

    //    for (int i = 0;i < SIZE_5;++i) {
    //        arr_5[i] = arr[i];

    //    }
    //    for (int i = 0;i < SIZE_5;++i) {
    //        arr_5_2[i] = arr[i+5];

    //    }

    //    for (int i = 0;i < SIZE_5;++i) {
    //        cout << arr_5[i] << ' ';

    //    }
    //    cout << "\n";
    //    for (int i = 0;i < SIZE_5;++i) {
    //        cout << arr_5_2[i] << ' ';

    //    }


    //    
    //}






    //{
    //    const int SIZE_5 = 5;
    //    int arr[SIZE_5] = { 10, 15, 0, -23, 40 };
    //    int arr_5[SIZE_5] = { 6, 0, -100, 25, -4 };
    //    int arr_5_2[SIZE_5] = { 0,1,2,3,4 };

    //    for (int i = 0;i < SIZE_5;++i) {
    //        arr_5_2[i] = arr[i] + arr_5[i];
    //    }

    //    for (int i = 0;i < SIZE_5;++i) {
    //        cout << arr_5_2[i] << ' ';
    //    }
    //
    //}
}

