#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
#include<conio.h>
#include<fstream>
#include<ostream>
#include <windows.h>
#include<bits/stdc++.h>
using namespace std;
void main_menu();
void show();
void change();
void rtrn();
void admin2();
void request2();
void Admin();
void color();
void Covid_Record();
void admin_Covid_Record();
void rtrn();
void countryview();
void continents();
void rtrnmenu();
void Asia();
void Europe();
void Africa();
void North_America();
void South_America();
void Oceania();
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
void April2021();
void May2021();
void June2021();
void March_2020();
void April_2020();
void May_2020();
void June_2020();
void July_2020();
void August_2020();
void September_2020();
void October_2020();
void November_2020();
void December_2020();
void January_2021();
void February_2021();
void March_2021();
void April_2021();
void May_2021();
void June_2021();
void National();
void International();
void Hospital_Information();
void Request();
void variants_list();
void Instraction();
int main();
int P=1;
void loadingBar()
{
    system("color 30");

    char a = 177, b = 219;

    printf("\n\n\n\t\t\t\t");
    printf("\n\n\n\n\n\t\t\t\t\t\t\t" " Loading...\n\n");
    printf("\t\t\t\t\t\t\t");

    for (int i = 0; i < 12; i++)
    {
        printf("%c", a);
    }


    printf("\r");
    printf("\t\t\t\t\t\t\t");

    for (int i = 0; i < 12; i++)
    {
        printf("%c", b);
        Sleep(150);
    }
}
void rtrnmenu()
{
    int n;
    cout<< "\n\n\t\t\t\t\tBack to Main menu press 1: \n\n";
    cout<< "\t\t\t\t\tBack to Continents press 2: \n\n";
    cout<< "\t\t\t\t\tPress key: ";
    cin>>n;

    switch(n)
    {
    case 1:
    {
        main_menu();
        break;
    }
    case 2:
    {
        continents();
        break;
    }
    default:
    {
        printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
        system("pause");
        continents();
    }

    }
}

void main_menu()
{

    system("cls");
    system("COLOR  C0");
    int w;
    cout<<"\n\n\n\n\t\t\t\t\t\t    ==================="<<endl;
    cout<<"\t\t\t\t\t\t    ||   Main menu   ||"<<endl;
    cout<<"\t\t\t\t\t\t    ==================="<<endl;
    cout<<"\n\t\t\t\t ************************************************************\n";
    cout<<"\n\t\t\t\t\t\t 1.Record of Continents\n";
    cout<<"\n\t\t\t\t\t\t 2.Record of Countryview\n";
    cout<<"\n\t\t\t\t\t\t 3.COVID-19 variants list\n";
    cout<<"\n\t\t\t\t\t\t 4.Admin Panel\n";
    cout<<"\n\t\t\t\t\t\t 5.Suggestion Panel\n";
    cout<<"\n\t\t\t\t ************************************************************\n";
    cout<<"\n\t\t\t\t\t\t Enter your choice : ";
    scanf("%d",&w);
    switch(w)
    {
    case 1:
    {
        continents();
        break;
    }
    case 2:
    {
        countryview();
        break;
    }
    case 3:
    {
        variants_list();
        break;
    }
    case 4:
    {
        Admin();
        break;
    }
    case 5:
    {
        Request();
        break;
    }
    default :
    {
        main_menu();
        break;
    }

    }
}

