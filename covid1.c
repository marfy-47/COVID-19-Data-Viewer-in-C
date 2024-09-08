
#include<iostream>
#include<string.h>
#include<istream>
#include<fstream>
using namespace std;

void menu();
void countryview();
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
void admin();
void request();


//main menu start;

   main()
   {

    //member();
    countryview();
    menu();

   }
void countryview()
{
    system ("cls");
    int s;

    cout<<"\n\n\n\t\t\t\t\t~~~~~~~~~~~~  Covid 19 information  ~~~~~~~~~~~~\n\n";
    cout<<"\n\n\t\t\t*****************************************************************************\n\n";
    cout<<"\n\t\t\t\t\t\t\t 1.National\n";
    cout<<"\n\t\t\t\t\t\t       2.International\n";
    cout<<"\n\n\t\t\t*****************************************************************************\n";
    cout<<"\n\n\t\t\t\t\t\t\t  3.Admin\n";
    cout<<"\n\t\t\t\t\t\t\t 4.Request\n\n";
    cout<<"\n\t\t\tEnter your choice: ";
    cin>>s;

    switch(s)
    {
    case 1:
    {
        National();
        fflush(stdin);
        getchar();
        menu();
    }
    case 2:
    {
        International();
        fflush(stdin);
        getchar();
        menu();
    }
    case 3:
        {
        admin();
        fflush(stdin);
        getchar();
        }
    case 4:
        {
        request();
        fflush(stdin);
        getchar();
        }
    default:
    {
        cout<<"\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n";
        fflush(stdin);
        getchar();
        countryview();
    }
    }
}
    void National()
    {


    system("cls");
    cout<<"sarkit";

    fflush(stdin);
    getchar();

    menu();


    }
    void International()
    {
    string cn,nm,cs;
    int ex=0;
    system("cls");
    ifstream country("International.txt");
    while(country>>cn)
    {
        cout<<cn<<endl;
    }
    cout<<"\n\n\n";
    cout<<"Search Country name: ";
    cin>>nm;
    while(country>>cs)
        {
            if(nm == cs)
            {
                ex=1;
                break;
            }
        }
        if(ex==1)
        {
            cout<<".............."<<endl;
            cout<<endl;
            cout<<"      :     "<<nm;
            fflush(stdin);
            getchar();
            system("cls");

            main();
        }
        else
        {
            cout<<".......Sorry,Your account is not found......... "<<endl;
            fflush(stdin);
            getchar();
            cout<<endl;

            International();
        }




    fflush(stdin);
    getchar();
    }

    void admin()
    {
    system("cls");
    int exist=0 ;
    string user,pass,uniq,u,p,s;
    //input
    cout<<"Enter your username : ";
    cin>>user;
    cout<<"Enter your password : ";
    cin>>pass;
    system("cls");
    cout<<"Enter your unique code : ";
    cin>>uniq;
    //filestream
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
        cout<<"Hello men you are in here"<<endl;
        cin.get();
        cin.get();
        fflush(stdin);
        getchar();
        main();
    }
    else
    {
        cout<<"Sorry,Login error"<<endl;
        fflush(stdin);
        getchar();
        main();
    }
    }
    void request()
    {
        system("cls");
        string cg;
        cout<<"What do you want to change : ";
        cin>>cg;
        ofstream chang("Request.txt",ios::app);
        chang<<cg<<endl;
        system("cls");
        cout<<"Congratulation,Our admin panel will review it !!"<<endl;
        fflush(stdin);
        getchar();
        main();
    }

   void menu()
  {
    system ("cls");
    int choise;

    cout<<"\n\n\t\t**********Main Menu**********\n";
    cout<<"\n\n\t\t     1.March2020\n";
    cout<<"\t\t     2.April2020\n";
    cout<<"\t\t     3.May2020\n";
    cout<<"\t\t     4.June2020\n";
    cout<<"\t\t     5.July2020\n";
    cout<<"\t\t     6.August2020\n";
    cout<<"\t\t     7.September2020\n";
    cout<<"\t\t     8.October2020\n";
    cout<<"\t\t     9.November2020\n";
    cout<<"\t\t     10.December2020\n";
    cout<<"\t\t     11.January2021\n";
    cout<<"\t\t     12.February2021\n";
    cout<<"\t\t     13.March2021\n";
    cout<<"\n\t\t Enter Your Choice: ";
    scanf("%d", &choise);
    switch(choise)
    {
    case 1:
    {
        //March2020();

        countryview();
    }
    case 2:
    {
        //April2020();

        countryview();
    }
    case 3:
    {
        //May2020();

        countryview();
    }
    case 4:
    {
        //June2020();

        countryview();
    }
    case 5:
    {
        //July2020();

        countryview();
    }
    case 6:
    {
        //August2020();

        countryview();
    }
    case 7:
    {
        //September2020();

        countryview();
    }
    case 8:
    {
        //October2020();

        countryview();
    }
    case 9:
    {
        //November2020();

        countryview();
    }
    case 10:
    {
        //December2020();

        countryview();
    }
    case 11:
    {
        //January2021();

        countryview();
    }
    case 12:
    {
        //February2021();

        countryview();
    }
    case 13:
    {
        //March2021();

        countryview();
    }

    default:
    {
        cout<<"\n\n\t\t Your choice is wrong! \n\t\t Try again.....\n";

        main();
    }
    }
}
