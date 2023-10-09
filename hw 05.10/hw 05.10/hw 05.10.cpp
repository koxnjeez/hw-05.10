#include "settings.h"

void plus_one(int num) {
    static int s_num = 1;
    if (num >= 1) {
        if (s_num != num + 1) {
            cout << s_num << " ";
            s_num++;
            plus_one(num);
        }
        else {
            cout << "\n\n";
        }
    }
    else {
        cout << "\n\n";
    }
}

void numbering(static int n1, static int n2) {
    static int num = n1;
    if (n2 >= n1) {
        if (num != n2 + 1) {
            cout << num << " ";
            num++;
            numbering(n1, n2);
        }
        else {
            cout << "\n\n";
        }
    }
    if (n2 < n1) {
        if (num != n2 - 1) {
            cout << num << " ";
            num--;
            numbering(n1, n2);
        }
        else {
            cout << "\n\n";
        }
    }
}

void degree(static int num) {
    if (num > 0 && num != 1) {
        if (num % 2 == 0) {
            if (num == 2) {
                cout << "YES\n\n";
            }
            else {
                num /= 2;
                degree(num);
            }
        }
        else {
            cout << "NO\n\n";
        }
    }
    else if (num == 1) {
        cout << "YES\n\n";
    }
    else {
        cout << "NO\n\n";
    }
}

void sum(static int num) {
    static int summa = 0, first = 10, count = 0;
    summa += (num % first) / (first / 10);
    first *= 10;
    string str_num = to_string(num);
    int count_recurs = str_num.length();
    count += 1;
    if (count != count_recurs) {
        sum(num);
    }
    else {
        cout << summa<<"\n\n";
    }
}

void back(int num) {
    static int count = 0, first = 10;
    string str_num = to_string(num);
    int count_recurs = str_num.length();
    if (count != count_recurs) {
        cout << (num % first) / (first / 10) << " ";
        first *= 10;
        count++;
        back(num);
    }
    else {
        cout << "\n\n";
    }
}

void front(int num) {
    static int count = 0;
    string str_num = to_string(num);
    int count_recurs = str_num.length();
    if (count != count_recurs) {
        cout << str_num[count] << " ";
        count++;
        front(num);
    }
    else {
        cout << "\n\n";
    }
}
// 179

int main()
{
    // task1
    plus_one(10);

    // task2
    numbering(2, -5);
    
    // task3
    degree(64);
    
    // task4
    sum(879001);
    
    // task5
    back(42487);
    
    // task6
    front(42487);

    Sleep(INFINITE);
}