void variants_list()
{

    system ("cls");
    system("COLOR  5F");
    int n;
    std :: string line_;
    ifstream file_("E:\\kona\\project\\Final\\COVID_Variants.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();
    cout<< "\n\t\t\t\t\t\t ____________________________________\n";
    cout<< "\t\t\t\t\t\t|   Press enter to back Main menu    |\n";
    cout<< "\t\t\t\t\t\t|____________________________________|\n";
    fflush(stdin);
    getchar();
    main_menu();
}

void show()
{
    int n;
    cin >> n;
    switch(n)
    {
    case 0:
    {
        exit(0);
        break;
    }
    case 1:
    {
        admin_Covid_Record();
        break;
    }
    case 2:
    {
        main_menu();
        break;
    }
    default:
    {
        printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
        show();
    }
    }
}
void change()
{
    system("cls");
    system("color 0D");
    cout << "\n\n\n\n\t\t\t\t\t   ****** Change Panel ******\n";
    cout << "\n\t\t\t\t\t\t 1.Covid Record.\n";
    cout << "\n\t\t\t\t\t\t 2.Back to Main menu.\n";
    cout << "\n\t\t\t\t\t\t 0.Log Out !!.\n";
    cout << "\n\n\n\n\n\t\t\t\t\t Enter Your Choice: ";
    show();
}
void admin2()
{
    system("cls");
    int n;
    string a,b,c;
    cout<<"\n\n\n\n\n\t\t\t\t\t\tPress (1) to go notification."<<endl;
    cout<<"\n\t\t\t\t\t\tPress (2) for change data."<<endl;
    cout<<"\n\t\t\t\t\t\tEnter Choice : ";
    cin>>n;
    switch(n)
    {
    case 1:
    {
        system("cls");
        fstream myfile("Request.txt");
        cout<<"\n\n\t\t\t\t\t\t------------Notification------------"<<endl;
        cout<<"\n\n\n";
        while(myfile>>a>>b>>c)
        {
            cout<<"\t\t\t\t-----------------------------------------------------------------"<<endl;
            cout<<"\t\t\t\t!\t"<<a<<setw(15)<<"\t!"<<setw(10)<<b<<setw(4)<<"\t!"<<setw(10)<<c<<setw(6)<<"\t!"<<endl;

        }
        cout<<"\t\t\t\t-----------------------------------------------------------------"<<endl;
        myfile.close();
        cout<<"\n\n\n\n\n\t\t\t\t\t\tPress enter to go back !!";
        fflush(stdin);
        getchar();
        admin2();
    }
    case 2:
    {
        system("cls");
        change();
    }
    default:
    {
        cout<<"Wrong input. Please enter again!!"<<endl;
        system("pause");
        system("cls");
        admin2();

    }
    }
}
void Admin()
{
    system("cls");

    system("color 20");
    string u,p,s;
    char user[10],ch;
    int i;
    cout<<"\n\n\t\t\t\t\t     ==================="<<endl;
    cout<<"\t\t\t\t\t     ||  Admin Panel  ||"<<endl;
    cout<<"\t\t\t\t\t     ==================="<<endl;
    cout<<"\n\n\t\t\t\t\tEnter your username    : ";
    cin>>user;
    char pass[10],pa;
    int j;
    cout<<"\t\t\t\t\tEnter your password    : ";
    for(j = 0; j < 100; j++)
    {
        pa = getch();
        if(pa == 13)
            break;
        pass[j] = pa;
        pa = '*' ;
        printf("%c", pa);
    }
    pass[j] = '\0';
    cout<<"\n\t\t\t\t\tEnter your unique code : ";
    char uniq[10],un;
    int k;
    for(k = 0; k < 100; k++)
    {
        un = getch();
        if(un == 13)
            break;
        uniq[k] = un;
        un = '*' ;
        printf("%c", un);
    }
    uniq[k] = '\0';
    cout << endl;
    ifstream input("database.txt");
    while(input>>u>>p>>s)
    {
        if(u == user && p == pass && s==uniq)
        {
            cout << "\n\n\t\t\t\t\tYour information is correct...."<<endl;
            cout << endl;
            cout << endl;
            system("pause");
            admin2();
            break;
        }

        else
        {
            if(P==3)
            {
                exit(0);
            }
            printf("\n\n\t\t\t\t\tWrong Password %d to 3",P);
            cout<<"\n\n\t\t\t\t\tTry aging............"<<endl;
            P++;
            cout<<endl;
            cout<<endl;
            system("pause");
            Admin();
        }

    }
}
void Request()
{
    system("cls");
    system("COLOR  E0");
    char month[1000], data[10001], type[10001];

    ofstream myfile;
    myfile.open("Request.txt",ios :: app);
    cout << "\n\n\n\n\t\t\t\t\t********** Write your information **********";
    cout<< "\n\n\t\t\t\t\t\t Use this format :-";
    cout<< "\n\n\t\t\t\t\t\t _______________________________________";
    cout<< "\n\t\t\t\t\t\t |month name | monthname-year.           |";
    cout<< "\n\t\t\t\t\t\t |___________|___________________________|";
    cout<< "\n\t\t\t\t\t\t |type name  | infected/deaths/recover.  |";
    cout<< "\n\t\t\t\t\t\t |___________|___________________________|";
    cout<< "\n\t\t\t\t\t\t |data       | amount of number.         |";
    cout<< "\n\t\t\t\t\t\t |___________|___________________________|";
    cout << "\n\n\n\t\t\t\t\t\t Enter month name : ";
    cin>>month;
    myfile<<month<<endl;
    cout<<"\n\n\t\t\t\t\t\t Enter type name : ";
    cin>>type;
    myfile<<type<<endl;
    cout<<"\n\n\t\t\t\t\t\t Enter data : ";
    cin>>data;
    myfile<<data<<endl;
    system("cls");
    myfile.close();

    cout<<"\n\n\n\n\n\n\t\t\t\t\tThank you,Our administration will review it !!"<<endl;
    system("pause");
    request2();

}
void request2()
{
    system("cls");
    int n;
    cout << "\n\n\n\n\t\t\t\tBack to Main menu press 1: \n";
    cout << "\n\t\t\t\tBack to Continents press 2: \n";
    cout << "\n\t\t\t\tExit press 0: \n";

    cout << "\n\t\t\t\tPress key: ";
    scanf("%d", &n);
    switch(n)
    {
    case 1:
    {
        system("cls");
        main_menu();
        fflush(stdin);
        getchar();
    }
    case 2:
    {
        system("cls");
        continents();
        fflush(stdin);
        getchar();
    }
    case 0:
    {
        exit(0);
        break;
    }
   default :
    {
        printf("\n\n\n\n\t\t\t\t\t Your choice is wrong! Try again.....\n");
        fflush(stdin);
        getchar();
        system("cls");
        request2();
    }
    }

}

void continents()
{
    system ("cls");
    int p;
    system("COLOR  B0");
    cout << "\n\n\n\t\t\t\t\t****************CONTINENTS****************\n\n\n";
    cout << "\n\t\t\t\t\t\t 1.Asia\n";
    cout << "\n\t\t\t\t\t\t 2.Africa\n";
    cout << "\n\t\t\t\t\t\t 3.Europe\n";
    cout << "\n\t\t\t\t\t\t 4.North_America\n";
    cout << "\n\t\t\t\t\t\t 5.South_America\n";
    cout << "\n\t\t\t\t\t\t 6.Oceania\n";
    //cout << "\n\n\t\t\t\t----------------------------------------------------------\n";
    cout << "\n\t\t\t\t\t\t 7.Back to Main menu:\n";
    cout << "\n\t\t\t\t\t\t Exit press 0: \n";

    cout << "\n\t\t\t\t\t\tEnter your choice: ";
    scanf("%d",&p);
    switch(p)
    {
    case 0:
    {
        exit(0);
        break;
    }
    case 1:
    {
        Asia ();
        break;
    }
    case 2:
    {
        Africa ();
        break;

    }
    case 3:
    {
        Europe();
        break;

    }
    case 4:
    {
        North_America();
        break;

    }
    case 5:
    {
        South_America ();
        break;

    }
    case 6:
    {
        Oceania();
        break;

    }
    case 7:
    {
        main_menu();
        break;

    }
    default:
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tYou enter wrong input.");
        printf("\n\n\t\t\t\t\t You will go continents part !!\n\n\n");
        fflush(stdin);
        getchar();
        continents();
    }
    }
}
void Asia()
{
    system ("cls");
    system("color 20");
    int n;

    std :: string line_;
    ifstream file_("E:\3rd Semester\Project work");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();
    rtrnmenu();
}
void Africa()
{
    system ("cls");
    system("COLOR  5F");
    int n;
    std :: string line_;
    ifstream file_("E:\\kona\\project\\Final\\Continent\\Africa.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();
    rtrnmenu();

}
void Europe()
{
    system ("cls");
    system("COLOR  30");
    int n;

    std :: string line_;
    ifstream file_("E:\\kona\\project\\Final\\Continent\\Europe.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();
    rtrnmenu();

}
void North_America()
{
    system ("cls");
    system("COLOR  A0");
    int n;
    std :: string line_;
    ifstream file_("E:\\kona\\project\\Final\\Continent\\North_America.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();
    rtrnmenu();

}
void South_America()
{
    system ("cls");
    system("COLOR  30");
    int n;
    std :: string line_;
    ifstream file_("E:\\kona\\project\\Final\\Continent\\South_America.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();
    rtrnmenu();

}

void Oceania()
{
    system ("cls");
    system("COLOR  5F");
    int n;
    std :: string line_;
    ifstream file_("E:\\kona\\project\\Final\\Continent\\Oceania.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();
    rtrnmenu();

}

void countryview()
{
    system ("cls");
    int s;
    system("COLOR  2F");
    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t============"<<endl;
    cout<<"\t\t\t\t\t\t\t| Category |"<<endl;
    cout<<"\t\t\t\t\t\t\t============"<<endl;
    cout<<"\t\t\t\t----------------------------------------------------------\n";
    cout<<"\n\t\t\t\t\t\t\t 1.National\n";
    cout<<"\n\t\t\t\t\t\t\t 2.International\n";
    cout<<"\n\t\t\t\t\t\t\t 3.Back to Main menu\n";
    cout<<"\n\t\t\t\t\t\t\t Exit press 0: ";
    cout<<"\n\n\t\t\t\t----------------------------------------------------------\n";
    cout <<"\n\t\t\t\t\t\t\tEnter your choice: ";
    scanf("%d",&s);
    system("cls");
    switch(s)
    {
    case 0:
    {
        exit(0);
    }
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
        countryview();
    }
    }
}
void National()
{
    system("cls");
    cout<< "\n\n\t\t\t\t\t       ................................\n";
    cout<< "\t\t\t\t\t       |  National Information Panel  | \n";
    cout<< "\t\t\t\t\t       ................................\n";
    cout<< "\n\n\n\n\t\t\t\t\t   ***** What you want to see???? *****\n\n";
    cout<< "\t\t\t\t\t\t____________________________\n";
    cout<< "\t\t\t\t\t\t| 1 | Hospital Information. |\n";
    cout<< "\t\t\t\t\t\t|___|_______________________|\n";
    cout<< "\t\t\t\t\t\t| 2 | Covid Record.         |\n";
    cout<< "\t\t\t\t\t\t|___|_______________________|\n";
    cout<< "\t\t\t\t\t\t| 3 | Back to Catagory.     |\n";
    cout<< "\t\t\t\t\t\t|___|_______________________|\n";
    cout<< "\t\t\t\t\t\t| 4 | Back to Main menu.    |\n";
    cout<< "\t\t\t\t\t\t|___|_______________________|\n";
    cout<< "\t\t\t\t\t\t|       Exit press 0.       |\n";
    cout<< "\t\t\t\t\t\t|___________________________|\n";
    cout<< "\n\n\t\t\t\t\tEnter your choice: ";
    int k;
    scanf("%d",&k);
    switch(k)
    {
    case 0:
    {
        exit(0);
        break;
    }
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
        countryview();
    }
    case 4:
    {
        main_menu();
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
    ifstream file_("E:\\kona\\project\\Final\\Countryview\\International.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();

    cout << "\n\n\n\t\t\t\tBack to Main menu press 1: \n";
    cout << "\t\t\t\tBack to Category press 2: \n";
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

void  Hospital_Information()
{
    system ("cls");
    system("COLOR  5F");
    int n;
    FILE *fp;
    fp = fopen("E:\\kona\\project\\Final\\Countryview\\Hospital_Information.txt","r");

    char ch[1000001];
    while(fgets(ch,sizeof(ch),fp))
    {
        printf("%s",ch);
    }
    fclose(fp);
    cout<<"\n\t\t\t\t\t\tBack to National information panel press 1: \n";
    cout<<"\n\t\t\t\t\t\tGo to Catagory press 2: \n";
    cout<<"\n\t\t\t\t\t\tEnter Choice : ";
    scanf("%d", &n);
    switch(n)
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
void Covid_Record()
{
    int x=1;
    system ("cls");
    int choice;
    system("COLOR 5F");
    cout<< "\n\n\t\t\t\t\t\t        **********Month Name**********\n";
    cout<< "\t\t\t\t\t\t __________________________________________\n";
    cout<< "\t\t\t\t\t\t| 1  |     March2020                       |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________________|\n";
    cout<< "\t\t\t\t\t\t| 2  |     April2020                       |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________________|\n";
    cout<< "\t\t\t\t\t\t| 3  |     May2020                         |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________________|\n";
    cout<< "\t\t\t\t\t\t| 4  |     June2020                        |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________________|\n";
    cout<< "\t\t\t\t\t\t| 5  |     July2020                        |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________________|\n";
    cout<< "\t\t\t\t\t\t| 6  |     August2020                      |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________________|\n";
    cout<< "\t\t\t\t\t\t| 7  |     September2020                   |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________________|\n";
    cout<< "\t\t\t\t\t\t| 8  |     October2020                     |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________________|\n";
    cout<< "\t\t\t\t\t\t| 9  |     November2020                    |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________________|\n";
    cout<< "\t\t\t\t\t\t| 10 |     December2020                    |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________________|\n";
    cout<< "\t\t\t\t\t\t| 11 |     January2021                     |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________________|\n";
    cout<< "\t\t\t\t\t\t| 12 |     February2021                    |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________________|\n";
    cout<< "\t\t\t\t\t\t| 13 |     March2021                       |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________________|\n";
    cout<< "\t\t\t\t\t\t| 14 |     April2021                       |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________________|\n";
    cout<< "\t\t\t\t\t\t| 15 |     May2021                         |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________________|\n";
    cout<< "\t\t\t\t\t\t| 16 |     June2021                        |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________________|\n";
    cout<< "\t\t\t\t\t\t| 17 |Back to National information panel   |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________________|\n";
    cout<< "\t\t\t\t\t\t|             Exit press 0.                |\n";
    cout<< "\t\t\t\t\t\t|__________________________________________|\n";

    printf("\n\t\t\t\t\t\t Enter Your Choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 0:
    {
        exit(0);
        break;

    }
    case 1:
    {
        March2020();
        break;

    }
    case 2:
    {
        April2020();
        break;
    }
    case 3:
    {
        May2020();
        break;


    }
    case 4:
    {
        June2020();
        break;

    }
    case 5:
    {
        July2020();
        break;

    }
    case 6:
    {
        August2020();
        break;

    }
    case 7:
    {
        September2020();
        break;

    }
    case 8:
    {
        October2020();
        break;

    }
    case 9:
    {
        November2020();
        break;

    }
    case 10:
    {
        December2020();
        break;

    }
    case 11:
    {
        January2021();
        break;
    }
    case 12:
    {
        February2021();
        break;
    }
    case 13:
    {
        March2021();
        break;
    }
    case 14:
    {
        April2021();
        break;

    }
    case 15:
    {
        May2021();
        break;

    }
    case 16:
    {
        June2021();
        break;

    }
    case 17:
    {
        National();
        break;
    }


    default:
    {
        printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
        fflush(stdin);
        getchar();
        system("cls");
        Covid_Record();
        break;
    }
    }
}

void admin_Covid_Record()
{
    int x=0;
    system ("cls");
    int choice;
    system("COLOR 5F");
    cout<<"\n\n\t\t\t\t\t\t\t====================\n";
    cout<<"\t\t\t\t\t\t\t||   Admin Panel  ||\n";
    cout<<"\t\t\t\t\t\t\t====================\n";
    cout<< "\n\n\t\t\t\t\t          **********Month List**********\n";
    cout<< "\n\t\t\t\t\t\t __________________________________\n";
    cout<< "\t\t\t\t\t\t| 1  |     March2020               |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________|\n";
    cout<< "\t\t\t\t\t\t| 2  |     April2020               |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________|\n";
    cout<< "\t\t\t\t\t\t| 3  |     May2020                 |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________|\n";
    cout<< "\t\t\t\t\t\t| 4  |     June2020                |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________|\n";
    cout<< "\t\t\t\t\t\t| 5  |     July2020                |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________|\n";
    cout<< "\t\t\t\t\t\t| 6  |     August2020              |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________|\n";
    cout<< "\t\t\t\t\t\t| 7  |     September2020           |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________|\n";
    cout<< "\t\t\t\t\t\t| 8  |     October2020             |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________|\n";
    cout<< "\t\t\t\t\t\t| 9  |     November2020            |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________|\n";
    cout<< "\t\t\t\t\t\t| 10 |     December2020            |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________|\n";
    cout<< "\t\t\t\t\t\t| 11 |     January2021             |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________|\n";
    cout<< "\t\t\t\t\t\t| 12 |     February2021            |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________|\n";
    cout<< "\t\t\t\t\t\t| 13 |     March2021               |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________|\n";
    cout<< "\t\t\t\t\t\t| 14 |     April2021               |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________|\n";
    cout<< "\t\t\t\t\t\t| 15 |     May2021                 |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________|\n";
    cout<< "\t\t\t\t\t\t| 16 |     June2021                |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________|\n";
    cout<< "\t\t\t\t\t\t| 17 |     Back to Change panel    |\n";
    cout<< "\t\t\t\t\t\t|____|_____________________________|\n";
    cout<< "\t\t\t\t\t\t|        Exit press 0.             |\n";
    cout<< "\t\t\t\t\t\t|__________________________________|\n";
    cout<<"\n\t\t\t\t\t\t Enter Your Choice: ";
    scanf("%d", &choice);
    switch(choice)
    {
    case 0:
    {
        exit(0);
        break;
    }
    case 1:
    {
        March_2020();
        break;
    }
    case 2:
    {
        April_2020();
        break;
    }
    case 3:
    {
        May_2020();
        break;
    }
    case 4:
    {
        June_2020();
        break;
    }
    case 5:
    {
        July_2020();
        break;
    }
    case 6:
    {
        August_2020();
        break;
    }
    case 7:
    {
        September_2020();
        break;
    }
    case 8:
    {
        October_2020();
        break;
    }
    case 9:
    {
        November_2020();
        break;
    }
    case 10:
    {
        December_2020();
        break;

    }
    case 11:
    {
        January_2021();
        break;

    }
    case 12:
    {
        February_2021();
        break;
    }
    case 13:
    {
        March_2021();
        break;
    }
    case 14:
    {
        April_2021();
        break;

    }
    case 15:
    {
        May_2021();
        break;

    }
    case 16:
    {
        June_2021();
        break;

    }

    case 17:
    {
        system("cls");
        change();
        break;
    }
    default:
    {
        printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
        fflush(stdin);
        getchar();
        system("cls");
        admin_Covid_Record();
        break;
    }
    }
}

void March_2020()
{
    system("cls");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\kona\\project\\Final\\Countryview\\March2020.txt",ios::in);
    getline(file,line1);
    getline(file,line2);
    getline(file,line3);
    getline(file,line4);
    getline(file,line5);
    getline(file,line6);
    getline(file,line7);
    getline(file,line8);
    getline(file,line9);
    getline(file,line10);
    getline(file,line11);
    file.close();
    cout<<"\t"<<line1<<endl<<"\t"<<line2<<endl<<"\t"<<line3<<endl<<"\t"<<line4<<endl<<"\t"<<line5<<endl<<"\t"<<line6<<endl<<"\t"<<line7<<endl<<"\t"<<line8<<endl<<"\t"<<line9<<endl<<"\t"<<line10<<endl<<"\t"<<line11<<endl;
    cout<<"\tEnter the line you want to change: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\t";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\t";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\t";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\kona\\project\\Final\\Countryview\\March2020.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\kona\\project\\Final\\Countryview\\March2020.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t ____________________________________\n";
    cout<< "\t\t\t\t\t\t|   Press enter to back month list   |\n";
    cout<< "\t\t\t\t\t\t|____________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();

}
void April_2020()
{
    system("cls");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\kona\\project\\Final\\Countryview\\April2020.txt",ios::in);
    getline(file,line1);
    getline(file,line2);
    getline(file,line3);
    getline(file,line4);
    getline(file,line5);
    getline(file,line6);
    getline(file,line7);
    getline(file,line8);
    getline(file,line9);
    getline(file,line10);
    getline(file,line11);
    file.close();
    cout<<"\t"<<line1<<endl<<"\t"<<line2<<endl<<"\t"<<line3<<endl<<"\t"<<line4<<endl<<"\t"<<line5<<endl<<"\t"<<line6<<endl<<"\t"<<line7<<endl<<"\t"<<line8<<endl<<"\t"<<line9<<endl<<"\t"<<line10<<endl<<"\t"<<line11<<endl;
    cout<<"\tEnter the line you want to change: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\t";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\t";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\t";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\kona\\project\\Final\\Countryview\\April2020.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\kona\\project\\Final\\Countryview\\April2020.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t ____________________________________\n";
    cout<< "\t\t\t\t\t\t|   Press enter to back month list   |\n";
    cout<< "\t\t\t\t\t\t|____________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void May_2020()
{
    system("cls");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\kona\\project\\Final\\Countryview\\May2020.txt",ios::in);
    getline(file,line1);
    getline(file,line2);
    getline(file,line3);
    getline(file,line4);
    getline(file,line5);
    getline(file,line6);
    getline(file,line7);
    getline(file,line8);
    getline(file,line9);
    getline(file,line10);
    getline(file,line11);
    file.close();
    cout<<"\t"<<line1<<endl<<"\t"<<line2<<endl<<"\t"<<line3<<endl<<"\t"<<line4<<endl<<"\t"<<line5<<endl<<"\t"<<line6<<endl<<"\t"<<line7<<endl<<"\t"<<line8<<endl<<"\t"<<line9<<endl<<"\t"<<line10<<endl<<"\t"<<line11<<endl;
    cout<<"\tEnter the line you want to change: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\t";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\t";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\t";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\kona\\project\\Final\\Countryview\\May2020.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\kona\\project\\Final\\Countryview\\May2020.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t ____________________________________\n";
    cout<< "\t\t\t\t\t\t|   Press enter to back month list   |\n";
    cout<< "\t\t\t\t\t\t|____________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();

}
void June_2020()
{
    system("cls");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\kona\\project\\Final\\Countryview\\June2020.txt",ios::in);
    getline(file,line1);
    getline(file,line2);
    getline(file,line3);
    getline(file,line4);
    getline(file,line5);
    getline(file,line6);
    getline(file,line7);
    getline(file,line8);
    getline(file,line9);
    getline(file,line10);
    getline(file,line11);
    file.close();
    cout<<"\t"<<line1<<endl<<"\t"<<line2<<endl<<"\t"<<line3<<endl<<"\t"<<line4<<endl<<"\t"<<line5<<endl<<"\t"<<line6<<endl<<"\t"<<line7<<endl<<"\t"<<line8<<endl<<"\t"<<line9<<endl<<"\t"<<line10<<endl<<"\t"<<line11<<endl;
    cout<<"\tEnter the line you want to change: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\t";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\t";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\t";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\kona\\project\\Final\\Countryview\\June2020.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\kona\\project\\Final\\Countryview\\June2020.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t ____________________________________\n";
    cout<< "\t\t\t\t\t\t|   Press enter to back month list   |\n";
    cout<< "\t\t\t\t\t\t|____________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();

}
void July_2020()
{
    system("cls");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\kona\\project\\Final\\Countryview\\July2020.txt",ios::in);
    getline(file,line1);
    getline(file,line2);
    getline(file,line3);
    getline(file,line4);
    getline(file,line5);
    getline(file,line6);
    getline(file,line7);
    getline(file,line8);
    getline(file,line9);
    getline(file,line10);
    getline(file,line11);
    file.close();
    cout<<"\t"<<line1<<endl<<"\t"<<line2<<endl<<"\t"<<line3<<endl<<"\t"<<line4<<endl<<"\t"<<line5<<endl<<"\t"<<line6<<endl<<"\t"<<line7<<endl<<"\t"<<line8<<endl<<"\t"<<line9<<endl<<"\t"<<line10<<endl<<"\t"<<line11<<endl;
    cout<<"\tEnter the line you want to change: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\t";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\t";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\t";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\kona\\project\\Final\\Countryview\\July2020.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\kona\\project\\Final\\Countryview\\July2020.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t ____________________________________\n";
    cout<< "\t\t\t\t\t\t|   Press enter to back month list   |\n";
    cout<< "\t\t\t\t\t\t|____________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();

}
void August_2020()
{
    system("cls");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\kona\\project\\Final\\Countryview\\August2020.txt",ios::in);
    getline(file,line1);
    getline(file,line2);
    getline(file,line3);
    getline(file,line4);
    getline(file,line5);
    getline(file,line6);
    getline(file,line7);
    getline(file,line8);
    getline(file,line9);
    getline(file,line10);
    getline(file,line11);
    file.close();
    cout<<"\t"<<line1<<endl<<"\t"<<line2<<endl<<"\t"<<line3<<endl<<"\t"<<line4<<endl<<"\t"<<line5<<endl<<"\t"<<line6<<endl<<"\t"<<line7<<endl<<"\t"<<line8<<endl<<"\t"<<line9<<endl<<"\t"<<line10<<endl<<"\t"<<line11<<endl;
    cout<<"\tEnter the line you want to change: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\t";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\t";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\t";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\kona\\project\\Final\\Countryview\\August2020.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\kona\\project\\Final\\Countryview\\August2020.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t ____________________________________\n";
    cout<< "\t\t\t\t\t\t|   Press enter to back month list   |\n";
    cout<< "\t\t\t\t\t\t|____________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();

}
void September_2020()
{
    system("cls");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\kona\\project\\Final\\Countryview\\September2020.txt",ios::in);
    getline(file,line1);
    getline(file,line2);
    getline(file,line3);
    getline(file,line4);
    getline(file,line5);
    getline(file,line6);
    getline(file,line7);
    getline(file,line8);
    getline(file,line9);
    getline(file,line10);
    getline(file,line11);
    file.close();
    cout<<"\t"<<line1<<endl<<"\t"<<line2<<endl<<"\t"<<line3<<endl<<"\t"<<line4<<endl<<"\t"<<line5<<endl<<"\t"<<line6<<endl<<"\t"<<line7<<endl<<"\t"<<line8<<endl<<"\t"<<line9<<endl<<"\t"<<line10<<endl<<"\t"<<line11<<endl;
    cout<<"\tEnter the line you want to change: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<<"\t";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<<"\t";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<<"\t";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\kona\\project\\Final\\Countryview\\September2020.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\kona\\project\\Final\\Countryview\\September2020.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t ____________________________________\n";
    cout<< "\t\t\t\t\t\t|   Press enter to back month list   |\n";
    cout<< "\t\t\t\t\t\t|____________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void October_2020()
{
    system("cls");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\kona\\project\\Final\\Countryview\\October2020.txt",ios::in);
    getline(file,line1);
    getline(file,line2);
    getline(file,line3);
    getline(file,line4);
    getline(file,line5);
    getline(file,line6);
    getline(file,line7);
    getline(file,line8);
    getline(file,line9);
    getline(file,line10);
    getline(file,line11);
    file.close();
    cout<<"\t"<<line1<<endl<<"\t"<<line2<<endl<<"\t"<<line3<<endl<<"\t"<<line4<<endl<<"\t"<<line5<<endl<<"\t"<<line6<<endl<<"\t"<<line7<<endl<<"\t"<<line8<<endl<<"\t"<<line9<<endl<<"\t"<<line10<<endl<<"\t"<<line11<<endl;
    cout<<"\tEnter the line you want to change: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\t";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\t";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\t";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\kona\\project\\Final\\Countryview\\October2020.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\kona\\project\\Final\\Countryview\\October2020.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t ____________________________________\n";
    cout<< "\t\t\t\t\t\t|   Press enter to back month list   |\n";
    cout<< "\t\t\t\t\t\t|____________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void November_2020()
{
    system("cls");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\kona\\project\\Final\\Countryview\\November2020.txt",ios::in);
    getline(file,line1);
    getline(file,line2);
    getline(file,line3);
    getline(file,line4);
    getline(file,line5);
    getline(file,line6);
    getline(file,line7);
    getline(file,line8);
    getline(file,line9);
    getline(file,line10);
    getline(file,line11);
    file.close();
    cout<<"\t"<<line1<<endl<<"\t"<<line2<<endl<<"\t"<<line3<<endl<<"\t"<<line4<<endl<<"\t"<<line5<<endl<<"\t"<<line6<<endl<<"\t"<<line7<<endl<<"\t"<<line8<<endl<<"\t"<<line9<<endl<<"\t"<<line10<<endl<<"\t"<<line11<<endl;
    cout<<"\tEnter the line you want to change: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\t";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\t";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\t";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\kona\\project\\Final\\Countryview\\November2020.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\kona\\project\\Final\\Countryview\\November2020.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t ____________________________________\n";
    cout<< "\t\t\t\t\t\t|   Press enter to back month list   |\n";
    cout<< "\t\t\t\t\t\t|____________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void December_2020()
{
    system("cls");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\kona\\project\\Final\\Countryview\\December2020.txt",ios::in);
    getline(file,line1);
    getline(file,line2);
    getline(file,line3);
    getline(file,line4);
    getline(file,line5);
    getline(file,line6);
    getline(file,line7);
    getline(file,line8);
    getline(file,line9);
    getline(file,line10);
    getline(file,line11);
    file.close();
    cout<<"\t"<<line1<<endl<<"\t"<<line2<<endl<<"\t"<<line3<<endl<<"\t"<<line4<<endl<<"\t"<<line5<<endl<<"\t"<<line6<<endl<<"\t"<<line7<<endl<<"\t"<<line8<<endl<<"\t"<<line9<<endl<<"\t"<<line10<<endl<<"\t"<<line11<<endl;
    cout<<"\tEnter the line you want to change: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<<"\t";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<<"\t";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<<"\t";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\kona\\project\\Final\\Countryview\\December2020.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\kona\\project\\Final\\Countryview\\December2020.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t ____________________________________\n";
    cout<< "\t\t\t\t\t\t|   Press enter to back month list   |\n";
    cout<< "\t\t\t\t\t\t|____________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void January_2021()
{
    system("cls");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\kona\\project\\Final\\Countryview\\January2021.txt",ios::in);
    getline(file,line1);
    getline(file,line2);
    getline(file,line3);
    getline(file,line4);
    getline(file,line5);
    getline(file,line6);
    getline(file,line7);
    getline(file,line8);
    getline(file,line9);
    getline(file,line10);
    getline(file,line11);
    file.close();
    cout<<"\t"<<line1<<endl<<"\t"<<line2<<endl<<"\t"<<line3<<endl<<"\t"<<line4<<endl<<"\t"<<line5<<endl<<"\t"<<line6<<endl<<"\t"<<line7<<endl<<"\t"<<line8<<endl<<"\t"<<line9<<endl<<"\t"<<line10<<endl<<"\t"<<line11<<endl;
    cout<<"\tEnter the line you want to change: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<<"\t";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<<"\t";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<<"\t";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\kona\\project\\Final\\Countryview\\January2021.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\kona\\project\\Final\\Countryview\\January2021.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t ____________________________________\n";
    cout<< "\t\t\t\t\t\t|   Press enter to back month list   |\n";
    cout<< "\t\t\t\t\t\t|____________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void February_2021()
{
    system("cls");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\kona\\project\\Final\\Countryview\\February2021.txt",ios::in);
    getline(file,line1);
    getline(file,line2);
    getline(file,line3);
    getline(file,line4);
    getline(file,line5);
    getline(file,line6);
    getline(file,line7);
    getline(file,line8);
    getline(file,line9);
    getline(file,line10);
    getline(file,line11);
    file.close();
    cout<<"\t"<<line1<<endl<<"\t"<<line2<<endl<<"\t"<<line3<<endl<<"\t"<<line4<<endl<<"\t"<<line5<<endl<<"\t"<<line6<<endl<<"\t"<<line7<<endl<<"\t"<<line8<<endl<<"\t"<<line9<<endl<<"\t"<<line10<<endl<<"\t"<<line11<<endl;
    cout<<"\tEnter the line you want to change: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<<"\t";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<<"\t";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<<"\t";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\kona\\project\\Final\\Countryview\\February2021.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\kona\\project\\Final\\Countryview\\February2021.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t ____________________________________\n";
    cout<< "\t\t\t\t\t\t|   Press enter to back month list   |\n";
    cout<< "\t\t\t\t\t\t|____________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void March_2021()
{
    system("cls");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\kona\\project\\Final\\Countryview\\March2021.txt",ios::in);
    getline(file,line1);
    getline(file,line2);
    getline(file,line3);
    getline(file,line4);
    getline(file,line5);
    getline(file,line6);
    getline(file,line7);
    getline(file,line8);
    getline(file,line9);
    getline(file,line10);
    getline(file,line11);
    file.close();
    cout<<"\t"<<line1<<endl<<"\t"<<line2<<endl<<"\t"<<line3<<endl<<"\t"<<line4<<endl<<"\t"<<line5<<endl<<"\t"<<line6<<endl<<"\t"<<line7<<endl<<"\t"<<line8<<endl<<"\t"<<line9<<endl<<"\t"<<line10<<endl<<"\t"<<line11<<endl;
    cout<<"\tEnter the line you want to change: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\t";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\t";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\t";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\kona\\project\\Final\\Countryview\\March2021.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\kona\\project\\Final\\Countryview\\March2021.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t ____________________________________\n";
    cout<< "\t\t\t\t\t\t|   Press enter to back month list   |\n";
    cout<< "\t\t\t\t\t\t|____________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}

void April_2021()
{
    system("cls");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\kona\\project\\Final\\Countryview\\April2021.txt",ios::in);
    getline(file,line1);
    getline(file,line2);
    getline(file,line3);
    getline(file,line4);
    getline(file,line5);
    getline(file,line6);
    getline(file,line7);
    getline(file,line8);
    getline(file,line9);
    getline(file,line10);
    getline(file,line11);
    file.close();
    cout<<"\t"<<line1<<endl<<"\t"<<line2<<endl<<"\t"<<line3<<endl<<"\t"<<line4<<endl<<"\t"<<line5<<endl<<"\t"<<line6<<endl<<"\t"<<line7<<endl<<"\t"<<line8<<endl<<"\t"<<line9<<endl<<"\t"<<line10<<endl<<"\t"<<line11<<endl;
    cout<<"\tEnter the line you want to change: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\t";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\t";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\t";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\kona\\project\\Final\\Countryview\\April2021.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\kona\\project\\Final\\Countryview\\April2021.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t ____________________________________\n";
    cout<< "\t\t\t\t\t\t|   Press enter to back month list   |\n";
    cout<< "\t\t\t\t\t\t|____________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void May_2021()
{
    system("cls");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\kona\\project\\Final\\Countryview\\May2021.txt",ios::in);
    getline(file,line1);
    getline(file,line2);
    getline(file,line3);
    getline(file,line4);
    getline(file,line5);
    getline(file,line6);
    getline(file,line7);
    getline(file,line8);
    getline(file,line9);
    getline(file,line10);
    getline(file,line11);
    file.close();
    cout<<"\t"<<line1<<endl<<"\t"<<line2<<endl<<"\t"<<line3<<endl<<"\t"<<line4<<endl<<"\t"<<line5<<endl<<"\t"<<line6<<endl<<"\t"<<line7<<endl<<"\t"<<line8<<endl<<"\t"<<line9<<endl<<"\t"<<line10<<endl<<"\t"<<line11<<endl;
    cout<<"\tEnter the line you want to change: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\t";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\t";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\t";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\kona\\project\\Final\\Countryview\\May2021.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\kona\\project\\Final\\Countryview\\May2021.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t ____________________________________\n";
    cout<< "\t\t\t\t\t\t|   Press enter to back month list   |\n";
    cout<< "\t\t\t\t\t\t|____________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();

}
void June_2021()
{
    system("cls");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\kona\\project\\Final\\Countryview\\June2021.txt",ios::in);
    getline(file,line1);
    getline(file,line2);
    getline(file,line3);
    getline(file,line4);
    getline(file,line5);
    getline(file,line6);
    getline(file,line7);
    getline(file,line8);
    getline(file,line9);
    getline(file,line10);
    getline(file,line11);
    file.close();
    cout<<"\t"<<line1<<endl<<"\t"<<line2<<endl<<"\t"<<line3<<endl<<"\t"<<line4<<endl<<"\t"<<line5<<endl<<"\t"<<line6<<endl<<"\t"<<line7<<endl<<"\t"<<line8<<endl<<"\t"<<line9<<endl<<"\t"<<line10<<endl<<"\t"<<line11<<endl;
    cout<<"\tEnter the line you want to change: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\t";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\t";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\t";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\kona\\project\\Final\\Countryview\\June2021.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\kona\\project\\Final\\Countryview\\June2021.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t ____________________________________\n";
    cout<< "\t\t\t\t\t\t|   Press enter to back month list   |\n";
    cout<< "\t\t\t\t\t\t|____________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}

void March2020()
{
    system ("cls");
    system("color 30");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\kona\\project\\Final\\Countryview\\March2020.TXT");
    cout<< "\n\n\t\t\t\t\t\t-------- March2020 --------";
    cout<< "\n\t\t\t\t\t    -----------------------------------";
    while(file>>a1>>a2>>b1>>c1)
    {
        cout<<"\n\n\t\t\t\t\t\t"<<a1<<"."<<a2<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<b1<<" \t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<c1<<"\t\t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<endl;
    }
    rtrn();
}
void April2020()
{
    system ("cls");
    system("color B0");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\kona\\project\\Final\\Countryview\\April2020.TXT");
    cout<< "\n\n\t\t\t\t\t\t-------- April2020 --------";
    cout<< "\n\t\t\t\t\t    -----------------------------------";

    while(file>>a1>>a2>>b1>>c1)
    {
        cout<<"\n\n\t\t\t\t\t\t"<<a1<<"."<<a2<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<b1<<" \t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<c1<<"\t\t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<endl;
    }
    rtrn();

}

void May2020()
{
    system ("cls");
    system("color 50");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\kona\\project\\Final\\Countryview\\May2020.TXT");
    cout<< "\n\n\t\t\t\t\t\t--------- May2020 ---------";
    cout<< "\n\t\t\t\t\t    -----------------------------------";
    while(file>>a1>>a2>>b1>>c1)
    {
        cout<<"\n\n\t\t\t\t\t\t"<<a1<<"."<<a2<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<b1<<" \t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<c1<<"\t\t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<endl;
    }

    rtrn();
}
void June2020()
{
    system ("cls");
    system("color 60");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\kona\\project\\Final\\Countryview\\June2020.TXT");
    cout<< "\n\n\t\t\t\t\t\t--------- June2020 --------";
    cout<< "\n\t\t\t\t\t    -----------------------------------";
    while(file>>a1>>a2>>b1>>c1)
    {
        cout<<"\n\n\t\t\t\t\t\t"<<a1<<"."<<a2<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<b1<<" \t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<c1<<"\t\t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<endl;
    }
    rtrn();
}
void July2020()
{
    system ("cls");
    system("color 70");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\kona\\project\\Final\\Countryview\\July2020.TXT");
    cout<< "\n\n\t\t\t\t\t\t-------- July2020 ---------";
    cout<< "\n\t\t\t\t\t    -----------------------------------";
    while(file>>a1>>a2>>b1>>c1)
    {
        cout<<"\n\n\t\t\t\t\t\t"<<a1<<"."<<a2<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<b1<<" \t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<c1<<"\t\t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<endl;
    }
    rtrn();
}
void August2020()
{
    system ("cls");
    system("color C0");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\kona\\project\\Final\\Countryview\\August2020.TXT");
    cout<< "\n\n\t\t\t\t\t\t-------- August2020 --------";
    cout<< "\n\t\t\t\t\t    -----------------------------------";
    while(file>>a1>>a2>>b1>>c1)
    {
        cout<<"\n\n\t\t\t\t\t\t"<<a1<<"."<<a2<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<b1<<" \t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<c1<<"\t\t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<endl;
    }

    rtrn();
}
void September2020()
{
    system ("cls");
    system("color 60");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\kona\\project\\Final\\Countryview\\September2020.txt");
    cout<< "\n\n\t\t\t\t\t\t------ September2020 ------";
    cout<< "\n\t\t\t\t\t    -----------------------------------";
    while(file>>a1>>a2>>b1>>c1)
    {
        cout<<"\n\n\t\t\t\t\t\t"<<a1<<"."<<a2<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<b1<<" \t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<c1<<"\t\t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<endl;
    }

    rtrn();
}
void October2020()
{
    system ("cls");
    system("color E0");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\kona\\project\\Final\\Countryview\\October2020.txt");
    cout<< "\n\n\t\t\t\t\t\t-------- October2020 --------";
    cout<< "\n\t\t\t\t\t    -----------------------------------";
    while(file>>a1>>a2>>b1>>c1)
    {
        cout<<"\n\n\t\t\t\t\t\t"<<a1<<"."<<a2<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<b1<<" \t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<c1<<"\t\t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<endl;
    }

    rtrn();
}
void November2020()
{
    system ("cls");
    system("color 90");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\kona\\project\\Final\\Countryview\\November2020.txt");
    cout<< "\n\n\t\t\t\t\t\t-------- November2020 --------";
    cout<< "\n\t\t\t\t\t    -----------------------------------";
    while(file>>a1>>a2>>b1>>c1)
    {
        cout<<"\n\n\t\t\t\t\t\t"<<a1<<"."<<a2<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<b1<<" \t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<c1<<"\t\t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<endl;
    }
    rtrn();
}
void December2020()
{
    system ("cls");
    system("color 03");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\kona\\project\\Final\\Countryview\\December2020.txt");
    cout<< "\n\n\t\t\t\t\t\t-------- December2020 --------";
    cout<< "\n\t\t\t\t\t    -----------------------------------";
    while(file>>a1>>a2>>b1>>c1)
    {
        cout<<"\n\n\t\t\t\t\t\t"<<a1<<"."<<a2<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<b1<<" \t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<c1<<"\t\t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<endl;
    }
    rtrn();
}
void January2021()
{
    system ("cls");
    system("color 04");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\kona\\project\\Final\\Countryview\\January2021.txt");
    cout<< "\n\n\t\t\t\t\t\t-------- January2021 --------";
    cout<< "\n\t\t\t\t\t    -----------------------------------";
    while(file>>a1>>a2>>b1>>c1)
    {
        cout<<"\n\n\t\t\t\t\t\t"<<a1<<"."<<a2<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<b1<<" \t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<c1<<"\t\t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<endl;
    }
    rtrn();
}
void February2021()
{
    system ("cls");
    system("color 08");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\kona\\project\\Final\\Countryview\\February2021.txt");
    cout<< "\n\n\t\t\t\t\t\t-------- February2021 --------";
    cout<< "\n\t\t\t\t\t    -----------------------------------";
    while(file>>a1>>a2>>b1>>c1)
    {
        cout<<"\n\n\t\t\t\t\t\t"<<a1<<"."<<a2<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<b1<<" \t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<c1<<"\t\t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<endl;
    }

    rtrn();
}
void March2021()
{
    system ("cls");
    system("color F0");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\kona\\project\\Final\\Countryview\\March2021.txt");
    cout<< "\n\n\t\t\t\t\t\t-------- March2021 --------";
    cout<< "\n\t\t\t\t\t    -----------------------------------";
    while(file>>a1>>a2>>b1>>c1)
    {
        cout<<"\n\n\t\t\t\t\t\t"<<a1<<"."<<a2<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<b1<<" \t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<c1<<"\t\t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<endl;
    }
    rtrn();
}
void April2021()
{
    system ("cls");
    system("color D0");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\kona\\project\\Final\\Countryview\\April2021.txt");
    cout<< "\n\n\t\t\t\t\t\t-------- April2021 --------";
    cout<< "\n\t\t\t\t\t    -----------------------------------";
    while(file>>a1>>a2>>b1>>c1)
    {
        cout<<"\n\n\t\t\t\t\t\t"<<a1<<"."<<a2<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<b1<<" \t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<c1<<"    \t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<< endl;
    }
    rtrn();
}
void May2021()
{
    system ("cls");
    system("color C0");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\kona\\project\\Final\\Countryview\\May2021.txt");
    cout<< "\n\n\t\t\t\t\t\t-------- May2021 --------";
    cout<< "\n\t\t\t\t\t    -----------------------------------";
    while(file>>a1>>a2>>b1>>c1)
    {
        cout<<"\n\n\t\t\t\t\t\t"<<a1<<"."<<a2<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<b1<<" \t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<c1<<"\t\t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<endl;
    }
    rtrn();
}
void June2021()
{
    system ("cls");
    system("color E0");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\kona\\project\\Final\\Countryview\\June2021.txt");
    cout<< "\n\n\t\t\t\t\t\t-------- June2021 --------";
    cout<< "\n\t\t\t\t\t    -----------------------------------";
    while(file>>a1>>a2>>b1>>c1)
    {
        cout<<"\n\n\t\t\t\t\t\t"<<a1<<"."<<a2<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<b1<<" \t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<"\t\t\t\t\t\t"<<"|\t  "<<c1<<"     \t|"<<"\t"<<endl;
        cout<<"\t\t\t\t\t\t-------------------------"<<endl;
        cout<<endl;
    }
    rtrn();
}
void rtrn()
{
    cout<< "\n\n\n\t\t\t\tBack to month list press (1)\n";
    cout<< "\t\t\t\tBack to National information panel press (2)\n";
    cout<< "\t\t\t\tPress key: ";
    int n;
    cin>>n;
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
        National();
        fflush(stdin);
        getchar();
        break;
    }
    default:
    {
        printf("\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n");
        fflush(stdin);
        getchar();
        system("cls");
        rtrn();
    }
    }

}
int main()
{
    cout<< "\n\n\n\n\n\t\t\t\t****************************************************************\n\t\t\t";
    cout<< "\n\t\t\t\t\t~~~~~~~~~~~~  Covid-19 information  ~~~~~~~~~~~~\n\t\t\t\t\t";
    cout<< "\n\t\t\t\t****************************************************************\n";

    system("color 0B");
    loadingBar();
    Instraction();
    //main_menu();
}
void Instraction()
{
    system("cls");

    cout<<"                                     ,---.           ,---.   "<<endl;

    cout<<"                                    / /^`.\\.--''''-./,'^\\ \\   "<<endl;

    cout<<"                                    \\ \\    _       _    / /    "<<endl;

    cout<<"                                     `./  / __   __ \\  \\,' "<<endl;

    cout<<"                                      /    /_O)_(_O\\    \\  "<<endl;

    cout<<"                                      |  .-'  ___  `-.  |    "<<endl;

    cout<<"                                   .--|       \\_/       |--.    "<<endl;

    cout<<"                                 ,'    \\   \\   |   /   /    `."<<endl;

    cout<<"                                /       `.  `--^--'  ,'       \\"<<endl;

    cout<<"                             .-^^^^^-.    `--.___.--'     .-^^^^^-."<<endl;

    cout<<"                .-----------/         \\------------------/         \\--------------."<<endl;

    cout<<"                | .---------\\         /----------------- \\         /------------. |"<<endl;

    cout<<"                | |          `-`--`--'                    `--'--'-'             | |"<<endl;

    cout<<"                | |                                                             | |"<<endl;

    cout<<"                | | \t\t****NO MASK,NO INFORMATION****  \t\t| |"<<endl;

    cout<<"                | |                                                             | |"<<endl;

    cout<<"                | |                                                             | |"<<endl;

    cout<<"                | |_____________________________________________________________| |"<<endl;

    cout<<"                |_________________________________________________________________|"<<endl;

    cout<<"                                   )__________|__|__________("<<endl;

    cout<<"                                  |            ||            |"<<endl;

    cout<<"                                  |____________||____________|"<<endl;

    cout<<"                                    ),-----.(      ),-----.("<<endl;

    cout<<"                                  ,'   ==.   \\    /  .==    `."<<endl;

    cout<<"                                 /            )  (            \\"<<endl;

    cout<<"                                 `==========='    `==========='  "<<endl;
    system("color 5F");
    cout<<"\n\n\n\n\n";
    system("pause");
    //Sleep(5000);
    main_menu();
}
