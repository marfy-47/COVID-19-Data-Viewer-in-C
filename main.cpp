
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
void Hospital_Information();
void Request();
int main();
int barl = 20;
void loadingBar()
{
    system("color 0D");

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
        fflush(stdin);
        getchar();
        continents();
    }

    }
}

void main_menu()
{

    system("cls");
    system("COLOR  40");
    int w;
    printf("\n\n\n\n\n\t\t\t\t ************************************************************\n");
    printf("\n\t\t\t\t\t\t\t 1.Continents\n");
    printf("\n\t\t\t\t\t\t\t 2.Countryview\n");
    printf("\n\t\t\t\t\t\t\t 3.Admin\n");
    printf("\n\t\t\t\t\t\t\t 4.Request\n\n");
    printf("\n\n\t\t\t\t ************************************************************\n");
    printf("\n\n\n\t\t\t\t Enter your choice : ");
    scanf("%d",&w);
    switch(w)
    {
    case 1:
    {
        continents();
    }
    case 2:
    {
        countryview();
    }
    case 3:
    {
        Admin();
    }
    case 4:
    {
        Request();
    }
    default :
    {
            main_menu();
            break;
    }

    }
}
void show()
{
    int n;
            cin >> n;
            switch(n)
            {
            case 1:
            {
                Hospital_Information();
            }
            case 2:
            {
                admin_Covid_Record();
            }
            case 3:
            {
                main_menu();
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
            system("COLOR  40");
            system("color 0D");
            cout << "\n\n\n\n\t\t\t\t\t****** What you want change ?? ******\n";
            cout << "\n\n\n\t\t\t\t\t\t 1. Hospital information.\n";
            cout << "\n\t\t\t\t\t\t 2.Covid Record.\n";
            cout << "\n\t\t\t\t\t\t 3.Log Out !!.\n";
            cout << "\n\n\n\n\n\t\t\t\t\t Enter Your Choice: ";
            show();
}
void admin2()
{
    system("cls");
            int n;
            string a,b,c;
            cout<<"\n\n\n\n\n\t\t\t\t\t\tPress '1' to go notification."<<endl;
            cout<<"\n\t\t\t\t\t\tpress '2' for change data."<<endl;
            cout<<"\n\t\t\t\t\t\tEnter Choice : ";
            cin>>n;
            switch(n)
            {
            case 1:
                {
                   system("cls");
                   fstream myfile("Request.txt");
                   cout<<"\n\n\t\t\t\t\t\tNotification"<<endl;
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
                    cout<<"Wrong input.Please enter again!!"<<endl;
                    fflush(stdin);
                    getchar();
                    system("cls");
                    admin2();

                }
            }


}
void Admin()
{
    system("cls");
    int exist=0;
    system("color 20");
    string user,pass,uniq,u,p,s;
    cout<<"\n\n\n\n\t\t\t\t\tEnter your username : ";
    cin>>user;
    cout<<"\n\n\t\t\t\t\tEnter your password : ";
    cin>>pass;
    cout<<"\n\n\t\t\t\t\tEnter your unique code : ";
    cin>>uniq;
    ifstream input("database.txt");

    while(input>>u>>p>>s)
    {
        if(u == user && p == pass && s==uniq)
        {
            exist=1;
        }
    }
        input.close();

          if(exist == 1)
        {
            cout << "\n\n\n\n\t\t\t\t\t Your information is correct....\n\n";
            fflush(stdin);
            getchar();
            admin2();
        }
        else
        {
            cout<<"\n\n\n\n\t\t\t\t\tSorry,Login error"<<endl;
            fflush(stdin);
            getchar();
            Admin();
        }
}
void Request()
{
    system("cls");
    char country[1000], data[10001];

    ofstream myfile;
    myfile.open("Request.txt",ios :: app);
    cout << "\n\n\n\n\t\t\t\t\t********** Write your information **********";
    cout << "\n\n\n\n\n\t\t\tEnter name : ";
    cin>>country;
    myfile<<country<<endl;
    fflush(stdin);
    getchar();
    cout<<"\n\n\t\t\tEnter information : ";
    cin.getline(data,100);
    myfile<<data<<endl;

    fflush(stdin);
    getchar();
    system("cls");
    myfile.close();

    cout<<"\n\n\n\n\n\n\t\t\t\t\tThankyou,Our administration will review it !!"<<endl;
    fflush(stdin);
    getchar();
    request2();

}
void request2()
{
    int n;
    cout << "\n\n\n\n\t\t\t\tBack to Main menu press 1: \n";
    cout << "\n\t\t\t\tBack to Continents press 2: \n";
    cout << "\n\t\t\t\tPress key: ";
    scanf("%d", &n);
    if(n==1)
    {
        system("cls");
        main_menu();
        fflush(stdin);
        getchar();
    }
    else if(n==2)
    {
        system("cls");
        continents();
        fflush(stdin);
        getchar();
    }
    else
    {
        printf("\n\n\n\n\t\t\t\t\t Your choice is wrong! Try again.....\n");
        fflush(stdin);
        getchar();
        system("cls");
        request2();
    }
}

void continents()
{
    system ("cls");
    int p;
    system("COLOR  4F");
    cout << "\n\n\n\t\t\t\t\t****************CONTINENTS****************\n\n\n";
    cout << "\n\t\t\t\t\t\t 1.Asia\n";
    cout << "\n\t\t\t\t\t\t 2.Africa\n";
    cout << "\n\t\t\t\t\t\t 3.Europe\n";
    cout << "\n\t\t\t\t\t\t 4.North_America\n";
    cout << "\n\t\t\t\t\t\t 5.South_America\n";
    cout << "\n\t\t\t\t\t\t 6.Australia\n";
    cout << "\n\t\t\t\t\t\t 7.Antartica\n";
    cout << "\n\n\t\t\t\t----------------------------------------------------------\n";
    cout << "\n\n\t\t\t\t\t 8.Back to Main menu:\n\n";
    cout << "\n\t\t\tEnter your choice: ";
    scanf("%d",&p);
    switch(p)
    {
    case 1:
    {
        Asia ();
    }
    case 2:
    {
        Africa ();
    }
    case 3:
    {
        Europe();
    }
    case 4:
    {
        North_America();
    }
    case 5:
    {
        South_America ();
    }
    case 6:
    {
        Australia();
    }

    case 7:
    {
        Antartica();
    }
    case 8:
    {
        main_menu();
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
    system("color 60");
    int n;

    std :: string line_;
    ifstream file_("Asia.txt");
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
    ifstream file_("Africa.txt");
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
    system("COLOR  5F");
    int n;

    std :: string line_;
    ifstream file_("Europe.txt");
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
    system("COLOR  5F");
    int n;
    std :: string line_;
    ifstream file_("North_America.txt");
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
    system("COLOR  50");
    int n;
    std :: string line_;
    ifstream file_("South_America.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();
    rtrnmenu();

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
    rtrnmenu();

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
    rtrnmenu();

}

void countryview()
{
    system ("cls");
    int s;
    system("COLOR  2F");
    cout<<"\n\n\n\n\t\t\t\t\----------------------------------------------------------\n";
    cout<<"\n\n\t\t\t\t\t\t\t 1.National\n";
    cout<<"\n\t\t\t\t\t\t\t 2.International\n";
    cout<<"\n\t\t\t\t\t\t\t 3.Main menu\n\n";
    cout<<"\n\t\t\t\t\----------------------------------------------------------\n";
    cout <<"\n\n\n\t\t\t\t\tEnter your choice: ";
    scanf("%d",&s);
    system("cls");
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
    cout<< "\n\n\n\n\n\t\t\t\t\t ***** What you want to see???? *****\n";
    cout<< "\n\n\n\t\t\t\t\t\t 1.Hospital Information.\n";
    cout<< "\n\t\t\t\t\t\t 2.Covid Record.\n";
    cout<< "\n\t\t\t\t\t\t 3.Back to Country view.\n";
    cout<< "\n\t\t\t\t\t\t 4.Back to Main menu.";
    cout<< "\n\n\n\n\t\t\t\t\tEnter your choice: ";
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
    ifstream file_("International.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();

    cout << "\n\n\n\t\t\t\tBack to Main menu press 1: \n";
    cout << "\t\t\t\tBack to Country view press 2: \n";
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
    system("cls");
    cout << "\n\n\n\n\n\t\t\t\tHospital Information:---"<<endl;
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
    printf("\n\n\n\t\t\t\t\t\tBack to Main menu press 1: \n");
    printf("\n\t\t\t\t\t\tGo to Covid Record press 2: \n");
    printf("\n\n\n\t\t\t\t\t\tEnter Choise : ");
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
    printf("\n\n\t\t**********Month Name**********\n");
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
    printf("\t\t     14.Back to National\n");

    printf("\n\t\t Enter Your Choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
    {
        March2020();
    }
    case 2:
    {
        April2020();
    }
    case 3:
    {
        May2020();
    }
    case 4:
    {
        June2020();
    }
    case 5:
    {
        July2020();
    }
    case 6:
    {
        August2020();
    }
    case 7:
    {
        September2020();
    }
    case 8:
    {
        October2020();
    }
    case 9:
    {
        November2020();
    }
    case 10:
    {
        December2020();
    }
    case 11:
    {
        January2021();
    }
    case 12:
    {
        February2021();
    }
    case 13:
    {
        March2021();
    }
    case 14:
    {

        National();
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
    printf("\n\n\t\t**********Month Name**********\n");
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
    printf("\t\t     14.Back to changing type.\n");

    printf("\n\t\t Enter Your Choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
    {
        March2020();
    }
    case 2:
    {
        April2020();
    }
    case 3:
    {
        May2020();
    }
    case 4:
    {
        June2020();
    }
    case 5:
    {
        July2020();
    }
    case 6:
    {
        August2020();
    }
    case 7:
    {
        September2020();
    }
    case 8:
    {
        October2020();
    }
    case 9:
    {
        November2020();
    }
    case 10:
    {
        December2020();
    }
    case 11:
    {
        January2021();
    }
    case 12:
    {
        February2021();
    }
    case 13:
    {
        March2021();
    }
    case 14:
    {
        system("cls");
        change();
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

void color()
{
    system ("cls");
    system("color 30");
}
void March2020()
{
    color();
    std :: string line_;
    ifstream file_("March2020.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();

    rtrn();
}
void April2020()
{
    color();
    std :: string line_;
    ifstream file_("April2020.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();

    rtrn();

}

void May2020()
{
    color();
    std :: string line_;
    ifstream file_("May2020.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();

    rtrn();
}
void June2020()
{
    color();
    std :: string line_;
    ifstream file_("June2020.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();

    rtrn();
}
void July2020()
{
    color();
    std :: string line_;
    ifstream file_("July2020.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();

    rtrn();
}
void August2020()
{
    color();
    std :: string line_;
    ifstream file_("August2020.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();

    rtrn();
}
void September2020()
{
    color();
    std :: string line_;
    ifstream file_("September2020.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();

    rtrn();
}
void October2020()
{
    color();
    std :: string line_;
    ifstream file_("October2020.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();

    rtrn();
}
void November2020()
{
    color();
    std :: string line_;
    ifstream file_("November2020.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();

    rtrn();
}
void December2020()
{
    color();
    std :: string line_;
    ifstream file_("December2020.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();

    rtrn();
}
void January2021()
{
    color();
    std :: string line_;
    ifstream file_("January2021.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();

   rtrn();
}
void February2021()
{
    color();
    std :: string line_;
    ifstream file_("February2021.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();

    rtrn();
}
void March2021()
{
    color();
    std :: string line_;
    ifstream file_("March2021.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();

    rtrn();
}
void rtrn()
{
    cout<< "\n\n\n\t\t\t\tBack to month list press ' 1 '\n";
    cout<< "\t\t\t\tBack to Countryview press ' 2 '\n";
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

    system("color 50");

    loadingBar();
    main_menu();
}
