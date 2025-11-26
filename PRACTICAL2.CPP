// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class trainrecords
{
private:
    int train_no;
    string train_name;
    string train_source;
    string train_destination;
    string train_time;

    static int train_count;

public:
    static void print()
    {
        cout << "Total Trains Added: " << train_count << endl;
    }

    trainrecords()
    {
        train_no = 0;
        train_name = "none";
        train_source = "none";
        train_destination = "none";
        train_time = "none";
    }

    trainrecords(int i, string n, string s, string d, string t)
    {
        train_no = i;
        train_name = n;
        train_source = s;
        train_destination = d;
        train_time = t;
        train_count++;
    }

    void setdetail(int i, string n, string s, string d, string t)
    {
        train_no = i;
        train_name = n;
        train_source = s;
        train_destination = d;
        train_time = t;
        train_count++;     
    }

    void showtraindetails()
    {
        cout << " train_no: " << train_no << endl;
        cout << " train_name: " << train_name << endl;
        cout << " source: " << train_source << endl;
        cout << " destination: " << train_destination << endl;
        cout << " time: " << train_time << endl;
        cout << "-----------------------------------" << endl;
    }

    int getno()
    {
        return train_no;
    }

    void inputtraindeatails()
    {
        cout << "Enter train no: ";
        cin >> train_no;
        cout << "Enter train name: ";
        cin >> train_name;
        cout << "Enter train source: ";
        cin >> train_source;
        cout << "Enter train destination: ";
        cin >> train_destination;
        cout << "Enter train time: ";
        cin >> train_time;
        train_count++;
    }

    void display()
    {
        showtraindetails();
    }
};

int trainrecords::train_count = 0;

int main()
{
    int searchno, flag, choiceno;
    trainrecords t;

    cout << "--- Railway Reservation System ---" << endl;
    cout << "1. Add new train record" << endl;
    cout << "2. Display all train records" << endl;
    cout << "3. Search train by number" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter Your Choice: ";
    cin >> choiceno;

    if (choiceno == 1)
    {
        t.inputtraindeatails();
        t.display();
        trainrecords::print();
    }

    if (choiceno == 2)
    {
        trainrecords t[5];

        t[0].setdetail(1, "shanti_express", "modasa", "indore", "08:10 pm");
        t[1].setdetail(2, "sabarmati_express", "modasa", "ahmedabad", "09:25 pm");
        t[2].setdetail(3, "bullet_express", "modasa", "udaipur", "11:15 pm");
        t[3].setdetail(4, "kanpur_express", "modasa", "kanpur", "12:30 pm");
        t[4].setdetail(5, "himachal_express", "modasa", "manali", "07:45 am");

        for (int j = 0; j < 5; j++)
        {
            t[j].showtraindetails();
        }

        trainrecords::print();
    }

    if (choiceno == 3)
    {
        cout << "Enter train number: ";
        cin >> searchno;
        flag = 0;

        trainrecords t[5] = {
            trainrecords(10961, "shanti_express", "modasa", "indore", "08:10 pm"),
            trainrecords(10962, "sabarmati_express", "modasa", "ahmedabad", "09:25 pm"),
            trainrecords(10963, "bullet_express", "modasa", "udaipur", "11:15 pm"),
            trainrecords(10964, "kanpur_express", "modasa", "kanpur", "12:30 pm"),
            trainrecords(10965, "himachal_express", "modasa", "manali", "07:45 am")};

        for (int i = 0; i < 5; i++)
        {
            if (t[i].getno() == searchno)
            {
                cout << "Train Found!" << endl;
                t[i].showtraindetails();
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "Train number not found!" << endl;
        }
    }

    if (choiceno == 4)
    {
        cout << "Exiting the system. Goodbye!" << endl;
    }

    return 0;
}