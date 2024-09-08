
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
#include<conio.h>
#include<fstream>
#include<ostream>
#include <windows.h>
using namespace std;
void main_menu();
void continents();
void countryview();
void Asia();
void Europe();
void Africa();
void North_America();
void South_America();
void Australia();
void Antartica();
void March2020();
void April2020();
void May2020();
void June2020();
void July2020();
void August2020();
void September2020();
void October2020();
void November2020();
void December2020();
void January2021();
void February2021();
void March2021();
void National();
void International();
void Admin();
void Request();
void Covid_Record();
void Hospital_Information();
//int barl = 20;
void loadingBar()
{
    system("color 0D");

    char a = 177, b = 219;

    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t" " Loading...\n\n");
    printf("\t\t\t\t\t");

    for (int i = 0; i < 10; i++)
        printf("%c", a);

    printf("\r");
    printf("\t\t\t\t\t");

    for (int i = 0; i < 10; i++)
    {
        printf("%c", b);
        Sleep(1000);
    }
}

int main()
{
    cout<< "\n\t\t\t****************************************************************\n";
    cout<< "\n\t\t\t\t~~~~~~~~~~~~  Covid-19 information  ~~~~~~~~~~~~\n\t\t\t\t\t";
    cout<< "\n\t\t\t****************************************************************\n";

    system("color 50");

    loadingBar();
    main_menu();
}
void main_menu()
{

    system("cls");
    system("COLOR  40");
    int w;
    printf("\n\n\t\t\t ************************************************************\n");
    printf("\n\t\t\t\t\t\t 1.Continents\n");
    printf("\n\t\t\t\t\t\t 2.Countryview\n");
    printf("\n\n\t\t\t ************************************************************\n");
    printf("\n\t\t\t\t Enter your choice: ");
    scanf("%d",&w);
    switch(w)
    {
    case 1:
    {
        continents();
        fflush(stdin);
        getchar();
        break;
    }
    case 2:
    {
        countryview();
        fflush(stdin);
        getchar();
        break;
    }
    default:
    {
        printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
        fflush(stdin);
        getchar();
        main();
    }
    }
}

