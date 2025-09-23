////zadacha 1
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main() {
//     int size;
//     int a = -100,b = 100;
//     cout << "vvedite razmer massiva: \n";
//     cin >> size;
//     int array[size];
//     for (int i = 0; i < size; i++) {
//         array[i] = rand()%(b-a+1)+a;
//     }
//     cout << "vot massiv: \n";
//     for (int i = 0; i < size; i++) {
//         cout << array[i];
//         if (i < size - 1) cout << " ";
//     }
//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum += array[i];
//     }
//     int avg = sum/size;
//     cout << "\nsr znachenie massiva: \n" << avg;
// }


////zadacha 2
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main() {
//     int size;
//     cout << "vvedite razmer massiva: \n";
//     cin  >> size;
//     int array[size];
//     for (int i = 0; i < size; i++) {
//         array[i] = rand()%100;
//     }
//     cout << "vot massiv: \n";
//     for (int i =0; i < size; i++) {
//         cout << array[i] << " ";
//     }
//     int chet=0,nechet=0;
//     for (int i = 0; i < size; i++) {
//         if (array[i]%2==0) {
//             chet++;
//         }
//         else {
//             nechet++;
//         }
//     }
//     cout << "\nvot chetnie: \n" << chet;
//     cout << "\nvot nechetnie: \n" << nechet;
// }

////zadacha 3
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main() {
//     int size;
//     cout << "vvedite razmer massiva: \n";
//     cin  >> size;
//     int array[size];
//     for (int i = 0; i < size; i++) {
//         array[i] = rand()%100;
//     }
//     cout << "vot massiv: \n";
//     for (int i =0; i < size; i++) {
//         cout << array[i] << " ";
//     }
//     int max = 0, min = 10000;
//     for (int i = 0; i < size; i++) {
//         if (array[i] > max) {
//             max = array[i];
//         }
//         if (array[i] < min) {
//             min = array[i];
//         }
//     }
//     cout << endl << "maximalnoe: " << max;
//     cout << endl << "minimalnoe: " << min;
// }

////zadacha 4
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main() {
//     int n,m;
//     cout<<"vvedite n и m \n";
//     cin>>n>>m;
//     int arr[n][m];
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<m;j++) {
//             arr[i][j] = rand()%100;
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }


////zadacha 5
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main() {
//     int n,m;
//     cout<<"vvedite n и m \n";
//     cin>>n>>m;
//     int arr[n][m];
//     cout<<"vot massiv: \n";
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<m;j++) {
//             arr[i][j] = rand()%100;
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     int sum=0;
//     cout<<"summa: \n";
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<m;j++) {
//             sum+=arr[i][j];
//         }
//     }
//     cout << sum << endl;
// }


////zadacha 6
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main() {
//     int n;
//     cout<<"vvedite n \n";
//     cin>>n;
//     int arr[n][n];
//     cout<<"vot massiv: \n";
//     for(int i=0;i<n;i++) {
//         for(int j=0;j<n;j++) {
//             arr[i][j] = rand()%100;
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     int sum=0;
//     for(int i=0;i<n;i++) {
//             sum+=arr[i][i];
//     }
//     cout<<"summa glavnoy diagonali:\n";
//     cout<<sum<<endl;
// }