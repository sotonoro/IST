#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << n << endl;
    for (int i = 0; i < n; i++) {
        cout << fixed << setprecision(3) << arr[i] << " ";
    }
    cout << endl;

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    arr.push_back(sum);
    arr.push_back(sum / n);

    for (int i = 0; i < arr.size(); i++) {
        cout << fixed << setprecision(3) << arr[i] << " ";
    }
    cout << endl;
    
    double max_value = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0) {
            arr[i] = max_value;
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        cout << fixed << setprecision(3) << arr[i] << " ";
    }
    cout << endl;

    int choice;
    cin >> choice;

    while (choice != 0) {
        if (choice == 1) {
            double newElement;
      
            cin >> newElement;
            arr.push_back(newElement);
            cout << "+: " << arr.size() << endl;
        }
        else if (choice == 2) {
            if (!arr.empty()) {
                arr.pop_back();
                cout << "-: " << arr.size() << endl;
            }
            else {
                //cout << "Массив пустой, невозможно удалить элемент." << endl;
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            cout << fixed << setprecision(3) << arr[i] << " ";
        }
        cout << endl;

        sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
        }
        arr.push_back(sum);
        arr.push_back(sum / (arr.size()-1));

        for (int i = 0; i < arr.size(); i++) {
            cout << fixed << setprecision(3) << arr[i] << " ";
        }
        cout << endl;

        max_value = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > max_value) {
                max_value = arr[i];
            }
        }
    
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > 0) {
                arr[i] = max_value;
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            cout << fixed << setprecision(3) << arr[i] << " ";
        }
        cout << endl;
        cin >> choice;
    }

    return 0;
}