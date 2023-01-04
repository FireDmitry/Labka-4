// LABALATORNA 4
// Програма для визначення студента групи за порядком у списку.

#include <iostream>
using namespace std;

int main()
{
    int x, n = 1;

    while (n == 1)
    {
        string a[] = { "Abdullaiev Ruslan","Belkie Herman","Bodnar Mykhailo","Bodnarchuk Olekcandr","Vovk Oleksii","Hlavnenko Vladyslav ","Hordiievskyi Maksym","Grytsay Yevhenii","Hulevych Pavlo ","Zhuravel Oleksandr","Ivantsov Matias","Ishchuk Vladyslav","Kovalchuk Vasyl","Krasyliuk Ivan","Martynenko Anatolii","Novytskiy Vladislav","Olefir Oleksandr","Ostapenko Maksim","Pervinenko Vladyslav","Pokotylo Ivan","Rymar Oleksandr","Sevastianov Pavlo","Semko Andrii","Soietskiy Dmitrii","Filatov Maksim","Svets Vitaliy" };
        cout << "Enter the student number of the 2KI group from 1 to 26 inclusive: \n";
        cin >> x;
        if (x != 0 && x <= 26) {
            cout << a[x - 1];
            n = 0;
        }
        else
        {
            cout << "You may have made a mistake, do you want to try again? 1 - Yes, 0 - No\n";
            cin >> n;
            if (n != 0 && n != 1)
            {
                cout << "You are inadequate";
                exit(0);
            }
        }
    }
    return 0;
}