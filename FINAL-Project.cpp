#include<string.h>
#include<dos.h>
#include<conio.h>
#include<fstream>
#include<ostream>
#include<windows.h>
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
    system("color 9F");
    char a = 177, b = 219;
    cout << "\n\n\n\t\t\t\t";
    cout << "\n\n\n\n\n\t\t\t\t\t\t\t" " Loading.....\n\n";
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i < 12; i++)
    {
        printf("%c", a);
    }
    cout << "\r";
    cout << "\t\t\t\t\t\t\t";
    for (int i = 0; i < 12; i++)
    {
        printf("%c", b);
        Sleep(150);
    }
}
void rtrnmenu()
{
    int n;
    cout<< "\n\n\t\t\t\t\t Press 1 to Back to the Main Menu !! \n\n";
    cout<< "\t\t\t\t\t Press 2 to Back to the Continents !! \n\n";
    cout<< "\t\t\t\t\t Press Key: ";
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
        printf("\n\n\t\t Your Choice is Wrong !! \n\t\t Try Again.....\n");
        system("pause");
        continents();
    }
    }
}
void main_menu()
{
    system("cls");
    system("COLOR  4F");
    int w;
    cout<<"\n\n\n\n\t\t\t\t\t\t    ==================="<<endl;
    cout<<"\t\t\t\t\t\t    ||   Main Menu   ||"<<endl;
    cout<<"\t\t\t\t\t\t    ==================="<<endl;
    cout<<"\n\t\t\t\t ************************************************************\n";
    cout<<"\n\t\t\t\t\t\t 1.Records of Continents\n";
    cout<<"\n\t\t\t\t\t\t 2.Country-based Records\n";
    cout<<"\n\t\t\t\t\t\t 3.COVID-19 Variants List\n";
    cout<<"\n\t\t\t\t\t\t 4.Admin Panel\n";
    cout<<"\n\t\t\t\t\t\t 5.Suggestions Panel\n";
    cout<<"\n\t\t\t\t ************************************************************\n";
    cout<<"\n\t\t\t\t\t\t Enter Your Choice: ";
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
    system("COLOR  E0");
    int n;
    std :: string line_;
    ifstream file_("F:\\COVID-19 PROJECT\\COVID_Variants.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();
    cout<< "\n\t\t\t\t\t\t __________________________________________\n";
    cout<< "\t\t\t\t\t\t|   Press Enter to Back to the Main Menu   |\n";
    cout<< "\t\t\t\t\t\t|__________________________________________|\n";
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
        printf("\n\n\t\t Your Choice is Wrong !! \n\t\t Try Again.....\n");
        show();
    }
    }
}
void change()
{
    system("cls");
    system("color 5F");
    cout << "\n\n\n\n\t\t\t\t\t   ****** Change Panel ******\n";
    cout << "\n\t\t\t\t\t\t 1.COVID Records\n";
    cout << "\n\t\t\t\t\t\t 2.Back to the Main Menu\n";
    cout << "\n\t\t\t\t\t\t 0.Log Out\n";
    cout << "\n\n\n\n\n\t\t\t\t\t Enter Your Choice: ";
    show();
}
void admin2()
{
    system("cls");
    int n;
    string a,b,c;
    cout<<"\n\n\n\n\n\t\t\t\t\t\t Press 1 to Go to the Notification Panel !!"<<endl;
    cout<<"\n\t\t\t\t\t\t Press 2 to Go to the Change Panel !!"<<endl;
    cout<<"\n\t\t\t\t\t\t Enter Your Choice: ";
    cin>>n;
    switch(n)
    {
    case 1:
    {
        system("cls");
        fstream myfile("Request.txt");
        cout<<"\n\n\t\t\t\t\t\t------------Notifications------------"<<endl;
        cout<<"\n\n\n";
        while(myfile>>a>>b>>c)
        {
            cout<<"\t\t\t\t-----------------------------------------------------------------"<<endl;
            cout<<"\t\t\t\t!\t"<<a<<setw(15)<<"\t!"<<setw(10)<<b<<setw(4)<<"\t!"<<setw(10)<<c<<setw(6)<<"\t!"<<endl;
        }
        cout<<"\t\t\t\t-----------------------------------------------------------------"<<endl;
        myfile.close();
        cout<<"\n\n\n\n\n\t\t\t\t\t\t Press Enter to Go Back !!";
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
        cout<<"Wrong Input !! Please Enter the Valid Input Again....."<<endl;
        system("pause");
        system("cls");
        admin2();
    }
    }
}
void Admin()
{
    system("cls");
    system("color B0");
    string u,p,s;
    char user[10],ch;
    int i;
    cout<<"\n\n\t\t\t\t\t     ==================="<<endl;
    cout<<"\t\t\t\t\t     ||  Admin Panel  ||"<<endl;
    cout<<"\t\t\t\t\t     ==================="<<endl;
    cout<<"\n\n\t\t\t\t\tEnter Your User Name    :  ";
    cin>>user;
    char pass[10],pa;
    int j;
    cout<<"\t\t\t\t\tEnter Your Password     :  ";
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
    cout<<"\n\t\t\t\t\tEnter Your Unique Code  :  ";
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
            cout << "\n\n\t\t\t\t\tYour Information is Correct !!"<<endl;
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
            printf("\n\n\t\t\t\t\tWrong Password %d to 3 !!",P);
            cout<<"\n\n\t\t\t\t\tTry Again....."<<endl;
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
    cout << "\n\n\n\n\t\t\t\t\t********** Write Below If You Have Any Informational Feedback About Any Month **********";
    cout<< "\n\n\t\t\t\t\t\t Follow This Format : ";
    cout<< "\n\n\t\t\t\t\t\t\t\t ___________________________________________";
    cout<< "\n\t\t\t\t\t\t\t\t |Month's Name | Monthname-Year             |";
    cout<< "\n\t\t\t\t\t\t\t\t |_____________|____________________________|";
    cout<< "\n\t\t\t\t\t\t\t\t |Options Name | Infected/Deaths/Recovered  |";
    cout<< "\n\t\t\t\t\t\t\t\t |_____________|____________________________|";
    cout<< "\n\t\t\t\t\t\t\t\t |Data         | Amount of Number           |";
    cout<< "\n\t\t\t\t\t\t\t\t |_____________|____________________________|";
    cout << "\n\n\n\t\t\t\t\t\t\t Enter the Month's Name : ";
    cin>>month;
    myfile<<month<<endl;
    cout<<"\n\n\t\t\t\t\t\t\t Enter Any Options Name  : ";
    cin>>type;
    myfile<<type<<endl;
    cout<<"\n\n\t\t\t\t\t\t\t Enter the Correct Data   : ";
    cin>>data;
    myfile<<data<<endl;
    system("cls");
    myfile.close();
    cout<<"\n\n\n\n\n\n\t\t\t\t\t Thank you !! Our administrations will review it !!"<<endl;
    system("pause");
    request2();
}
void request2()
{
    system("cls");
    int n;
    cout << "\n\n\n\n\t\t\t\t Press 1 to Back to the Main Menu !! \n";
    cout << "\n\t\t\t\t Press 2 to Back to the Category !! \n";
    cout << "\n\t\t\t\t To Exit Press 0 !! \n";
    cout << "\n\t\t\t\t Press Key: ";
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
        countryview();
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
        printf("\n\n\n\n\t\t\t\t\t Your Choice is Wrong !! Try Again.....\n");
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
    cout << "\n\n\n\t\t\t\t\t****************CONTINENTS(Continents Based Data)****************\n\n\n";
    cout << "\n\t\t\t\t\t\t 1.Asia\n";
    cout << "\n\t\t\t\t\t\t 2.Africa\n";
    cout << "\n\t\t\t\t\t\t 3.Europe\n";
    cout << "\n\t\t\t\t\t\t 4.North_America\n";
    cout << "\n\t\t\t\t\t\t 5.South_America\n";
    cout << "\n\t\t\t\t\t\t 6.Oceania\n";
    cout << "\n\t\t\t\t\t\t 7.Back to the Main Menu\n";
    cout << "\n\t\t\t\t\t\t To Exit Press 0\n";
    cout << "\n\t\t\t\t\t\t Enter Your Choice: ";
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
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tYou Entered Wrong Data !!");
        printf("\n\n\t\t\t\t\t You will Go to the Continents Part !!\n\n\n");
        fflush(stdin);
        getchar();
        continents();
    }
    }
}
void Asia()
{
    system ("cls");
    system("color A0");
    int n;
    std :: string line_;
    ifstream file_("E:\\3rd Semester\\Project work\\Asia.txt");
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
    system("COLOR  9F");
    int n;
    std :: string line_;
    ifstream file_("E:\\3rd Semester\\Project work\\Africa.txt");
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
    system("COLOR  C0");
    int n;
    std :: string line_;
    ifstream file_("E:\\3rd Semester\\Project work\\Europe.txt");
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
    system("COLOR  30");
    int n;
    std :: string line_;
    ifstream file_("E:\\3rd Semester\\Project work\\North_America.txt");
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
    system("COLOR  E0");
    int n;
    std :: string line_;
    ifstream file_("E:\\3rd Semester\\Project work\\South_America.txt");
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
    system("COLOR  DF");
    int n;
    std :: string line_;
    ifstream file_("E:\\3rd Semester\\Project work\\Oceania.txt");
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
    system("COLOR DF");
    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t============"<<endl;
    cout<<"\t\t\t\t\t\t\t| Category |"<<endl;
    cout<<"\t\t\t\t\t\t\t============"<<endl;
    cout<<"\t\t\t\t----------------------------------------------------------\n";
    cout<<"\n\t\t\t\t\t\t\t 1.National\n";
    cout<<"\n\t\t\t\t\t\t\t 2.International\n";
    cout<<"\n\t\t\t\t\t\t\t 3.Back to the Main Menu\n";
    cout<<"\n\t\t\t\t\t\t\t To Exit Press 0";
    cout<<"\n\n\t\t\t\t----------------------------------------------------------\n";
    cout <<"\n\t\t\t\t\t\t\t Enter Your Choice: ";
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
        printf("\n\n\t\t Your Choice is Wrong !! \n\t\t Try Again.....\n");
        fflush(stdin);
        getchar();
        countryview();
    }
    }
}
void National()
{
    system("cls");
    system("COLOR 9F");
    cout<< "\n\n\t\t\t\t\t       ................................\n";
    cout<< "\t\t\t\t\t       |  National Information Panel  | \n";
    cout<< "\t\t\t\t\t       ................................\n";
    cout<< "\n\n\n\n\t\t\t\t\t   ***** What do you want to see???? *****\n\n";
    cout<< "\t\t\t\t\t\t____________________________\n";
    cout<< "\t\t\t\t\t\t| 1 | Hospital Information  |\n";
    cout<< "\t\t\t\t\t\t|___|_______________________|\n";
    cout<< "\t\t\t\t\t\t| 2 | COVID Records         |\n";
    cout<< "\t\t\t\t\t\t|___|_______________________|\n";
    cout<< "\t\t\t\t\t\t| 3 | Back to the Category  |\n";
    cout<< "\t\t\t\t\t\t|___|_______________________|\n";
    cout<< "\t\t\t\t\t\t| 4 | Back to the Main Menu |\n";
    cout<< "\t\t\t\t\t\t|___|_______________________|\n";
    cout<< "\t\t\t\t\t\t|      To Exit Press 0      |\n";
    cout<< "\t\t\t\t\t\t|___________________________|\n";
    cout<< "\n\n\t\t\t\t\t Enter Your Choice: ";
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
        printf("\n\n\t\t Your Choice is Wrong !! \n\t\t Try Again.....\n");
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
    system("color E0");
    int n;
    std :: string line_;
    ifstream file_("F:\\COVID-19 PROJECT\\International.txt");
    while(getline(file_,line_))
    {
        std :: cout <<line_<<'\n';
    }
    file_.close();
    cout << "\n\n\n\t\t\t\t Press 1 to Back to the Main Menu !! \n";
    cout << "\t\t\t\t Press 2 to Back to the Category !! \n";
    cout << "\t\t\t\t Press Key: ";
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
        printf("\n\n\t\t Your Choice is Wrong !! \n\t\t Try Again.....\n");
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
    fp = fopen("F:\\COVID-19 PROJECT\\Hospital_Information.txt","r");
    char ch[1000001];
    while(fgets(ch,sizeof(ch),fp))
    {
        printf("%s",ch);
    }
    fclose(fp);
    cout<<"\n\n\n\t\t\t\t\t Press 1 to Back to the National Information Panel !! \n";
    cout<<"\n\t\t\t\t\t Press 2 to Back to the Category !! \n";
    cout<<"\n\t\t\t\t\t Enter Your Choice: ";
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
        printf("\n\n\t\t Your Choice is Wrong !! \n\t\t Try Again.....\n");
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
    system("COLOR 4F");
    cout<< "\n\n\t\t\t\t**********Months List(Monthly data according to our country, Bangladesh)**********\n";
    cout<< "\t\t\t\t\t\t ____________________________________________\n";
    cout<< "\t\t\t\t\t\t| 1  |     March2020                         |\n";
    cout<< "\t\t\t\t\t\t|____|_______________________________________|\n";
    cout<< "\t\t\t\t\t\t| 2  |     April2020                         |\n";
    cout<< "\t\t\t\t\t\t|____|_______________________________________|\n";
    cout<< "\t\t\t\t\t\t| 3  |     May2020                           |\n";
    cout<< "\t\t\t\t\t\t|____|_______________________________________|\n";
    cout<< "\t\t\t\t\t\t| 4  |     June2020                          |\n";
    cout<< "\t\t\t\t\t\t|____|_______________________________________|\n";
    cout<< "\t\t\t\t\t\t| 5  |     July2020                          |\n";
    cout<< "\t\t\t\t\t\t|____|_______________________________________|\n";
    cout<< "\t\t\t\t\t\t| 6  |     August2020                        |\n";
    cout<< "\t\t\t\t\t\t|____|_______________________________________|\n";
    cout<< "\t\t\t\t\t\t| 7  |     September2020                     |\n";
    cout<< "\t\t\t\t\t\t|____|_______________________________________|\n";
    cout<< "\t\t\t\t\t\t| 8  |     October2020                       |\n";
    cout<< "\t\t\t\t\t\t|____|_______________________________________|\n";
    cout<< "\t\t\t\t\t\t| 9  |     November2020                      |\n";
    cout<< "\t\t\t\t\t\t|____|_______________________________________|\n";
    cout<< "\t\t\t\t\t\t| 10 |     December2020                      |\n";
    cout<< "\t\t\t\t\t\t|____|_______________________________________|\n";
    cout<< "\t\t\t\t\t\t| 11 |     January2021                       |\n";
    cout<< "\t\t\t\t\t\t|____|_______________________________________|\n";
    cout<< "\t\t\t\t\t\t| 12 |     February2021                      |\n";
    cout<< "\t\t\t\t\t\t|____|_______________________________________|\n";
    cout<< "\t\t\t\t\t\t| 13 |     March2021                         |\n";
    cout<< "\t\t\t\t\t\t|____|_______________________________________|\n";
    cout<< "\t\t\t\t\t\t| 14 |     April2021                         |\n";
    cout<< "\t\t\t\t\t\t|____|_______________________________________|\n";
    cout<< "\t\t\t\t\t\t| 15 |     May2021                           |\n";
    cout<< "\t\t\t\t\t\t|____|_______________________________________|\n";
    cout<< "\t\t\t\t\t\t| 16 |     June2021                          |\n";
    cout<< "\t\t\t\t\t\t|____|_______________________________________|\n";
    cout<< "\t\t\t\t\t\t| 17 |Back to the National Information Panel |\n";
    cout<< "\t\t\t\t\t\t|____|_______________________________________|\n";
    cout<< "\t\t\t\t\t\t|             To Exit Press 0                |\n";
    cout<< "\t\t\t\t\t\t|____________________________________________|\n";
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
        printf("\n\n\t\t Your Choice is Wrong !! \n\t\t Try Again.....\n");
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
    system("COLOR E0");
    cout<<"\n\n\t\t\t\t\t\t\t====================\n";
    cout<<"\t\t\t\t\t\t\t||   Admin Panel  ||\n";
    cout<<"\t\t\t\t\t\t\t====================\n";
    cout<< "\n\n\t\t\t**********Months List(Monthly data according to our country, Bangladesh)**********\n";
    cout<< "\n\t\t\t\t\t\t ___________________________________\n";
    cout<< "\t\t\t\t\t\t| 1  |     March2020                |\n";
    cout<< "\t\t\t\t\t\t|____|______________________________|\n";
    cout<< "\t\t\t\t\t\t| 2  |     April2020                |\n";
    cout<< "\t\t\t\t\t\t|____|______________________________|\n";
    cout<< "\t\t\t\t\t\t| 3  |     May2020                  |\n";
    cout<< "\t\t\t\t\t\t|____|______________________________|\n";
    cout<< "\t\t\t\t\t\t| 4  |     June2020                 |\n";
    cout<< "\t\t\t\t\t\t|____|______________________________|\n";
    cout<< "\t\t\t\t\t\t| 5  |     July2020                 |\n";
    cout<< "\t\t\t\t\t\t|____|______________________________|\n";
    cout<< "\t\t\t\t\t\t| 6  |     August2020               |\n";
    cout<< "\t\t\t\t\t\t|____|______________________________|\n";
    cout<< "\t\t\t\t\t\t| 7  |     September2020            |\n";
    cout<< "\t\t\t\t\t\t|____|______________________________|\n";
    cout<< "\t\t\t\t\t\t| 8  |     October2020              |\n";
    cout<< "\t\t\t\t\t\t|____|______________________________|\n";
    cout<< "\t\t\t\t\t\t| 9  |     November2020             |\n";
    cout<< "\t\t\t\t\t\t|____|______________________________|\n";
    cout<< "\t\t\t\t\t\t| 10 |     December2020             |\n";
    cout<< "\t\t\t\t\t\t|____|______________________________|\n";
    cout<< "\t\t\t\t\t\t| 11 |     January2021              |\n";
    cout<< "\t\t\t\t\t\t|____|______________________________|\n";
    cout<< "\t\t\t\t\t\t| 12 |     February2021             |\n";
    cout<< "\t\t\t\t\t\t|____|______________________________|\n";
    cout<< "\t\t\t\t\t\t| 13 |     March2021                |\n";
    cout<< "\t\t\t\t\t\t|____|______________________________|\n";
    cout<< "\t\t\t\t\t\t| 14 |     April2021                |\n";
    cout<< "\t\t\t\t\t\t|____|______________________________|\n";
    cout<< "\t\t\t\t\t\t| 15 |     May2021                  |\n";
    cout<< "\t\t\t\t\t\t|____|______________________________|\n";
    cout<< "\t\t\t\t\t\t| 16 |     June2021                 |\n";
    cout<< "\t\t\t\t\t\t|____|______________________________|\n";
    cout<< "\t\t\t\t\t\t| 17 |     Back to Change the Panel |\n";
    cout<< "\t\t\t\t\t\t|____|______________________________|\n";
    cout<< "\t\t\t\t\t\t|          Exit Press 0             |\n";
    cout<< "\t\t\t\t\t\t|___________________________________|\n";
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
        printf("\n\n\t\t Your Choice is Wrong !! \n\t\t Try Again.....\n");
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
    system("color 30");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\3rd Semester\\Project work\\March2020.txt",ios::in);
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
    cout<<"\n\tPress 1/2/3 to Change Any Data: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\tInfected: ";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\tDeaths: ";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\tRecovered: ";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\3rd Semester\\Project work\\March2020.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\3rd Semester\\Project work\\March2020.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t __________________________________________\n";
    cout<< "\t\t\t\t\t\t|  Press Enter to Back to the Months List  |\n";
    cout<< "\t\t\t\t\t\t|__________________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void April_2020()
{
    system("cls");
    system("color B0");

    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\3rd Semester\\Project work\\April2020.txt",ios::in);
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
    cout<<"\n\tPress 1/2/3 to Change Any Data: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\tInfected: ";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\tDeaths: ";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\tRecovered: ";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\3rd Semester\\Project work\\April2020.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\3rd Semester\\Project work\\April2020.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t __________________________________________\n";
    cout<< "\t\t\t\t\t\t|  Press Enter to Back to the Months List  |\n";
    cout<< "\t\t\t\t\t\t|__________________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void May_2020()
{
    system("cls");
    system("color 5F");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\3rd Semester\\Project work\\May2020.txt",ios::in);
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
    cout<<"\n\tPress 1/2/3 to Change Any Data: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\tInfected: ";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\tDeaths: ";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\tRecovered: ";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\3rd Semester\\Project work\\May2020.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\3rd Semester\\Project work\\May2020.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t __________________________________________\n";
    cout<< "\t\t\t\t\t\t|  Press Enter to Back to the Months List  |\n";
    cout<< "\t\t\t\t\t\t|__________________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void June_2020()
{
    system("cls");
    system("color 61");

    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\3rd Semester\\Project work\\June2020.txt",ios::in);
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
    cout<<"\n\tPress 1/2/3 to Change Any Data: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\tInfected: ";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\tDeaths: ";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\tRecovered: ";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\3rd Semester\\Project work\\June2020.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\3rd Semester\\Project work\\June2020.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t __________________________________________\n";
    cout<< "\t\t\t\t\t\t|  Press Enter to Back to the Months List  |\n";
    cout<< "\t\t\t\t\t\t|__________________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void July_2020()
{
    system("cls");
    system("color 70");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\3rd Semester\\Project work\\July2020.txt",ios::in);
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
    cout<<"\n\tPress 1/2/3 to Change Any Data: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\tInfected: ";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\tDeaths: ";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\tRecovered: ";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\3rd Semester\\Project work\\July2020.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\3rd Semester\\Project work\\July2020.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t __________________________________________\n";
    cout<< "\t\t\t\t\t\t|  Press Enter to Back to the Months List  |\n";
    cout<< "\t\t\t\t\t\t|__________________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void August_2020()
{
    system("cls");
    system("color C0");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\3rd Semester\\Project work\\August2020.txt",ios::in);
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
    cout<<"\n\tPress 1/2/3 to Change Any Data: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\tInfected: ";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\tDeaths: ";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\tRecovered: ";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\3rd Semester\\Project work\\August2020.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\3rd Semester\\Project work\\August2020.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t __________________________________________\n";
    cout<< "\t\t\t\t\t\t|  Press Enter to Back to the Months List  |\n";
    cout<< "\t\t\t\t\t\t|__________________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void September_2020()
{
    system("cls");
    system("color 60");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\3rd Semester\\Project work\\September2020.txt",ios::in);
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
    cout<<"\n\tPress 1/2/3 to Change Any Data: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\tInfected: ";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\tDeaths: ";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\tRecovered: ";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\3rd Semester\\Project work\\September2020.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\3rd Semester\\Project work\\September2020.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t __________________________________________\n";
    cout<< "\t\t\t\t\t\t|  Press Enter to Back to the Months List  |\n";
    cout<< "\t\t\t\t\t\t|__________________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void October_2020()
{
    system("cls");
    system("color E0");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\3rd Semester\\Project work\\October2020.txt",ios::in);
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
    cout<<"\n\tPress 1/2/3 to Change Any Data: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\tInfected: ";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\tDeaths: ";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\tRecovered: ";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\3rd Semester\\Project work\\October2020.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\3rd Semester\\Project work\\October2020.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t __________________________________________\n";
    cout<< "\t\t\t\t\t\t|  Press Enter to Back to the Months List  |\n";
    cout<< "\t\t\t\t\t\t|__________________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void November_2020()
{
    system("cls");
    system("color 9F");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\3rd Semester\\Project work\\November2020.txt",ios::in);
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
    cout<<"\n\tPress 1/2/3 to Change Any Data: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\tInfected: ";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\tDeaths: ";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\tRecovered: ";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\3rd Semester\\Project work.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\3rd Semester\\Project work.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t __________________________________________\n";
    cout<< "\t\t\t\t\t\t|  Press Enter to Back to the Months List  |\n";
    cout<< "\t\t\t\t\t\t|__________________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void December_2020()
{
    system("cls");
    system("color 03");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\3rd Semester\\Project work\\December2020.txt",ios::in);
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
    cout<<"\n\tPress 1/2/3 to Change Any Data: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\tInfected: ";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\tDeaths: ";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\tRecovered: ";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\3rd Semester\\Project work\\December2020.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\3rd Semester\\Project work\\December2020.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t __________________________________________\n";
    cout<< "\t\t\t\t\t\t|  Press Enter to Back to the Months List  |\n";
    cout<< "\t\t\t\t\t\t|__________________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void January_2021()
{
    system("cls");
    system("color 04");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\3rd Semester\\Project work\\January2021.txt",ios::in);
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
    cout<<"\n\tPress 1/2/3 to Change Any Data: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\tInfected: ";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\tDeaths: ";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\tRecovered: ";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\3rd Semester\\Project work\\January2021.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\3rd Semester\\Project work\\January2021.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t __________________________________________\n";
    cout<< "\t\t\t\t\t\t|  Press Enter to Back to the Months List  |\n";
    cout<< "\t\t\t\t\t\t|__________________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void February_2021()
{
    system("cls");
    system("color 1F");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\3rd Semester\\Project work\\February2021.txt",ios::in);
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
    cout<<"\n\tPress 1/2/3 to Change Any Data: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\tInfected: ";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\tDeaths: ";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\tRecovered: ";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\3rd Semester\\Project work.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\3rd Semester\\Project work\\February2021.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t __________________________________________\n";
    cout<< "\t\t\t\t\t\t|  Press Enter to Back to the Months List  |\n";
    cout<< "\t\t\t\t\t\t|__________________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void March_2021()
{
    system("cls");
    system("color F0");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\3rd Semester\\Project work\\March2021.txt",ios::in);
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
    cout<<"\n\tPress 1/2/3 to Change Any Data: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\tInfected: ";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\tDeaths: ";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\tRecovered: ";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\3rd Semester\\Project work\\March2021.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\3rd Semester\\Project work\\March2021.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t __________________________________________\n";
    cout<< "\t\t\t\t\t\t|  Press Enter to Back to the Months List  |\n";
    cout<< "\t\t\t\t\t\t|__________________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void April_2021()
{
    system("cls");
    system("color DF");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\3rd Semester\\Project work\\April2021.txt",ios::in);
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
    cout<<"\n\tPress 1/2/3 to Change Any Data: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\tInfected: ";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\tDeaths: ";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\tRecovered: ";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\3rd Semester\\Project work\\April2021.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\3rd Semester\\Project work\\April2021.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t __________________________________________\n";
    cout<< "\t\t\t\t\t\t|  Press Enter to Back to the Months List  |\n";
    cout<< "\t\t\t\t\t\t|__________________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void May_2021()
{
    system("cls");
    system("color 9F");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\3rd Semester\\Project work\\May2021.txt",ios::in);
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
    cout<<"\n\tPress 1/2/3 to Change Any Data: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\tInfected: ";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\tDeaths: ";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\tRecovered: ";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\3rd Semester\\Project work\\May2021.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\3rd Semester\\Project work\\May2021.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t __________________________________________\n";
    cout<< "\t\t\t\t\t\t|  Press Enter to Back to the Months List  |\n";
    cout<< "\t\t\t\t\t\t|__________________________________________|\n";
    fflush(stdin);
    getchar();
    read.close();
    admin_Covid_Record();
}
void June_2021()
{
    system("cls");
    system("color E0");
    int n;
    string line1,line2,line3,line4,line5,line6,line7,line8,line9,line10,line11;
    fstream file;
    file.open("E:\\3rd Semester\\Project work\\June2021.txt",ios::in);
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
    cout<<"\n\tPress 1/2/3 to Change Any Data: ";
    cin>>n;
    cin.ignore();
    if(n==1)
    {
        cout<< "\tInfected: ";
        getline(cin,line3);
    }
    if(n==2)
    {
        cout<< "\tDeaths: ";
        getline(cin,line7);
    }
    if(n==3)
    {
        cout<< "\tRecovered: ";
        getline(cin,line11);
    }
    ofstream file2;
    file2.open("E:\\3rd Semester\\Project work\\June2021.txt");
    file2<<line1<<endl<<line2<<endl<<line3<<endl<<line4<<endl<<line5<<endl<<line6<<endl<<line7<<endl<<line8<<endl<<line9<<endl<<line10<<endl<<line11<<endl;
    file2.close();
    cout<<endl<<endl;
    string name;
    ifstream read("E:\\3rd Semester\\Project work\\June2021.txt");
    while(getline(read,name))
    {
        cout<< "\t";
        cout<<name<<endl;
    }
    cout<< "\n\t\t\t\t\t\t __________________________________________\n";
    cout<< "\t\t\t\t\t\t|  Press Enter to Back to the Months List  |\n";
    cout<< "\t\t\t\t\t\t|__________________________________________|\n";
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
    fstream file("E:\\3rd Semester\\Project work\\March2020.txt");
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
    fstream file("E:\\3rd Semester\\Project work\\April2020.txt");
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
    system("color 5F");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\3rd Semester\\Project work\\May2020.txt");
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
    system("color 61");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\3rd Semester\\Project work\\June2020.txt");
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
    fstream file("E:\\3rd Semester\\Project work\\July2020.txt");
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
    fstream file("E:\\3rd Semester\\Project work\\August2020.txt");
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
    fstream file("E:\\3rd Semester\\Project work\\September2020.txt");
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
    fstream file("E:\\3rd Semester\\Project work\\October2020.txt");
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
    system("color 9F");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\3rd Semester\\Project work\\November2020.txt");
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
    fstream file("E:\\3rd Semester\\Project work\\December2020.txt");
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
    fstream file("E:\\3rd Semester\\Project work\\January2021.txt");
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
    system("color 1F");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\3rd Semester\\Project work\\February2021.txt");
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
    fstream file("E:\\3rd Semester\\Project work\\March2021.txt");
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
    system("color DF");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\3rd Semester\\Project work\\April2021.txt");
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
    system("color 9F");
    char a1[1000],a2[1000],b1[1000],b2[1000],b3[1000],b4[2000],c1[100],c2[100],c3[100],c4[100];
    fstream file("E:\\3rd Semester\\Project work\\May2021.txt");
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
    fstream file("E:\\3rd Semester\\Project work\\June2021.txt");
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
    cout<< "\n\n\n\t\t\t\t Press 1 to Back to the Months List !!\n";
    cout<< "\t\t\t\t Press 2 to Back to the National Information Panel !!\n";
    cout<< "\t\t\t\t Press Key: ";
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
        printf("\n\n\t\t Your Choice is Wrong !! \n\t\t Try Again.....\n");
        fflush(stdin);
        getchar();
        system("cls");
        rtrn();
    }
    }
}
int main()
{
    cout<< "\n\n\n\n\n\t\t\t\t***********************************************************************\n\t\t\t";
    cout<< "\n\t\t\t\t\t~~~~~~~~~~~~  RECORDS of PANDEMIC COVID-19  ~~~~~~~~~~~~\n\t\t\t\t\t";
    cout<< "\n\t\t\t\t***********************************************************************\n";
    system("color 9F");
    loadingBar();
    Instraction();
}
void Instraction()
{
    system("cls");
    system("color DF");

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
    cout<<"                | | \t\t****BE CAREFUL !! WEAR A MASK****  \t\t| |"<<endl;
    cout<<"                | |                                                             | |"<<endl;
    cout<<"                | |                                                             | |"<<endl;
    cout<<"                | |_____________________________________________________________| |"<<endl;
    cout<<"                |_________________________________________________________________|"<<endl;
    cout<<"                                   )__________|__|__________("<<endl;
    cout<<"                                  |            ||            |"<<endl;
    cout<<"                                  |____________||____________|"<<endl;
    cout<<"                                    ),-----.(      ),-----.("<<endl;
    cout<<"                                  .'   ==.   \\    /  .==    `."<<endl;
    cout<<"                                 /            )  (            \\"<<endl;
    cout<<"                                 `==========='    `==========='  "<<endl;
    cout<<"\n\n\n\n\n";
    system("pause");
    main_menu();
}