void continents()
{
    system ("cls");
    int p;
    system("COLOR  4F");
    cout << "\n\n\t\t\t**********CONTINENTS**********\n";
    cout << "\n\t\t\t\t 1.Asia\n";
    cout << "\n\t\t\t\t 2.Africa\n";
    cout << "\n\t\t\t\t 3.Europe\n";
    cout << "\n\t\t\t\t 4.North_America\n";
    cout << "\n\t\t\t\t 5.South_America\n";
    cout << "\n\t\t\t\t 6.Australia\n";
    cout << "\n\t\t\t\t 7.Antartica\n";
    cout << "\n\n\t\t------------------------------------------------------\n";
    cout << "\n\n\t\t\t 8.Back to Main menu:\n";
    cout << "\n\t\t\tEnter your choice: ";
    scanf("%d",&p);
    switch(p)
    {
    case 1:
    {
        Asia ();
        fflush(stdin);
        getchar();
        break;
    }
    case 2:
    {
        Africa ();
        fflush(stdin);
        getchar();
        break;
    }
    case 3:
    {
        Europe();
        fflush(stdin);
        getchar();
        Admin();
        break;
    }
    case 4:
    {
        North_America();
        fflush(stdin);
        getchar();
        break;
    }
    case 5:
    {
        South_America ();
        fflush(stdin);
        getchar();
        break;
    }
    case 6:
    {
        Australia();
        fflush(stdin);
        getchar();
        break;
    }

    case 7:
    {
        Antartica();
        fflush(stdin);
        getchar();
        break;
    }
    case 8:
    {
        main_menu();
        fflush(stdin);
        getchar();
        break;
    }
    default:
    {
        printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
        fflush(stdin);
        getchar();
        continents();
    }
    }
}
void Asia()
{
    system ("cls");
    system("color 60");
    int n;

    std :: string line_;
    ifstream file_("Asia.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();

    cout<< "\n\n\t\t\t\tBack to Main menu press 1: \n";
    cout<< "\t\t\t\tBack to Continents press 2: \n";
    cout<< "\t\t\t\tPress key: \n";
    scanf("%d", &n);
    switch(n)
    {
    case 1:
    {
        main_menu();
        fflush(stdin);
        getchar();
        break;
    }
    case 2:
    {
        continents();
        fflush(stdin);
        getchar();
        break;
    }
    default:
    {
        printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
        fflush(stdin);
        getchar();
        continents();
    }

    }
}
void Africa()
{
    system ("cls");
    system("COLOR  5F");
    int n;
    std :: string line_;
    ifstream file_("Africa.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();
    printf("\n\n\n\t\t\t\tBack to Main memu press 1: \n");
    printf("\t\t\t\tBack to Continents press 2: \n");
    cout<< "\t\t\t\tPress key: \n";

    scanf("%d", &n);
    switch(n)
    {
    case 1:
    {
        main_menu();
        fflush(stdin);
        getchar();
        break;
    }
    case 2:
    {
        continents();
        fflush(stdin);
        getchar();
        break;
    }
    default:
    {
        printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
        fflush(stdin);
        getchar();
        continents();
    }

    }
}
void Europe()
{
    system ("cls");
    system("COLOR  5F");
    int n;

    std :: string line_;
    ifstream file_("Europe.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();
    cout<< "\n\n\n\t\t\t\tBack to Main menu press 1: \n";
    cout<< "\t\t\t\tBack to Continents press 2: \n";
    cout<< "\t\t\t\tPress key: \n";

    scanf("%d", &n);
    switch(n)
    {
    case 1:
    {
        main_menu();
        fflush(stdin);
        getchar();
        break;
    }
    case 2:
    {
        continents();
        fflush(stdin);
        getchar();
        break;
    }
    default:
    {
        printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
        fflush(stdin);
        getchar();
        continents();
    }

    }
}
void North_America()
{
    system ("cls");
    system("COLOR  5F");
    int n;
    std :: string line_;
    ifstream file_("North_America.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();
    printf("\n\n\n\t\t\t\tBack to Main menu press 1: \n");
    printf("\t\t\t\tBack to Continents press 2: \n");
    cout<<"\t\t\t\tPress key: \n";

    scanf("%d", &n);
    switch(n)
    {
    case 1:
    {
        main_menu();
        fflush(stdin);
        getchar();
        break;
    }
    case 2:
    {
        continents();
        fflush(stdin);
        getchar();
        break;
    }
    default:
    {
        printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
        fflush(stdin);
        getchar();
        continents();
    }

    }
}
void South_America()
{
    system ("cls");
    system("COLOR  50");
    int n;
    std :: string line_;
    ifstream file_("South_America.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();
    cout<< "\n\n\n\t\t\t\tBack to Main menu press 1: \n";
    cout<< "\t\t\t\tBack to Continents press 2: \n";
    cout<< "\t\t\t\tPress key: \n";

    scanf("%d", &n);
    switch(n)
    {
    case 1:
    {
        main_menu();
        fflush(stdin);
        getchar();
        break;
    }
    case 2:
    {
        continents();
        fflush(stdin);
        getchar();
        break;
    }
    default:
    {
        printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
        fflush(stdin);
        getchar();
        continents();
    }


    }
}
void Australia()
{
    system ("cls");
    system("COLOR  5F");
    int n;
    std :: string line_;
    ifstream file_("Australia.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();
    cout<< "\n\n\n\t\t\t\tBack to Main menu press 1: \n";
    cout<< "\t\t\t\tBack to Continents press 2: \n";
    cout<< "\t\t\t\tPress key: \n";

    scanf("%d", &n);
    switch(n)
    {
    case 1:
    {
        main_menu();
        fflush(stdin);
        getchar();
        break;
    }
    case 2:
    {
        continents();
        fflush(stdin);
        getchar();
        break;
    }
    default:
    {
        printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
        fflush(stdin);
        getchar();
        continents();
    }

    }
}
void Antartica()
{
    system ("cls");
    system("COLOR  5F");
    int n;
    std :: string line_;
    ifstream file_("Antartica.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();
    cout<< "\n\n\n\t\t\t\tBack to Main menu press 1: \n";
    cout<< "\t\t\t\tBack to Continents press 2: \n";
    cout<< "\t\t\t\tPress key: \n";

    scanf("%d", &n);
    switch(n)
    {
    case 1:
    {
        main_menu();
        fflush(stdin);
        getchar();
        break;
    }
    case 2:
    {
        continents();
        fflush(stdin);
        getchar();
        break;
    }
    default:
    {
        printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
        fflush(stdin);
        getchar();
        continents();
    }


    }
}

void countryview()
{
    system ("cls");
    int s;
    system("COLOR  2F");
    cout<<"\n\t\t\t 1.National\n";
    cout<<"\n\t\t\t 2.International\n";
    cout<<"\n\t\t\t 3.Admin\n";
    cout<<"\n\t\t\t 4.Request\n\n";
    cout<<"\n\n\t\------------------------------------------------------\n";
    cout <<"\n\t\t\tEnter your choice: ";
    scanf("%d",&s);
    switch(s)
    {
    case 1:
    {
        National();
        fflush(stdin);
        getchar();
        break;
    }
    case 2:
    {
        International();
        fflush(stdin);
        getchar();
        break;
    }
    case 3:
    {

        fflush(stdin);
        getchar();
        Admin();
        break;
    }
    case 4:
    {

        fflush(stdin);
        getchar();
        Request();
        break;
    }
    default:
    {
        printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
        fflush(stdin);
        getchar();
        countryview();
    }
    }
}
void Admin()
{

    system("cls");
    system("color 20");
    string user,pass,uniq,u,p,s;
    cout<<"Enter your username : ";
    cin>>user;
    cout<<"Enter your password : ";
    cin>>pass;
    cout<<"Enter your unique code : ";
    cin>>uniq;
    ifstream input("database.txt");

    while(input>>u>>p>>s)
    {
        if(u == user && p == pass && s==uniq)
        {
            cout << "\n\t\t\t\t Your information is correct....";
            cout << "\n\t\t\t\t What you want change ??";
            cout << "\n\n\t\t\t\t\t 1. Hospital information.";
            cout << "\n\t\t\t\t\t 2.Covid Record.";
            cout << "\n\t\t\t\t\t 3.Back to Main menu: ";
            cout << "\n\t\t\t\t\t Enter Your Choice: ";
            int n;
            cin >> n;
            switch(n)
            {
            case 1:
            {
                Hospital_Information();
                fflush(stdin);
                getchar();
                break;
            }
            case 2:
            {
                Covid_Record();
                fflush(stdin);
                getchar();
                break;
            }
            case 3:
            {
                main_menu();
                fflush(stdin);
                getchar();
                break;
                default:
                {
                    printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
                    fflush(stdin);
                    getchar();
                }

            }
            }
        }
            else
            {
                cout<<"Sorry,Login error"<<endl;
            }

        }

    }

    void Request()
    {
        system("cls");
        int n;
        char data[10001];

        ofstream myfile;
        myfile.open("Request.txt", ios :: app);
        cout << "Writing to your information :-" << endl;
        cout << "Enter your name: ";
        cin.getline(data, 100);

        myfile << data << endl;

        cout << "\n\n\n\t\t\t\tBack to Main menu press 1: \n";
        cout << "\t\t\t\tBack to Continents press 2: \n";
        cout << "\t\t\t\tPress key: ";
        scanf("%d", &n);
        switch(n)
        {
        case 1:
        {
            main_menu();
            fflush(stdin);
            getchar();
            break;
        }
        case 2:
        {
            continents();
            fflush(stdin);
            getchar();
            break;
        }
        default:
        {
            printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
            fflush(stdin);
            getchar();
            continents();
        }
        }
    }
    void National()
    {
        system("cls");
        cout<< "\n\n\t\t\t ** What we want to see????\n";
        cout<< "\n\t\t\t\t 1.Hospital Information.\n";
        cout<< "\t\t\t\t 2.Covid Record.\n";
        cout<< "\n\t\t\t\tEnter your choice: ";
        int k;
        scanf("%d",&k);
        switch(k)
        {
        case 1:
        {
            Hospital_Information();
            fflush(stdin);
            getchar();
            break;
        }
        case 2:
        {
            Covid_Record();
            fflush(stdin);
            getchar();
            break;
        }

        default:
        {
            printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
            fflush(stdin);
            getchar();
            main();
            break;
        }

        }
    }
    void International()
    {
        system ("cls");
        system("color D0");
        int n;

        std :: string line_;
        ifstream file_("International.txt");
        while(getline(file_,line_))
        {
            std :: cout <<line_<<'\n';
        }
        file_.close();

        cout << "\n\n\n\t\t\t\tBack to Main menu press 1: \n";
        cout << "\t\t\t\tBack to Continents press 2: \n";
        cout << "\t\t\t\tPress key: ";
        scanf("%d", &n);
        switch(n)
        {
        case 1:
        {
            main_menu();
            fflush(stdin);
            getchar();
            break;
        }
        case 2:
        {
            continents();
            fflush(stdin);
            getchar();
            break;
        }
        default:
        {
            printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
            fflush(stdin);
            getchar();
            continents();
        }

        }

    }
    void  Hospital_Information()
    {
        system("cls");
        cout << "\n\n\t\t\tHospital Information:---"<<endl;
        cout<<endl;
        int n;
        FILE *fp;
        fp = fopen("Hospital_Information.TXT","r");

        char ch[1000001];
        while(fgets(ch,sizeof(ch),fp))
        {
            printf("%s",ch);
        }
        fclose(fp);
        printf("\n\n\nBack to Main menu press 1: \n");
        printf("Back to Continents press 2: \n");
        scanf("%d", &n);
        switch(n)
        {
        case 1:
        {
            main_menu();
            fflush(stdin);
            getchar();
            break;
        }
        case 2:
        {
            continents();
            fflush(stdin);
            getchar();
            break;
        }
        default:
        {
            printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
            fflush(stdin);
            getchar();
            continents();
        }

        }

    }

    void Covid_Record()
    {
        system ("cls");
        int choice;
        system("COLOR 5F");
        printf("\n\n\t\t**********Main Menu**********\n");
        printf("\n\n\t\t     1.March2020\n");
        printf("\t\t     2.April2020\n");
        printf("\t\t     3.May2020\n");
        printf("\t\t     4.June2020\n");
        printf("\t\t     5.July2020\n");
        printf("\t\t     6.August2020\n");
        printf("\t\t     7.September2020\n");
        printf("\t\t     8.October2020\n");
        printf("\t\t     9.November2020\n");
        printf("\t\t     10.December2020\n");
        printf("\t\t     11.January2021\n");
        printf("\t\t     12.February2021\n");
        printf("\t\t     13.March2021\n");
        printf("\t\t     14.Back to countryview\n");

        printf("\n\t\t Enter Your Choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
        {
            March2020();
            fflush(stdin);
            getchar();
            break;
        }
        case 2:
        {
            April2020();
            fflush(stdin);
            getchar();
            break;
        }
        case 3:
        {
            May2020();
            fflush(stdin);
            getchar();
            break;
        }
        case 4:
        {
            June2020();
            fflush(stdin);
            getchar();
            break;
        }
        case 5:
        {
            July2020();
            fflush(stdin);
            getchar();
            break;
        }
        case 6:
        {
            August2020();
            fflush(stdin);
            getchar();
            break;
        }
        case 7:
        {
            September2020();
            fflush(stdin);
            getchar();
            break;
        }
        case 8:
        {
            October2020();
            fflush(stdin);
            getchar();
            break;
        }
        case 9:
        {
            November2020();
            fflush(stdin);
            getchar();
            break;
        }
        case 10:
        {
            December2020();
            fflush(stdin);
            getchar();
            break;
        }
        case 11:
        {
            January2021();
            fflush(stdin);
            getchar();
            break;
        }
        case 12:
        {
            February2021();
            fflush(stdin);
            getchar();
            break;
        }
        case 13:
        {
            March2021();
            fflush(stdin);
            getchar();
            break;
        }
        case 14:
        {
            printf("Back to countryview press 14");
            countryview();
            fflush(stdin);
            getchar();
            break;
        }


        default:
        {
            printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
            fflush(stdin);
            getchar();
            main();
            break;
        }
        }
    }

    void March2020()
    {
        system ("cls");
        system("color 30");
        int n;

        std :: string line_;
        ifstream file_("March2020.txt");
        while(getline(file_,line_))
        {
            std :: cout <<line_<<'\n';
        }
        file_.close();

        cout<< "\n\n\n\t\t\t\tBack to month list press 1: \n";
        cout<< "\t\t\t\tBack to Countryview press 2: \n";
        cout<< "\t\t\t\tPress key: ";

        scanf("%d", &n);
        switch(n)
        {
        case 1:
        {
            Covid_Record();
            fflush(stdin);
            getchar();
            break;
        }
        case 2:
        {
            countryview();
            fflush(stdin);
            getchar();
            break;
        }
        default:
        {
            printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
            fflush(stdin);
            getchar();
            continents();
        }

        }

    }
    void April2020()
    {
        system ("cls");
        system("color 50");
        int n;

        std :: string line_;
        ifstream file_("April2020.txt");
        while(getline(file_,line_))
        {
            std :: cout <<line_<<'\n';
        }
        file_.close();

        cout<< "\n\n\n\t\t\t\tBack to month list press 1: \n";
        cout<< "\t\t\t\tBack to Countryview press 2: \n";
        cout<< "\t\t\t\tPress key: ";

        scanf("%d", &n);
        switch(n)
        {
        case 1:
        {
            Covid_Record();
            fflush(stdin);
            getchar();
            break;
        }
        case 2:
        {
            countryview();
            fflush(stdin);
            getchar();
            break;
        }
        default:
        {
            printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
            fflush(stdin);
            getchar();
            continents();
        }

        }

    }
    void May2020()
    {
        system ("cls");
        system("color 80");
        int n;

        std :: string line_;
        ifstream file_("May2020.txt");
        while(getline(file_,line_))
        {
            std :: cout <<line_<<'\n';
        }
        file_.close();

        cout<< "\n\n\n\t\t\t\tBack to month list press 1: \n";
        cout<< "\t\t\t\tBack to Countryview press 2: \n";
        cout<< "\t\t\t\tPress key: ";

        scanf("%d", &n);
        switch(n)
        {
        case 1:
        {
            Covid_Record();
            fflush(stdin);
            getchar();
            break;
        }
        case 2:
        {
            countryview();
            fflush(stdin);
            getchar();
            break;
        }
        default:
        {
            printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
            fflush(stdin);
            getchar();
            continents();
        }

        }

    }
    void June2020()
    {
        system ("cls");
        system("color C0");
        int n;

        std :: string line_;
        ifstream file_("June2020.txt");
        while(getline(file_,line_))
        {
            std :: cout <<line_<<'\n';
        }
        file_.close();

        cout<< "\n\n\n\t\t\t\tBack to month list press 1: \n";
        cout<< "\t\t\t\tBack to Countryview press 2: \n";
        cout<< "\t\t\t\tPress key: ";

        scanf("%d", &n);
        switch(n)
        {
        case 1:
        {
            Covid_Record();
            fflush(stdin);
            getchar();
            break;
        }
        case 2:
        {
            continents();
            fflush(stdin);
            getchar();
            break;
        }
        default:
        {
            printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
            fflush(stdin);
            getchar();
            continents();
        }

        }

    }
    void July2020()
    {
        system ("cls");
        system("color B0");
        int n;

        std :: string line_;
        ifstream file_("July2020.txt");
        while(getline(file_,line_))
        {
            std :: cout <<line_<<'\n';
        }
        file_.close();

        cout<<"\n\n\n\t\t\t\tBack to month list press 1: \n";
        cout<<"\t\t\t\tBack to Countryview press 2: \n";
        cout<< "\t\t\t\tPress key: ";

        scanf("%d", &n);
        switch(n)
        {
        case 1:
        {
            Covid_Record();
            fflush(stdin);
            getchar();
            break;
        }
        case 2:
        {
            countryview();
            fflush(stdin);
            getchar();
            break;
        }
        default:
        {
            printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
            fflush(stdin);
            getchar();
            continents();
        }

        }

    }
    void August2020()
    {
        system ("cls");
        system("color 30");
        int n;

        std :: string line_;
        ifstream file_("August2020.txt");
        while(getline(file_,line_))
        {
            std :: cout <<line_<<'\n';
        }
        file_.close();

        cout<< "\n\n\n\t\t\t\tBack to month list press 1: \n";
        cout<< "\t\t\t\tBack to Countryview press 2: \n";
        cout<< "\t\t\t\tPress key: ";

        scanf("%d", &n);
        switch(n)
        {
        case 1:
        {
            Covid_Record();
            fflush(stdin);
            getchar();
            break;
        }
        case 2:
        {
            countryview();
            fflush(stdin);
            getchar();
            break;
        }
        default:
        {
            printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
            fflush(stdin);
            getchar();
            continents();
        }

        }

    }
    void September2020()
    {
        system ("cls");
        system("color B0");
        int n;

        std :: string line_;
        ifstream file_("September2020.txt");
        while(getline(file_,line_))
        {
            std :: cout <<line_<<'\n';
        }
        file_.close();

        cout<< "\n\n\n\t\t\t\tBack to month list press 1: \n";
        cout<< "\t\t\t\tBack to cCountryview press 2: \n";
        cout<< "\t\t\t\tPress key: ";

        scanf("%d", &n);
        switch(n)
        {
        case 1:
        {
            Covid_Record();
            fflush(stdin);
            getchar();
            break;
        }
        case 2:
        {
            countryview();
            fflush(stdin);
            getchar();
            break;
        }
        default:
        {
            printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
            fflush(stdin);
            getchar();
            continents();
        }

        }


    }
    void October2020()
    {
        system ("cls");
        system("color 10");
        int n;

        std :: string line_;
        ifstream file_("October2020.txt");
        while(getline(file_,line_))
        {
            std :: cout <<line_<<'\n';
        }
        file_.close();

        cout<<"\n\n\n\t\t\t\tBack to month list press 1: \n";
        cout<<"\t\t\t\tBack to Countryview press 2: \n";
        cout<< "\t\t\t\tPress key: ";

        scanf("%d", &n);
        switch(n)
        {
        case 1:
        {
            Covid_Record();
            fflush(stdin);
            getchar();
            break;
        }
        case 2:
        {
            countryview();
            fflush(stdin);
            getchar();
            break;
        }
        default:
        {
            printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
            fflush(stdin);
            getchar();
            continents();
        }

        }

    }
    void November2020()
    {
        system ("cls");
        system("color 61");
        int n;

        std :: string line_;
        ifstream file_("November2020.txt");
        while(getline(file_,line_))
        {
            std :: cout <<line_<<'\n';
        }
        file_.close();

        cout<<"\n\n\n\t\t\t\tBack to month list press 1: \n";
        cout<<"\t\t\t\tBack to Countryview press 2: \n";
        cout<< "\t\t\t\tPress key: \n";

        scanf("%d", &n);
        switch(n)
        {
        case 1:
        {
            Covid_Record();
            fflush(stdin);
            getchar();
            break;
        }
        case 2:
        {
            countryview();
            fflush(stdin);
            getchar();
            break;
        }
        default:
        {
            printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
            fflush(stdin);
            getchar();
            continents();
        }

        }

    }
    void December2020()
    {
        system ("cls");
        system("color 0F");
        int n;

        std :: string line_;
        ifstream file_("December2020.txt");
        while(getline(file_,line_))
        {
            std :: cout <<line_<<'\n';
        }
        file_.close();

        cout<<"\n\n\n\t\t\t\tBack to month list press 1: \n";
        cout<<"\t\t\t\tBack to Countryview press 2: \n";
        cout<< "\t\t\t\tPress key: ";

        scanf("%d", &n);
        switch(n)
        {
        case 1:
        {
            Covid_Record();
            fflush(stdin);
            getchar();
            break;
        }
        case 2:
        {
            countryview();
            fflush(stdin);
            getchar();
            break;
        }
        default:
        {
            printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
            fflush(stdin);
            getchar();
            continents();
        }

        }

    }
    void January2021()
    {
        system ("cls");
        system("color 60");
        int n;

        std :: string line_;
        ifstream file_("January2021.txt");
        while(getline(file_,line_))
        {
            std :: cout <<line_<<'\n';
        }
        file_.close();

        cout<<"\n\n\n\t\t\t\tBack to month list press 1: \n";
        cout<<"\t\t\t\tBack to Countryview press 2: \n";
        cout<<"\t\t\t\tPress key: ";

        scanf("%d", &n);
        switch(n)
        {
        case 1:
        {
            Covid_Record();
            fflush(stdin);
            getchar();
            break;
        }
        case 2:
        {
            countryview();
            fflush(stdin);
            getchar();
            break;
        }
        default:
        {
            printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
            fflush(stdin);
            getchar();
            continents();
        }

        }


    }
    void February2021()
    {
        system ("cls");
        system("color 20");
        int n;

        std :: string line_;
        ifstream file_("February2021.txt");
        while(getline(file_,line_))
        {
            std :: cout <<line_<<'\n';
        }
        file_.close();

        cout<< "\n\n\n\t\t\t\tBack to month list press 1: \n";
        cout<< "\t\t\t\tBack to Countryview press 2: \n";
        cout<< "\t\t\t\tPress key: ";

        scanf("%d", &n);
        switch(n)
        {
        case 1:
        {
            Covid_Record();
            fflush(stdin);
            getchar();
            break;
        }
        case 2:
        {
            countryview();
            fflush(stdin);
            getchar();
            break;
        }
        default:
        {
            printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
            fflush(stdin);
            getchar();
            continents();
        }

        }


    }
    void March2021()
    {
        system ("cls");
        system("color 30");
        int n;

        std :: string line_;
        ifstream file_("March2021.txt");
        while(getline(file_,line_))
        {
            std :: cout <<line_<<'\n';
        }
        file_.close();

        cout<<"\n\n\n\t\t\t\tBack to month list press 1: \n";
        cout<<"\t\t\t\tBack to Countryview press 2: \n";
        cout<< "\t\t\t\tPress key: ";

        scanf("%d", &n);
        switch(n)
        {
        case 1:
        {
            Covid_Record();
            fflush(stdin);
            getchar();
            break;
        }
        case 2:
        {
            countryview();
            fflush(stdin);
            getchar();
            break;
        }
        default:
        {
            printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
            fflush(stdin);
            getchar();
            continents();
        }

        }

    }


