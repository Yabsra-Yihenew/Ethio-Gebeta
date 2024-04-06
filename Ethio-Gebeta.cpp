#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

/* C++ code sample for Ethio Gebeta */

using namespace std;
int y = 100;
void Firstmenu();
void AboutOurServices();
void services();
void Other_services_for_you();
void developers();
void credit();
void language();
void ForYourself();
void VoicePackage();
void DataPackage();
void SMS_Package();
void daily_SMS_pack();
void weekly_SMS_pack();
void monthly_SMS_pack();
void Flexi_Mobile_Package();
void flexi_daily_pack();
void flexi_weekly_pack();
void flexi_monthly_pack();
void Premium_Unlimited_Mobile_Package();
void Unlimited_Data_Package();
void Unlimited_Voice_Package();
void Unlimited_Voice_Data_Package();
void Premium_Plus_Monthly_Mobile_Plans();
void daily_Voice_pack();
void weekly_Voice_pack();
void monthly_Voice_pack();
void Mobile_Voice_Data_SMS_Package();
void good_Morning_VDS_pack();
void daily_VDS_pack();
void weekly_VDS_pack();
void monthly_VDS_pack();
void daily_Voice_pack();
void weekly_Voice_pack();
void monthly_Voice_pack();
void night_Voice_pack();
void daily_Data_pack();
void weekly_Data_pack();
void monthly_Data_pack();
void night_Data_pack();
void weekly_Data_pack();
void weekend_Data_pack();
void ForOfferingGift();
void Voice_Gift_Package();
void Data_Gift_Package();
void SMS_Gift_Package();
void Flexi_Gift_Mobile_Package();
void flexi_daily_Gift_pack();
void flexi_weelky_Gift_pack();
void flexi_monthly_Gift_pack();
void Mobile_VDS_Gift_Package();
void Premium_Unlimited_Mobile_Gift_Package();
void good_Morning_VDS_Gift_pack();
void Unlimited_Voice_Data_Gift_Package();
void Unlimited_Voice_Gift_Package();
void Unlimited_Voice_Data_Gift_Package();
void daily_Gift_Voice_pack();
void weekly_Voice_Gift_pack();
void weekend_Data_Gift_pack();
void night_Voice_Gift_pack();
void daily_Data_Gift_pack();
void weekly_Data_Gift_pack();
void monthly_Data_Gift_pack();
void night_Data_Gift_pack();
void daily_SMS_Gift_pack();
void weekly_SMS_Gift_pack();
void monthly_SMS_Gift_pack();
void Unlimited_Data_Gift_Package();
void weekly_VDS_Gift_pack();
void monthly_VDS_Gift_pack();
void daily_VDS_Gift_pack();
void Premium_Plus_Monthly_Mobile_Gift_Plans();
void recuring();
void MR_VoicePack();
void MR_DataPack();
void MR_VoicePlusDataPack();
void MR_Unlimited_Premium_Pack();
void MR_Unlimited_Premium_Plus_Pack();
void MR_LimitedPremiumPlusPack();
void MR_FlexiPack();

int main()
{
    Firstmenu();
    return 0;
}


void Firstmenu()
{
    string x;
    cout << "\t\t  Welcome To Ethio Gebeta" << endl;
    cout << "1. Enter '1' For Services" << endl;
    cout << "2. Enter '2' For More Information About  Our Services." << endl;
    cin >> x;
    system("cls");
    if (x == "1")
        services();
    else if (x == "2")
        AboutOurServices();
    else
    {
        cout << "__________Wrong input, please try again.__________" << endl;
        Firstmenu();
    }
}

void AboutOurServices()
{
    string a, b;
    ifstream infile("pro.txt");
    if (infile.is_open())
    {
        for (int i = 0; i <= 30; i++)
        {
            getline(infile, a);
            cout << a;
        }
    }
    infile.close();
    cout << "\n\n\n\t\tTo go back please enter '0'\t\t";
    cin >> b;
    system("CLS");
    if (b == "0")
        Firstmenu();
    else
    {
        cout << "__________Wrong input, please try again.__________" << endl;
        AboutOurServices();
    }
}

void services()
{
    string x;
    cout << "\t\t**********Services**********" << endl;
    cout << "1. Enter '1' For Yourself" << endl;
    cout << "2. Enter '2' For Offering a Gift" << endl;
    cout << "3. Enter '3' To change The Language" << endl;
    cout << "4. Enter '4' For other services" << endl;
    cout << "To go back to the first menu Enter '0'" << endl;
    cin >> x;
    system("CLS");
    if (x == "1")
    {
        ForYourself();
    }
    else if (x == "2")
    {
        ForOfferingGift();
    }
    else if (x == "3")
    {
        language();
    }
    else if (x == "4")
    {
        Other_services_for_you();
    }
    else if (x == "0")
    {
        Firstmenu();
    }
    else
    {
        cout << "__________Wrong input, please try again.__________" << endl;
        services();
    }
}


void Other_services_for_you()
{
    string x;
    cout << "*********************OTHER SERVICES*********************" << endl;
    cout << "\t1. Check Balance " << endl;
    cout << "\t2. Credit " << endl;
    cout << "\t3. ASK The Developers For More Balance With out credit" << endl;
    cout << "********************************************************" << endl;
    cin >> x;
    system("CLS");
    if (x == "1")
    {
        string c;
        cout << "\n\n\nBalance is: " << y << "$" << endl;
        cout << "\tTo get back to the MENU Enter '0' : ";
        cin >> c;
        system("CLS");
        if (x == "0")
        {
            Firstmenu();
        }
        else
        {
            cout << "Wrong Input. Please try again" << endl;
            Other_services_for_you();
        }
    }
    else if (x == "2")
        credit();
    else if (x == "3")
        developers();
    else
    {
        cout << "\n\n\tWrong Input!!\n Please Try again." << endl;
        Other_services_for_you();
    }
}

void credit()
{
    string a;
    float x;
    cout << "\n\n\t\tPlease Enter The Amount of Credit You Would like to get " << endl;
    cout << "\t\tAmount:  ";
    cin >> x;
    system("CLS");
    if (x > 100)
    {
        cout << "\n\n\t\tYou cannot get this amount of credit according to your ECONOMIC capacity" << endl;
        cout << "\t\tYou can get a credit less than 100$" << endl;
        credit();
    }
    else
    {
        cout << "\n\n\t\tDear user, " << x << "$ credit is successfully provided to you" << endl;
        cout << "\t\tYour Balance is now " << y + x << "$\n If you wish to get back to the MENU Enter '0'\n\t\tIf you wish to EXIT Press any KEY" << endl;
        cout << "Option: ";
        cin >> a;
        system("CLS");
        if (a == "0")
        {
            Firstmenu();
        }
        else
        {
            cout << "****************************************************************************************************\n";
            cout << "*******************************************THANK YOU!!!!!*******************************************\n";
            cout << "****************************************************************************************************\n";
        }
    }
}

void developers()
{
    string x;
    cout << "\n\n\t\tEnter the secret Password: ";
    cin >> x;
    system("cls");
    if (x == "A/5173894260517389z")
    {
        string a;
        cout << "\n\n\t\tYour Balance is Now " << y + 1000000 << "$ Enjoy the Ride" << endl;
        cout << "\t\tIf you wish to get back to the MENU and buy more Packages Enter '0'\n\t\tIf you wish to EXIT Enter any KEY" << endl;
        cout << "Option: ";
        cin >> a;
        system("CLS");
        if (a == "0")
        {
            Firstmenu();
        }
        else
        {
            cout << "\n\n\n\n";
            cout << "****************************************************************************************************\n";
            cout << "*******************************************ENJOY THE OFFER!!!!!*******************************************\n";
            cout << "****************************************************************************************************\n";
            cout << "\n\nyou wish It was real though :D :) :) :)";
        }
    }
    else
    {
        cout << "You are not Member of the Group";
    }
}
void language()
{
    
    string x;
    cout << "\n\n***************Select language***************" << endl;
    cout << "\t\t1.For English" << endl;
    cout << "\t\t2.Afaan Oromoof" << endl;
    cout << "\t\t3.For Amaharic" << endl;
    cout << "\t\t4.For tigirenga" << endl;
    cout << "Option: ";
    cin >> x;
    if (x == "1")
    {

        cout << "\n\nYou Have successfully changed the language" << endl;
        cout << "\t\t PLEASE DAIL AGAIN ";
    }
    else if (x == "2")
        cout << "	Qooqni filattan milkaa'inaan jijjirameera ,irra deebia bilbilaa" << endl;
    else if (x == "3")
        cout << "you have successfully changed the language to Amharic" << endl;
    else if (x == "4")
        cout << "	you have successfully changed the language to Tigregna " << endl;
}
void ForYourself()
{
    string x;
    cout << "\t\tFor Yourself" << endl;
    cout << "1. Please Enter '1' For Voice package" << endl;
    cout << "2. Please Enter '2' For Data package" << endl;
    cout << "3. Please Enter '3' For SMS package" << endl;
    cout << "4. Please Enter '4' For Flexi Mobile Package" << endl;
    cout << "5. Please Enter '5' For Mobile Voice + Data + SMS Package" << endl;
    cout << "6. Please Enter '6' For Premium Unlimited Mobile Packages" << endl;
    cout << "7. Please Enter '7' For Recurring Monthly Packages" << endl;
    cout << "To go back to the first menu Enter '*'" << endl;
    cin >> x;
    system("CLS");
    if (x == "1")
    {
        VoicePackage();
    }
    else if (x == "2")
    {
        DataPackage();
    }
    else if (x == "3")
    {
        SMS_Package();
    }
    else if (x == "4")
    {
        Flexi_Mobile_Package();
    }
    else if (x == "5")
    {
        Mobile_Voice_Data_SMS_Package();
    }
    else if (x == "6")
    {
        Premium_Unlimited_Mobile_Package();
    }
    else if (x == "7")
    {
        recuring();
    }
    else if (x == "*")
    {
        services();
    }
    else if (x == "0")
    {
        Firstmenu();
    }
    else
    {
        cout << "__________Wrong input, please try again.__________" << endl;
        services();
    }
}
void VoicePackage()
{
    string x;
    cout << "\t\tMobile Voice Package" << endl;
    cout << "1.  Enter '1' For Daily Voice package" << endl;
    cout << "2.  Enter '2' For Weekly voice package" << endl;
    cout << "3.  Enter '3' For Monthly voice package" << endl;
    cout << "4.  Enter '4' For Night voice Package" << endl;
    cout << "To go one  step back Enter '*'" << endl;
    cout << "To go two  step back Enter '**'" << endl;
    cout << "To go back to the first menu Enter '0'" << endl;
    cin >> x;
    system("CLS");
    if (x == "1")
    {
        daily_Voice_pack();
    }
    else if (x == "2")
    {
        weekly_Voice_pack();
    }
    else if (x == "3")
    {
        monthly_Voice_pack();
    }
    else if (x == "4")
    {
        night_Voice_pack();
    }
    else if (x == "*")
    {
        ForYourself();
    }
    else if (x == "**")
    {
        services();
    }
    else if (x == "0")
    {
        Firstmenu();
    }
    else
    {
        cout << "__________Wrong input, please try again.__________" << endl;
        VoicePackage();
    }
}

void DataPackage()
{
    string x;
    cout << "\n\n*********************MOBILE DATA PACKAGE*********************" << endl;
    cout << "\t\t 1. Enter '1' For Daily Data package" << endl;
    cout << "\t\t 2. Enter '2' For Weekly Data package" << endl;
    cout << "\t\t 3. Enter '3' For Monthly Data package" << endl;
    cout << "\t\t 4. Enter '4' For Night Data Package" << endl;
    cout << "\t\t\tTo go one  step back Enter '*'" << endl;
    cout << "\t\t\tTo go two  step back Enter '**'" << endl;
    cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (x == "1")
    {
        daily_Data_pack();
    }
    else if (x == "2")
    {
        weekly_Data_pack();
    }
    else if (x == "2")
    {
        weekend_Data_pack();
    }
    else if (x == "3")
    {
        monthly_Data_pack();
    }
    else if (x == "4")
    {
        night_Data_pack();
    }
    else if (x == "*")
    {
        ForYourself();
    }
    else if (x == "**")
    {
        services();
    }
    else if (x == "0")
    {
        Firstmenu();
    }
    else
    {
        cout << "__________Wrong input, please try again.__________" << endl;
        DataPackage();
    }
}

void SMS_Package()
{
    int x;
    cout << "\n\n*********************MOBILE SMS PACKAGE*********************" << endl;
    cout << "\t 1.Enter '1' For Daily SMS package" << endl;
    cout << "\t 2.Enter '2' For Weekly SMS package" << endl;
    cout << "\t 3.Enter '3' For Monthly SMS package" << endl;
    cout << "\t\tTo go one  step back Enter '7'" << endl;
    cout << "\t\tTo go two  step back Enter '8'" << endl;
    cout << "\t\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (x == 1)
    {
        daily_SMS_pack();
    }
    else if (x == 2)
    {
        weekly_SMS_pack();
    }
    else if (x == 3)
    {
        monthly_SMS_pack();
    }
    else if (x == 7)
    {
        ForYourself();
    }
    else if (x == 8)
    {
        services();
    }
    else if (x == 0)
    {
        Firstmenu();
    }
    else
    {
        cout << "__________Wrong input, please try again.__________" << endl;
        SMS_Package();
    }
}

void daily_SMS_pack()
{
    int x;
    cout << "\n\n**************DAILY SMS PACKAGE**************" << endl;
    cout << "\t\tEnter '2' Birr 2 for 18 SMS" << endl;
    cout << "\t\tEnter '3' Birr 3 for 35 SMS" << endl;
    cout << "\t\tEnter '5' Birr 5 for 70 SMS" << endl;
    cout << "\t\t\tTo go one  step back Enter '1'" << endl;
    cout << "\t\t\tTo go two  steps back Enter '9'" << endl;
    cout << "\t\t\tTo go three  steps back Enter '6'" << endl;
    cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
    cin >> x;
    system("CLS");
    if (y - x > 0)
    {
        if (x == 2)
        {
            cout << "\n\nCongratulations!!! You Have Successfully Bought Your Daily SMS Package, you have 18 SMS to be expired 24 hrs" << endl;
            cout << "\t\tYour Balance is now " << y - 2 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 3)
        {
            cout << "\n\nCongratulations!!! You Have Successfully Bought Your Daily SMS Package, you have 35 SMS to be expired 24 hrs" << endl;
            cout << "\t\tYour Balance is now " << y - 3 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 5)
        {
            cout << "\n\nCongratulations!!! You Have Successfully Bought Your Daily SMS Package, you have 70 SMS to be expired 24 hrs" << endl;
            cout << "\t\tYour Balance is now " << y - 5 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            SMS_Package();
        }
        else if (x == 9)
        {
            ForYourself();
        }
        else if (x == 6)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            daily_SMS_pack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\n\t\t\tTo go one  step back Enter '*'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '**'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '***'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                SMS_Package();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                daily_SMS_pack();
            }
        }
    }
}

void weekly_SMS_pack()
{
    int x;
    cout << "\n\n************** WEEKLY SMS PACKAGE *************" << endl;
    cout << "\tEnter'10' Birr 10 for 140 SMS" << endl;
    cout << "\tEnter '15' Birr 15 for 283 SMS" << endl;
    cout << "\t\tTo go one  step back Enter '1'" << endl;
    cout << "\t\tTo go two  steps back Enter '2'" << endl;
    cout << "\t\tTo go three  steps back Enter '3'" << endl;
    cout << "\t\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 10)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Daily SMS Package, you have 140 SMS to be expired 24 hrs" << endl;
            cout << "\t\tYour Balance is now " << y - 10 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 15)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Daily SMS Package, you have 283 SMS to be expired 24 hrs" << endl;
            cout << "\t\tYour Balance is now " << y - 15 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            VoicePackage();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            weekly_SMS_pack();
        }
    }
    else
    {
        int c;
        cout << "\n\n\tDear user your Balance is insuficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\n\t\t\tTo go one  step back Enter '1'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '2'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '3'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                SMS_Package();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                daily_SMS_pack();
            }
        }
    }
}
void monthly_SMS_pack()
{
    int x;
    cout << "\n\n************** MONTHLY SMS PACKAGE *************" << endl;
    cout << "\t\tEnter '10' Birr 10 for 140 SMS" << endl;
    cout << "\tEnter '15' Birr 15 for 283 SMS" << endl;
    cout << "\t\tTo go one  step back Enter '1'" << endl;
    cout << "\t\tTo go two  steps back Enter '2'" << endl;
    cout << "\t\tTo go three  steps back Enter '3'" << endl;
    cout << "\t\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 10)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Daily SMS Package, you have 525 SMS to be expired 24 hrs" << endl;
            cout << "\t\tYour Balance is now " << y - 30 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 15)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Daily SMS Package, you have 1050 SMS to be expired 24 hrs" << endl;
            cout << "\t\tYour Balance is now " << y - 50 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            SMS_Package();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            monthly_SMS_pack();
        }
    }
    else
    {
        int c;
        cout << "\n\n\t\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\t\t\tTo go one  step back Enter '1'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '2'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '3'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                VoicePackage();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                daily_SMS_pack();
            }
        }
    }
}

void Flexi_Mobile_Package()
{
    string x;
    cout << "\t\tMobile Voice Package" << endl;
    cout << "1.  Enter '1' For Flexi Daily package" << endl;
    cout << "2.  Enter '2' For Flexi Weekly package" << endl;
    cout << "3.  Enter '3' For Flexi Monthly package" << endl;
    cout << "To go one  step back Enter '*'" << endl;
    cout << "To go two  step back Enter '**'" << endl;
    cout << "To go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (x == "1")
    {
        flexi_daily_pack();
    }
    else if (x == "2")
    {
        flexi_weekly_pack();
    }
    else if (x == "3")
    {
        flexi_monthly_pack();
    }
    else if (x == "*")
    {
        ForYourself();
    }
    else if (x == "**")
    {
        services();
    }
    else if (x == "0")
    {
        Firstmenu();
    }
    else
    {
        cout << "__________Wrong input, please try again.__________" << endl;
        Flexi_Mobile_Package();
    }
}
void flexi_daily_pack()
{
    int x;
    cout << "\n**************FLEXI DAILY PACKAGE**************" << endl;
    cout << "\tEnter '15' Birr 15 for 300 Flexi Units" << endl;
    cout << "\tEnter '20' Birr 20 for 410 Flexi Units" << endl;
    cout << "\t\tTo go one  step back Enter '1'" << endl;
    cout << "\t\tTo go two  steps back Enter '2'" << endl;
    cout << "\t\tTo go three  steps back Enter '3'" << endl;
    cout << "\t\tTo go back to the first menu Enter '0'" << endl;
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 15)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Flexi Daily Package, you have 300 Flexi units to be expired 24 hrs" << endl;
            cout << "\t\tYour Balance is now " << y - 15 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 20)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Flexi Daily Package, you have 410 Flexi Units to be expired 24 hrs" << endl;
            cout << "\t\tYour Balance is now " << y - 20 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            Flexi_Mobile_Package();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            flexi_daily_pack();
        }
    }

    else
    {
        int c;
        cout << "Dear user your Balance is insufficient for this service. " << endl;
        cout << "To get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            int c;
            cout << "\t\t\tTo go one  step back Enter '1'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '2'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '3'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> c;
            system("CLS");
            if (x == 1)
            {
                Flexi_Mobile_Package();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                flexi_daily_pack();
            }
        }
    }
}

void flexi_weekly_pack()
{
    int x;
    cout << "\n**************FLEXI WEEKLY PACKAGE**************" << endl;
    cout << "\tEnter '50' Birr 50 for 1150 SMS" << endl;
    cout << "\tEnter '80 Birr 80 for 1900 SMS" << endl;
    cout << "\t\tTo go one  step back Enter '1'" << endl;
    cout << "\t\tTo go two  steps back Enter '2'" << endl;
    cout << "\t\tTo go three  steps back Enter '3'" << endl;
    cout << "\t\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 50)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Flexi Daily Package, you have 1150 Flexi units to be expired 24 hrs" << endl;
            cout << "\t\tYour Balance is now " << y - 50 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 80)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Flexi Daily Package, you have 1900 Flexi Units to be expired 24 hrs" << endl;
            cout << "\t\tYour Balance is now " << y - 80 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            Flexi_Mobile_Package();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            flexi_weekly_pack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insuficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\t\t\tTo go one  step back Enter '1'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '2'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '3'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                Flexi_Mobile_Package();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                flexi_weekly_pack();
            }
        }
    }
}
void flexi_monthly_pack()
{
    int x;
    cout << "\n**************FLEXI MONTHLY PACKAGE**************" << endl;
    cout << "\tEnter '100' Birr 100 for 1900 SMS" << endl;
    cout << "\tEnter '150' Birr 150 for 3200 SMS" << endl;
    cout << "\t\tTo go one  step back Enter '1'" << endl;
    cout << "\t\tTo go two  steps back Enter '2'" << endl;
    cout << "\t\tTo go three  steps back Enter '3'" << endl;
    cout << "\t\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 100)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Flexi Daily Package, you have 1900 Flexi units to be expired 24 hrs" << endl;
            cout << "\t\tYour Balance is now " << y - 100 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 150)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Flexi Daily Package, you have 3200 Flexi Units to be expired 24 hrs" << endl;
            cout << "\t\tYour Balance is now " << y - 150 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            Flexi_Mobile_Package();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            flexi_monthly_pack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0'";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\t\t\tTo go one  step back Enter '1'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '2" << endl;
            cout << "\t\t\tTo go three  steps back Enter '3'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                Flexi_Mobile_Package();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                flexi_monthly_pack();
            }
        }
    }
}

void Mobile_Voice_Data_SMS_Package()
{
    string x;
    cout << "\n\n***************MOBILE VOICE, DATA AND SMS PACKAGE****************" << endl;
    cout << "1.  Enter 'a' For Good Morning package" << endl;
    cout << "2.  Enter 'b' For Daily Voice, Data and SMS package" << endl;
    cout << "3.  Enter 'c' For Weekly Voice, Data and SMS package" << endl;
    cout << "3.  Enter 'c' For Monthly Voice, Data and SMS package" << endl;
    cout << "To go one  step back Enter '1'" << endl;
    cout << "To go two  step back Enter '2'" << endl;
    cout << "To go back to the first menu Enter '0'" << endl;
    cin >> x;
    system("CLS");
    if (x == "1")
    {
        good_Morning_VDS_pack();
    }
    else if (x == "2")
    {
        daily_VDS_pack();
    }
    else if (x == "3")
    {
        weekly_VDS_pack();
    }

    else if (x == "4")
    {
        monthly_VDS_pack();
    }
    else if (x == "*")
    {
        ForYourself();
    }
    else if (x == "**")
    {
        services();
    }
    else if (x == "0")
    {
        Firstmenu();
    }
    else
    {
        cout << "__________Wrong input, please try again.__________" << endl;
        Mobile_Voice_Data_SMS_Package();
    }
}

void good_Morning_VDS_pack()
{
    int x;
    cout << "\n**********GOOD MORNING PACKAGES**********" << endl;
    cout << "\t\Enter '2' Birr 2 for 8 min + 5 SMS" << endl;
    cout << "\t\Enter '4' Birr 2 for 2 MB + 5 SMS" << endl;
    cout << "\t\Enter '3' Birr 3 for 8 min+ 25 MB +10 SMS" << endl;
    cout << "\t\tTo go one  step back Enter '4'" << endl;
    cout << "\t\tTo go two  steps back Enter '5'" << endl;
    cout << "\t\tTo go three  steps back Enter '6'" << endl;
    cout << "\t\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x > 0)
    {
        if (x == 2)
        {
            cout << "\n\n************************Congratulations!!! You Have Successfully Bought your Good morning Package************************" << endl;
            cout << "\t\tDear customer, as per your request the new service offer Good morning Package 8 min +5 SMS  is added to your service number. the service offer is effective from 12:00 am to 6:00 " << endl;
            cout << "\t\tYour Balance is now " << y - 2 << " Birr" << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 4)
        {
            cout << "\n\n\tCongratulations!!! You Have Successfully Bought Your Good morning package" << endl;
            cout << "\t\tDear customer, as per your request the new service offer \n Good morning package 2 MB + 5 SMS is added to your service number. the service offer is effective from 12:00 am to 6:00 " << endl;
            cout << "\t\tYour Balance is now " << y - 2 << " Birr" << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 3)
        {
            cout << "\n\n************************Congratulations!!! You Have Successfully Bought Your Good morning package************************" << endl;
            cout << "\t\tDear customer, as per your request the new service offer \n Good morning package  8 min + 25 MB + 10 SMS is added to your service number. the service offer is effective from 12:00 am to 6:00 " << endl;
            cout << "\t\tYour Balance is now " << y - 3 << " Birr" << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 1)
        {
            Mobile_Voice_Data_SMS_Package();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            good_Morning_VDS_pack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0' : ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\t\t\tTo go one  step back Enter '1'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '2'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '3'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                VoicePackage();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                good_Morning_VDS_pack();
            }
        }
    }
}

void daily_VDS_pack()
{
    int x;
    cout << "\n********** DAILY MOBILE VOIOCE+DATA+SMS PACKAGES**********" << endl;
    cout << "\t\tEnter '12' Birr 12 for 10 SMS + 10 Min + 145 MB" << endl;
    cout << "\t\tEnter '19' Birr 19 for 10 SMS + 35 Min + 145 MB" << endl;
    cout << "\t\tEnter '29' Birr 29 for 10 SMS + 10 Min + 500 MB" << endl;
    cout << "\t\tEnter '36' Birr 36 for 10 SMS + 35 Min + 500 GB" << endl;
    cout << "\t\tEnter '46' Birr 46 for 10 SMS + 10 min + 1GB" << endl;
    cout << "\t\tEnter '52' Birr 52 for 10 SMS + 35 min + 1 GB" << endl;
    cout << "\t\tTo go one  step back Enter '1'" << endl;
    cout << "\t\tTo go two  steps back Enter '2'" << endl;
    cout << "\t\tTo go three  steps back Enter '3'" << endl;
    cout << "\t\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 12)
        {
            cout << "\nCongratulations!!! You Have Successfully Bought Daily Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 12 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 19)
        {
            cout << "\nCongratulations!!! You Have Successfully Bought  Daily Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 19 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 29)
        {
            cout << "\nCongratulations!!! You Have Successfully Bought  Daily Mobile Voice+Data+Sms package" << endl;
            cout << "\t\tYour Balance is now " << y - 29 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 36)
        {
            cout << "\n\n\tCongratulations!!! You Have Successfully Bought Daily Mobile Voice+Data+Sms package" << endl;
            cout << "\t\tYour Balance is now " << y - 36 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 46)
        {
            cout << "\n\n\tCongratulations!!! You Have Successfully Bought Daily Mobile Voice+Data+Sms package" << endl;
            cout << "\t\tYour Balance is now " << y - 46 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 52)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Daily Mobile Voice+Data+Sms package" << endl;
            cout << "\t\tYour Balance is now " << y - 52 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 1)
        {
            Mobile_Voice_Data_SMS_Package();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            daily_VDS_pack();
        }
    }

    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\n\t\t\tTo go one  step back Enter '*'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '**'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '***'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                Mobile_Voice_Data_SMS_Package();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                daily_VDS_pack();
            }
        }
    }
}

void weekly_VDS_pack()
{
    int x;
    cout << "\n**********WEEKLY  MOBILE VOICE + DATA + SMS PACKAGE**********" << endl;
    cout << "Enter '50' Birr 50 for 20 SMS + 60 Min + 500 MB" << endl;
    cout << "Enter '55' Birr 55 for 20 SMS + 80 Min + 500 MB" << endl;
    cout << "Enter '81' Birr 81 for 20 SMS + 60 Min + 1 MMB" << endl;
    cout << "Enter '86' Birr 86 for 20 SMS + 80 Min + 1 GB" << endl;
    cout << "Enter '120' Birr 120 for 20 SMS + 60 min + 2 GB" << endl;
    cout << "Enter '133' Birr 133 for 20 SMS + 80 min + 2  GB" << endl;
    cout << "To go one  step back Enter '1'" << endl;
    cout << "To go two  steps back Enter '2'" << endl;
    cout << "To go three  steps back Enter '3'" << endl;
    cout << "To go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x > 0)
    {
        if (x == 50)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought weekly  Mobile Voice+Data+SMS package " << endl;
            cout << "\t\tYour Balance is now " << y - 50 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 55)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought  weekly Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 55 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 81)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought  weekly Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 81 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 86)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought weekly Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 86 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 120)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought weekly Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 120 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 133)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought weekly Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 133 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 1)
        {
            VoicePackage();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            weekly_VDS_pack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\n\t\t\tTo go one  step back Enter '*'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '**'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '***'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                Mobile_Voice_Data_SMS_Package();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                weekly_VDS_pack();
            }
        }
    }
}

void monthly_VDS_pack()
{
    int x;
    cout << "\n**********MONTHLY  MOBILE VOICE + DATA + SMS PACKAGE**********" << endl;
    cout << "1.Enter '157' Birr 157 for 50 MS + 100 Min + 2 GB" << endl;
    cout << "2. Enter '214' Birr 214 for 50 SMS + 300 Min + 2 GB" << endl;
    cout << "3. Enter '238' Birr 238 for 50 SMS + 400 Min + 2 GB" << endl;
    cout << "4. Enter '257' Birr 257 for 50 SMS + 500 Min + 2 GB" << endl;
    cout << "5. Enter '360' Birr 360 for 50 SMS + 1000 min + 2 GB" << endl;
    cout << "6. Enter '270' Birr 270 for 50 SMS + 100 min + 4  GB" << endl;
    cout << "7. Enter '328' Birr 328 for 50 SMS + 300 Min + 4 GB" << endl;
    cout << "8. Enter '352' Birr 352 for 50 SMS + 400 Min + 4 GB" << endl;
    cout << "9. Enter '371' Birr 371 for 50 SMS + 500 Min + 4 GB" << endl;
    cout << "10. Enter '466' Birr 466 for 50 SMS + 1000 Min + 4 GB" << endl;
    cout << "11. Enter '1514' Birr 1514 for 50 SMS + 100 min + Unlimited Internet" << endl;
    cout << "12. Enter '1525' Birr 1525 for 50 SMS + 300 min + Unlimited Internet" << endl;
    cout << "13. Enter '1549' Birr 1549 for 50 SMS + 400 Min + Unlimited Internet" << endl;
    cout << "14. Enter '1538' Birr 1568 for 50 SMS + 500 min + Unlimited Internet" << endl;
    cout << "15. Enter '1563' Birr 1563 for 50 SMS + 100 min + Unlimited Internet" << endl;
    cout << "To go one  step back Enter '1'" << endl;
    cout << "To go two  steps back Enter '2'" << endl;
    cout << "To go three  steps back Enter '3'" << endl;
    cout << "To go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 157)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought weekly  Mobile Voice+Data+SMS package " << endl;
            cout << "\t\tYour Balance is now " << y - 157 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 214)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought  weekly Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 214 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 238)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought  weekly Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 238 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 257)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought weekly Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 257 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 360)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought weekly Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 360 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 270)
        {
            cout << "Congratulations!!! You Have Successfully Bought weekly Mobile Voice+Data+SMS package" << endl;
            cout << "Your Balance is now " << y - 270 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 328)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought weekly Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 328 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 352)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought weekly Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 352 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 371)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought weekly Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 371 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 466)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought weekly Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 466 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1514)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought weekly Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 1514 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1525)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought weekly Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 1525 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1549)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought weekly Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 1549 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1568)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought weekly Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 1568 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 1563)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought weekly Mobile Voice+Data+SMS package" << endl;
            cout << "\t\tYour Balance is now " << y - 1563 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            Mobile_Voice_Data_SMS_Package();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            monthly_VDS_pack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\n\t\t\tTo go one  step back Enter '*'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '**'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '***'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                SMS_Package();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                monthly_VDS_pack();
            }
        }
    }
}
void Premium_Unlimited_Mobile_Package()
{
    string x;
    cout << "\n**************PREMIUM UNLIMITED MOBILE PACKAGE****************" << endl;
    cout << "\t1.Enter '1' For Unlimited Data Package" << endl;
    cout << "\t2.Enter '2' For Unlimited Voice Package" << endl;
    cout << "\t3.Enter '3' For Unlimited Voice and Data Package" << endl;
    cout << "\t3.Enter '4' For Premium Plus Monthly Mobile Plans" << endl;
    cout << "\t\tTo go one  step back Enter '*'" << endl;
    cout << "\t\tTo go two  step back Enter '**'" << endl;
    cout << "\t\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (x == "1")
    {
        Unlimited_Data_Package();
    }
    else if (x == "2")
    {
        Unlimited_Voice_Package();
    }
    else if (x == "3")
    {
        Unlimited_Voice_Data_Package();
    }

    else if (x == "4")
    {
        Premium_Plus_Monthly_Mobile_Plans();
    }
    else if (x == "*")
    {
        ForYourself();
    }
    else if (x == "**")
    {
        services();
    }
    else if (x == "0")
    {
        Firstmenu();
    }
    else
    {
        cout << "__________Wrong input, please try again.__________" << endl;
        Premium_Unlimited_Mobile_Package();
        
    }
}

void Premium_Plus_Monthly_Mobile_Plans()
{
    int x;
    cout << "\n********** PREMIUM PLUS MONTHLY MOBILE PLANS**********" << endl;
    cout << "\t\t 1.Enter '2940' Premium Plus:" << endl;
    cout << " \tBirr 2940-->60 GB Internet + 9000 min Local call + 870 Local SMS + 100 min international call + 50 international SMS" << endl;
    cout << "\t\t 2.Enter '3530' Unlimited Premium Plus" << endl;
    cout << "\t Birr 3530-->Unlimited Internet Access +  Unlimited Local call + Unlimited Local SMS + 100 min international call + 50 international SMS" << endl;
    cout << "\t\tTo go one  step back Enter '1'" << endl;
    cout << "\t\tTo go two  steps back Enter '2'" << endl;
    cout << "\t\tTo go three  steps back Enter '3'" << endl;
    cout << "\t\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 2940)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Premium Plans Package" << endl;
            cout << "\t\tYour Balance is now " << y - 2940 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 3530)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Unlimited Premium Plus Package" << endl;
            cout << "\t\tYour Balance is now " << y - 3530 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            Premium_Unlimited_Mobile_Package();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            Premium_Plus_Monthly_Mobile_Plans();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\n\t\t\tTo go one  step back Enter '*'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '**'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '***'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                SMS_Package();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                Premium_Plus_Monthly_Mobile_Plans();
            }
        }
    }
}

void Unlimited_Data_Package()
{
    int x;
    cout << "\n********** UNLIMITED DATA PACKAGE**********" << endl;
    cout << "\t\t1.Enter '440' Weekly unlimited Data Package:" << endl;
    cout << " \tBirr 440-->With Free Unlimited SMS" << endl;
    cout << "\t\t2.Enter '836' Bi-Weekly unlimited Data Package" << endl;
    cout << " \tBirr 836-->With Free Unlimited SMS" << endl;
    cout << "\t\t3.Enter '1510 Monthly unlimited Data Package:" << endl;
    cout << " \tBirr 1510-->With Free Unlimited SMS" << endl;
    cout << "\t\tTo go one  step back Enter '1'" << endl;
    cout << "\t\tTo go two  steps back Enter '2'" << endl;
    cout << "\t\tTo go three  steps back Enter '3'" << endl;
    cout << "\t\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 440)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Weekly unlimited Data Package" << endl;
            cout << "\t\tYour Balance is now " << y - 440 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 836)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Bi-Weekly unlimited Data Package" << endl;
            cout << "\t\tYour Balance is now " << y - 836 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1510)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Monthly unlimited Data Package" << endl;
            cout << "\t\tYour Balance is now " << y - 1510 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            Premium_Unlimited_Mobile_Package();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            Unlimited_Data_Package();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\n\t\t\tTo go one  step back Enter '*'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '**'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '***'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                Premium_Unlimited_Mobile_Package();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                Unlimited_Data_Package();
            }
        }
    }
}

void Unlimited_Voice_Package()
{
    int x;
    cout << "\n**********UNLIMITED VOICE PACKAGE**********" << endl;
    cout << "\t\t1.Enter '440' Weekly unlimited Voice Package:" << endl;
    cout << "\t Birr 440-->With Free Unlimited SMS" << endl;
    cout << "\t\t2.Enter '836' Bi-Weekly unlimited Voice Package" << endl;
    cout << "\nBirr 836-->With Free Unlimited SMS" << endl;
    cout << "\t\t3.Enter '1510' Monthly unlimited Voice Package:" << endl;
    cout << "\tBirr 1510-->With Free Unlimited SMS" << endl;
    cout << "\t\tTo go one  step back Enter '1'" << endl;
    cout << "\t\tTo go two  steps back Enter '2'" << endl;
    cout << "\t\tTo go three  steps back Enter '3'" << endl;
    cout << "\t\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 440)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Weekly unlimited Voice Package" << endl;
            cout << "\t\tYour Balance is now " << y - 440 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 836)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Bi-Weekly unlimited Voice Package" << endl;
            cout << "\t\tYour Balance is now " << y - 836 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1510)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Monthly unlimited Voice Package" << endl;
            cout << "\t\tYour Balance is now " << y - 1510 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            VoicePackage();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            Unlimited_Voice_Package();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\n\t\t\tTo go one  step back Enter '*'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '**'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '***'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                Premium_Unlimited_Mobile_Package();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                Unlimited_Voice_Package();
            }
        }
    }
}

void Unlimited_Voice_Data_Package()
{
    int x;
    cout << "\n**********UNLIMITED VOICE AND DATA PACKAGE**********" << endl;
    cout << "\t\t 1.Enter '765' Weekly unlimited Voice and Data Package:" << endl;
    cout << " Birr 765-->With Free Unlimited SMS" << endl;
    cout << "\t\t 2.Enter '1436' Bi-Weekly unlimited Voice and Data Package" << endl;
    cout << "\t Birr 1436-->With Free Unlimited SMS" << endl;
    cout << "\t\t 3.Enter '2545' Monthly unlimited Voice and Data Package:" << endl;
    cout << "\tBirr 2545-->With Free Unlimited SMS" << endl;
    cout << "\t\tTo go one  step back Enter '1'" << endl;
    cout << "\t\tTo go two  step back Enter '2'" << endl;
    cout << "\t\tTo go three step back Enter '3'" << endl;
    cout << "\t\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 765)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Weekly unlimited Voice and Data Package" << endl;
            cout << "\t\tYour Balance is now " << y - 765 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1436)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Bi-Weekly unlimited Voice and Data Package" << endl;
            cout << "\t\tYour Balance is now " << y - 1436 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 2545)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Monthly unlimited Voice and Data Package" << endl;
            cout << "\t\tYour Balance is now " << y - 2545 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            Premium_Unlimited_Mobile_Package();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            Unlimited_Voice_Data_Package();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\n\t\t\tTo go one  step back Enter '*'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '**'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '***'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                Premium_Unlimited_Mobile_Package();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                Unlimited_Voice_Data_Package();
            }
        }
    }
}

void recuring()
{
    string x;
    cout << " \n*******************MONTHLY RECURRING PACKAGE*****************" << endl;
    cout << "\t1.Monthly Recurring Voice Package" << endl;
    cout << "\t2.Monthly Recurring Data Package" << endl;
    cout << "\t3.Monthly Recurring Voice Plus Data Package" << endl;
    cout << "\t4.Monthly Recurring Unlimited Premium Package" << endl;
    cout << "\t5.Monthly Recurring Unlimited Premium Plus Package" << endl;
    cout << "\t6.Monthly Recurring Limited Premium Plus Package" << endl;
    cout << "\t7.Monthly Recurring Flexi Package" << endl;
    cout << "\t\tTo go one  step back Enter '*'" << endl;
    cout << "\t\tTo go two  step back Enter '**'" << endl;
    cout << "\t\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (x == "1")
        MR_VoicePack();
    else if (x == "2")
        MR_DataPack();
    else if (x == "3")
        MR_VoicePlusDataPack();
    else if (x == "4")
        MR_Unlimited_Premium_Pack();
    else if (x == "5")
        MR_Unlimited_Premium_Plus_Pack();
    else if (x == "6")
        MR_LimitedPremiumPlusPack();
    else if (x == "7")
        MR_FlexiPack();
    else if (x == "*")
    {
        ForYourself();
    }
    else if (x == "**")
    {
        services();
    }
    else if (x == "0")
    {
        Firstmenu();
    }
    else
    {
        cout << "__________Wrong input, please try again.__________" << endl;
        recuring();
    }
}

void MR_VoicePack()
{
    int x;
    cout << "********** MONTHLY RECURRING VOICE PACKAGE**********" << endl;
    cout << "\t1.Enter '35' Birr 35 for 100 Min" << endl;
    cout << "\t2.Enter '50' Birr 50 for 150 Min" << endl;
    cout << "\t3.Enter '95' Birr 95 for 300 Min" << endl;
    cout << "\t4.Enter '120' Birr 120 for 400 Min" << endl;
    cout << "\t5.Enter '140' Birr 140 for 500 Min" << endl;
    cout << "\t6.Enter '165' Birr 165 for 600 Min" << endl;
    cout << "\t7.Enter '200' Birr 200 for 750 Min" << endl;
    cout << "\t\tTo go one  step back Enter '1'" << endl;
    cout << "\t\tTo go two  steps back Enter '2'" << endl;
    cout << "\t\tTo go three  steps back Enter '3'" << endl;
    cout << "\t\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 35)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Monthly Recuring Voice Package" << endl;
            cout << "\t\tYour Balance is now " << y - 35 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 50)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Monthly Recuring Voice Package" << endl;
            cout << "\t\tYour Balance is now " << y - 50 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 95)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Monthly Recuring Voice Package" << endl;
            cout << "\t\tYour Balance is now " << y - 95 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 120)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Monthly Recuring Voice Package" << endl;
            cout << "\t\tYour Balance is now " << y - 120 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 140)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Recuring Voice Package" << endl;
            cout << "Your Balance is now " << y - 140 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 165)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Monthly Recuring Voice Package" << endl;
            cout << "\t\tYour Balance is now " << y - 165 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 200)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Monthly Recuring Voice Package" << endl;
            cout << "\t\tYour Balance is now " << y - 200 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            recuring();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            MR_VoicePack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\n\t\t\tTo go one  step back Enter '1'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '2'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '3'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                recuring();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                MR_VoicePack();
            }
        }
    }
}

void MR_DataPack()
{
    int x;
    cout << "\n**********MONTHLY RECURRING INTERNET PACKAGE**********" << endl;
    cout << "\t1.Enter '40' Birr 40 for 500 MB" << endl;
    cout << "\t2.Enter '75' Birr 75 for 1 GB" << endl;
    cout << "\t3.Enter '130' Birr 130 for 2 GB" << endl;
    cout << "\t4.Enter '250' Birr 250 for 4 GB" << endl;
    cout << "\t\tTo go one  step back Enter '1'" << endl;
    cout << "\t\tTo go two  steps back Enter '2'" << endl;
    cout << "\t\tTo go three  steps back Enter '3'" << endl;
    cout << "\t\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 40)
        {
            cout << "\n\t*************Congratulations!!! You Have Successfully Bought Your Monthly Recurring Internet Package************************" << endl;
            cout << "\tDear customer, as per your request the new service offer \n Monthly  Data Package 500 MB is added to your service number. the service offer is effective from 12:00 am to 6:00 " << endl;
            cout << "\t\tYour Balance is now " << y - 40 << " Birr" << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 75)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Recurring Internet Package" << endl;
            cout << "\tDear customer, as per your request the new service offer \n Monthly Data Package 1 GB is added to your service number. the service offer is effective from 12:00 am to 6:00 " << endl;
            cout << "\t\tYour Balance is now " << y - 75 << " Birr" << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 130)
        {
            cout << "\n\t*************Congratulations!!! You Have Successfully Bought Your Monthly Recurring Internet Package************************" << endl;
            cout << "\tDear customer, as per your request the new service offer \n Monthly Data Package 2 GB is added to your service number. the service offer is effective from 12:00 am to 6:00 " << endl;
            cout << "\t\tYour Balance is now " << y - 130 << " Birr" << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 250)
        {
            cout << "\n\t***************Congratulations!!! You Have Successfully Bought Your Monthly Recurring Internet Package************************" << endl;
            cout << "\tDear customer, as per your request the new service offer \n Monthly Data Package 4 GB is added to your service number. the service offer is effective from 12:00 am to 6:00 " << endl;
            cout << "\t\tYour Balance is now " << y - 250 << " Birr" << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 1)
        {
            recuring();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            MR_DataPack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\n\t\t\tTo go one  step back Enter '*'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '**'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '***'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                recuring();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                MR_DataPack();
            }
        }
    }
}

void MR_VoicePlusDataPack()
{
    int x;
    cout << "\n**********MONTHLY RECURRING VOICE + DATA PACKAGE**********" << endl;
    cout << "\t1.Enter '157' Birr 157 for 100 Min + 2 GB" << endl;
    cout << "\t2.Enter '214' Birr 214 for 300 Min + 2 GB" << endl;
    cout << "\t3.Enter '238' Birr 238 for 400 Min + 2 GB" << endl;
    cout << "\t4.Enter '257' Birr 257 for 500 Min + 2 GB" << endl;
    cout << "\t5.Enter '360' Birr 360 for 1000 min + 2 GB" << endl;
    cout << "\t6.Enter '270' Birr 270 for 100 min + 4  GB" << endl;
    cout << "\t7.Enter '328' Birr 328 for 300 Min + 4 GB" << endl;
    cout << "\t8.Enter '352' Birr 352 for 400 Min + 4 GB" << endl;
    cout << "\t9.Enter '371' Birr 371 for 500 Min + 4 GB" << endl;
    cout << "\t10.Enter '466' Birr 466 for 1000 Min + 4 GB" << endl;
    cout << "\t11.Enter '1514' Birr 1514 for 100 min + Unlimited Internet" << endl;
    cout << "12.Enter '1525' Birr 1525 for 300 min + Unlimited Internet" << endl;
    cout << "13.Enter '1549' Birr 1549 for 400 Min + Unlimited Internet" << endl;
    cout << "14.Enter '1568' Birr 1568 for 500 min + Unlimited Internet" << endl;
    cout << "15.Enter '1563' Birr 1563 for 100 min + Unlimited Internet" << endl;
    cout << "To go one  step back Enter '1'" << endl;
    cout << "To go two  steps back Enter '2'" << endl;
    cout << "To go three  steps back Enter '3'" << endl;
    cout << "To go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 157)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly  Reeciring Voice+Data package " << endl;
            cout << "Your Balance is now " << y - 157 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 214)
        {
            cout << "Congratulations!!! You Have Successfully Bought  monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 214 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 238)
        {
            cout << "Congratulations!!! You Have Successfully Bought  Monthly Recuring Voice+Data+SMS package" << endl;
            cout << "Your Balance is now " << y - 238 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 257)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 257 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 360)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 360 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 270)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 270 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 328)
        {
            cout << "Congratulations!!! You Have Successfully Bought  Monthly Recuring Voice+Data+SMS package" << endl;
            cout << "Your Balance is now " << y - 328 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 352)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 352 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 371)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 371 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 466)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 466 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1514)
        {
            cout << "Congratulations!!! You Have Successfully Bought  Monthly Recuring Voice+Data+SMS package" << endl;
            cout << "Your Balance is now " << y - 1514 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 1524)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 1524 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1549)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 1549 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1568)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 1568 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1563)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 1563 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 1)
        {
            recuring();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 2)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            MR_VoicePlusDataPack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\n\t\t\tTo go one  step back Enter '*'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '**'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '***'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                Premium_Unlimited_Mobile_Package();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                Unlimited_Voice_Data_Package();
            }
        }
    }
}

void MR_Unlimited_Premium_Pack()
{
    int x;
    cout << "\n*******************************************" << endl;
    cout << "**********MONTHLY RECURRING UBLIMITED PREMIUM PACKAGE**********" << endl;
    cout << "*******************************************" << endl;
    cout << "1.Enter '1510' Birr 1510 For Unlimited Voice" << endl;
    cout << "2.Enter '1510' Birr 1510 For Unlimited Internet" << endl;
    cout << "3.Enter '2545' Birr 2545 For Unlimited Voice & Internet" << endl;
    cout << "\tTo go one  step back Enter '1'" << endl;
    cout << "\tTo go two  steps back Enter '2" << endl;
    cout << "\tTo go three  steps back Enter '3'" << endl;
    cout << "\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 1510)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Recurring unlimited Voice Package" << endl;
            cout << "Your Balance is now " << y - 1510 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1510)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Recurring unlimited Internet Package" << endl;
            cout << "Your Balance is now " << y - 1510 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 2545)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Recurring unlimited Voice & Internet Package" << endl;
            cout << "Your Balance is now " << y - 2545 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            recuring();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            MR_Unlimited_Premium_Pack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            int x;
            cout << "\n\t\t\tTo go one  step back Enter '1'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '2'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '3'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                recuring();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                MR_Unlimited_Premium_Pack();
            }
        }
    }
}

void MR_Unlimited_Premium_Plus_Pack()
{
    int x;
    cout << "  \n*******************************************************************" << endl;
    cout << "  **********MONTHLY RECURRING UNLIMITED PREMOIUM PLUS PACKAGE**********" << endl;
    cout << "  *******************************************************************" << endl;
    cout << "1.Enter '3530' Birr 3530 For Unlimited Voice, Data & SMS Plus International 100 Min 50 SMS" << endl;
    cout << "\tTo go one  step back Enter '1'" << endl;
    cout << "\tTo go two  steps back Enter '2'" << endl;
    cout << "\tTo go three  steps back Enter '3'" << endl;
    cout << "\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 3530)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Recuring unlimited Premium Plus Package" << endl;
            cout << "Your Balance is now " << y - 3530 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            recuring();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            MR_Unlimited_Premium_Plus_Pack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            int x;
            cout << "\n\t\t\tTo go one  step back Enter '1'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '2'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '3'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                recuring();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                MR_Unlimited_Premium_Plus_Pack();
            }
        }
    }
}
void MR_LimitedPremiumPlusPack()
{
    int x;
    cout << " \n *******************************************************************" << endl;
    cout << "  **********MONTHLY RECURRING LIMITED PREMIUM PLUS PACKAGE**********" << endl;
    cout << "  *******************************************************************" << endl;
    cout << "1.Enter '2940' Birr 2940 For 9000 Min Voice Package, 60GB Data & 870 SMS Plus International 100 Min 50 SMS" << endl;
    cout << "\tTo go one  step back Enter '1'" << endl;
    cout << "\tTo go two  steps back Enter '2'" << endl;
    cout << "\tTo go three  steps back Enter '3'" << endl;
    cout << "\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 2940)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Recurring Limited Premium Plus Package" << endl;
            cout << "Your Balance is now " << y - 2940 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            recuring();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            MR_LimitedPremiumPlusPack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\n\t\t\tTo go one  step back Enter '1'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '2'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '3'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                recuring();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                MR_LimitedPremiumPlusPack();
            }
        }
    }
}

void MR_FlexiPack()
{
    int x;
    cout << "  \n*******************************************************************" << endl;
    cout << "  **********MONTHLY RECURRING FLEXI PACKAGE**********" << endl;
    cout << "  *******************************************************************" << endl;
    cout << "1.Enter '100' Birr 100 For 1900 Flexi Units" << endl;
    cout << "1.Enter '150' Birr 150 For 3200 Flexi Units" << endl;
    cout << "\tTo go one  step back Enter '1'" << endl;
    cout << "\tTo go two  steps back Enter '2'" << endl;
    cout << "\tTo go three  steps back Enter '3'" << endl;
    cout << "\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 100)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Recurring Flexi Package" << endl;
            cout << "Your Balance is now " << y - 100 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 150)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Recurring Flexi Package" << endl;
            cout << "Your Balance is now " << y - 150 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            recuring();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            MR_FlexiPack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\n\t\t\tTo go one  step back Enter '1'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '2'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '3'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                recuring();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                MR_FlexiPack();
            }
        }
    }
}

void daily_Voice_pack()
{
    int x;
    cout << "\n***********************************************" << endl;
    cout << "********** DAILY MOBILE VOICE PACKAGE**********" << endl;
    cout << "***********************************************" << endl;
    cout << "1.Enter '3' Birr 3 for 10 Min" << endl;
    cout << "2.Enter '5' Birr 5 for 17 Min" << endl;
    cout << "3.Enter '10' Birr 10 for 35 Min" << endl;
    cout << "\tTo go one  step back Enter '1'" << endl;
    cout << "\tTo go two  steps back Enter '2'" << endl;
    cout << "\tTo go three  steps back Enter '3'" << endl;
    cout << "\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 3)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Daily Voice Package" << endl;
            cout << "Your Balance is now " << y - 3 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 5)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Daily Voice Package" << endl;
            cout << "Your Balance is now " << y - 5 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 10)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Daily Voice Package" << endl;
            cout << "Your Balance is now " << y - 10 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            VoicePackage();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            daily_Voice_pack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            int x;
            cout << "\n\t\t\tTo go one  step back Enter '1'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '2'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '3'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                VoicePackage();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                daily_Voice_pack();
            }
        }
    }
}

void weekly_Voice_pack()
{
    int x;
    cout << "***********************************************" << endl;
    cout << "********** Weekly Mobile Voice Package**********" << endl;
    cout << "***********************************************" << endl;
    cout << "1.Enter '15' Birr 15 for 60 Min" << endl;
    cout << "2.Enetr '20' Birr 20 for 80 Min" << endl;
    cout << "3.Enter '25' Birr 25 for 100 Min" << endl;
    cout << "To go one  step back Enter '1'" << endl;
    cout << "To go two  steps back Enter '2'" << endl;
    cout << "To go three  steps back Enter '3'" << endl;
    cout << "To go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 15)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Weekly Voice Package" << endl;
            cout << "Your Balance is now " << y - 15 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 20)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Weekly Voice Package" << endl;
            cout << "Your Balance is now " << y - 20 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 25)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Weekly Voice Package" << endl;
            cout << "Your Balance is now " << y - 25 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            VoicePackage();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            weekly_Voice_pack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            int k;
            cout << "\n\t\t\tTo go one  step back Enter '1'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '2'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '3'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                Premium_Unlimited_Mobile_Package();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                Unlimited_Voice_Data_Package();
            }
        }
    }
}

void monthly_Voice_pack()
{
    int x;
    cout << "***********************************************" << endl;
    cout << "********** MONTHLY MOBILE VOICE PACKAGE**********" << endl;
    cout << "***********************************************" << endl;
    cout << "1.Enter '35' Birr 35 for 100 Min" << endl;
    cout << "2.Enter '50' Birr 50 for 150 Min" << endl;
    cout << "3.Enter '95' Birr 95 for 300 Min" << endl;
    cout << "4.Enter '120' Birr 120 for 400 Min" << endl;
    cout << "5.Enter '140' Birr 140 for 500 Min" << endl;
    cout << "6.Enter '165' Birr 165 for 600 Min" << endl;
    cout << "7.Enter '200' Birr 200 for 750 Min" << endl;
    cout << "8.Enter '240' Birr 240 for 1000 Min" << endl;
    cout << "9.Enter '295' Birr 295 for 1250 Min" << endl;
    cout << "10.Enter '350' Birr 350 for 1500 Min" << endl;
    cout << "11.Enter '405' Birr 405 for 1750 Min" << endl;
    cout << "12.Enter '460' Birr 460 for 2000 Min" << endl;
    cout << "To go one  step back Enter '1'" << endl;
    cout << "To go two  steps back Enter '2'" << endl;
    cout << "To go three  steps back Enter '3'" << endl;
    cout << "To go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 35)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Voice Package" << endl;
            cout << "Your Balance is now " << y - 35 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 50)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Voice Package" << endl;
            cout << "Your Balance is now " << y - 50 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 95)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Voice Package" << endl;
            cout << "Your Balance is now " << y - 95 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 120)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Voice Package" << endl;
            cout << "Your Balance is now " << y - 120 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 140)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Voice Package" << endl;
            cout << "Your Balance is now " << y - 140 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 165)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Voice Package" << endl;
            cout << "Your Balance is now " << y - 165 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 200)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Voice Package" << endl;
            cout << "Your Balance is now " << y - 200 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 240)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Voice Package" << endl;
            cout << "Your Balance is now " << y - 240 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 295)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Voice Package" << endl;
            cout << "Your Balance is now " << y - 295 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 350)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Voice Package" << endl;
            cout << "Your Balance is now " << y - 350 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 405)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Voice Package" << endl;
            cout << "Your Balance is now " << y - 405 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 460)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Voice Package" << endl;
            cout << "Your Balance is now " << y - 460 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            VoicePackage();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            monthly_Voice_pack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            int b;
            cout << "\n\t\t\tTo go one  step back Enter '*'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '**'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '***'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> b;
            system("CLS");
            if (x == 1)
            {
                Premium_Unlimited_Mobile_Package();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                Unlimited_Voice_Data_Package();
            }
        }
    }
}
void recuring()
{
    string x;
    cout << " \n*******************MONTHLY RECURRING PACKAGE*****************" << endl;
    cout << "\t1.Monthly Recurring Voice Package" << endl;
    cout << "\t2.Monthly Recurring Data Package" << endl;
    cout << "\t3.Monthly Recurring Voice Plus Data Package" << endl;
    cout << "\t4.Monthly Recurring Unlimited Premium Package" << endl;
    cout << "\t5.Monthly Recurring Unlimited Premium Plus Package" << endl;
    cout << "\t6.Monthly Recurring Limited Premium Plus Package" << endl;
    cout << "\t7.Monthly Recurring Flexi Package" << endl;
    cout << "\t\tTo go one  step back Enter '*'" << endl;
    cout << "\t\tTo go two  step back Enter '**'" << endl;
    cout << "\t\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (x == "1")
        MR_VoicePack();
    else if (x == "2")
        MR_DataPack();
    else if (x == "3")
        MR_VoicePlusDataPack();
    else if (x == "4")
        MR_Unlimited_Premium_Pack();
    else if (x == "5")
        MR_Unlimited_Premium_Plus_Pack();
    else if (x == "6")
        MR_LimitedPremiumPlusPack();
    else if (x == "7")
        MR_FlexiPack();
    else if (x == "*")
    {
        ForYourself();
    }
    else if (x == "**")
    {
        services();
    }
    else if (x == "0")
    {
        Firstmenu();
    }
    else
    {
        cout << "__________Wrong input, please try again.__________" << endl;
        recuring();
    }
}
void MR_VoicePack()
{
    int x;
    cout << "********** MONTHLY RECURRING VOICE PACKAGE**********" << endl;
    cout << "\t1.Enter '35' Birr 35 for 100 Min" << endl;
    cout << "\t2.Enter '50' Birr 50 for 150 Min" << endl;
    cout << "\t3.Enter '95' Birr 95 for 300 Min" << endl;
    cout << "\t4.Enter '120' Birr 120 for 400 Min" << endl;
    cout << "\t5.Enter '140' Birr 140 for 500 Min" << endl;
    cout << "\t6.Enter '165' Birr 165 for 600 Min" << endl;
    cout << "\t7.Enter '200' Birr 200 for 750 Min" << endl;
    cout << "\t\tTo go one  step back Enter '1'" << endl;
    cout << "\t\tTo go two  steps back Enter '2'" << endl;
    cout << "\t\tTo go three  steps back Enter '3'" << endl;
    cout << "\t\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 35)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Monthly Recuring Voice Package" << endl;
            cout << "\t\tYour Balance is now " << y - 35 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 50)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Monthly Recuring Voice Package" << endl;
            cout << "\t\tYour Balance is now " << y - 50 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 95)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Monthly Recuring Voice Package" << endl;
            cout << "\t\tYour Balance is now " << y - 95 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 120)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Monthly Recuring Voice Package" << endl;
            cout << "\t\tYour Balance is now " << y - 120 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 140)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Recuring Voice Package" << endl;
            cout << "Your Balance is now " << y - 140 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 165)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Monthly Recuring Voice Package" << endl;
            cout << "\t\tYour Balance is now " << y - 165 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 200)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Monthly Recuring Voice Package" << endl;
            cout << "\t\tYour Balance is now " << y - 200 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            recuring();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            MR_VoicePack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\n\t\t\tTo go one  step back Enter '1'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '2'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '3'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                recuring();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                MR_VoicePack();
            }
        }
    }
}
void MR_DataPack()
{
    int x;
    cout << "\n**********MONTHLY RECURRING INTERNET PACKAGE**********" << endl;
    cout << "\t1.Enter '40' Birr 40 for 500 MB" << endl;
    cout << "\t2.Enter '75' Birr 75 for 1 GB" << endl;
    cout << "\t3.Enter '130' Birr 130 for 2 GB" << endl;
    cout << "\t4.Enter '250' Birr 250 for 4 GB" << endl;
    cout << "\t\tTo go one  step back Enter '1'" << endl;
    cout << "\t\tTo go two  steps back Enter '2'" << endl;
    cout << "\t\tTo go three  steps back Enter '3'" << endl;
    cout << "\t\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 40)
        {
            cout << "\n\t*************Congratulations!!! You Have Successfully Bought Your Monthly Recurring Internet Package************************" << endl;
            cout << "\tDear customer, as per your request the new service offer \n Monthly  Data Package 500 MB is added to your service number. the service offer is effective from 12:00 am to 6:00 " << endl;
            cout << "\t\tYour Balance is now " << y - 40 << " Birr" << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 75)
        {
            cout << "\n\tCongratulations!!! You Have Successfully Bought Your Recurring Internet Package" << endl;
            cout << "\tDear customer, as per your request the new service offer \n Monthly Data Package 1 GB is added to your service number. the service offer is effective from 12:00 am to 6:00 " << endl;
            cout << "\t\tYour Balance is now " << y - 75 << " Birr" << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 130)
        {
            cout << "\n\t*************Congratulations!!! You Have Successfully Bought Your Monthly Recurring Internet Package************************" << endl;
            cout << "\tDear customer, as per your request the new service offer \n Monthly Data Package 2 GB is added to your service number. the service offer is effective from 12:00 am to 6:00 " << endl;
            cout << "\t\tYour Balance is now " << y - 130 << " Birr" << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 250)
        {
            cout << "\n\t***************Congratulations!!! You Have Successfully Bought Your Monthly Recurring Internet Package************************" << endl;
            cout << "\tDear customer, as per your request the new service offer \n Monthly Data Package 4 GB is added to your service number. the service offer is effective from 12:00 am to 6:00 " << endl;
            cout << "\t\tYour Balance is now " << y - 250 << " Birr" << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 1)
        {
            recuring();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            MR_DataPack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\n\t\t\tTo go one  step back Enter '*'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '**'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '***'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                recuring();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                MR_DataPack();
            }
        }
    }
}
void MR_VoicePlusDataPack()
{
    int x;
    cout << "\n**********MONTHLY RECURRING VOICE + DATA PACKAGE**********" << endl;
    cout << "\t1.Enter '157' Birr 157 for 100 Min + 2 GB" << endl;
    cout << "\t2.Enter '214' Birr 214 for 300 Min + 2 GB" << endl;
    cout << "\t3.Enter '238' Birr 238 for 400 Min + 2 GB" << endl;
    cout << "\t4.Enter '257' Birr 257 for 500 Min + 2 GB" << endl;
    cout << "\t5.Enter '360' Birr 360 for 1000 min + 2 GB" << endl;
    cout << "\t6.Enter '270' Birr 270 for 100 min + 4  GB" << endl;
    cout << "\t7.Enter '328' Birr 328 for 300 Min + 4 GB" << endl;
    cout << "\t8.Enter '352' Birr 352 for 400 Min + 4 GB" << endl;
    cout << "\t9.Enter '371' Birr 371 for 500 Min + 4 GB" << endl;
    cout << "\t10.Enter '466' Birr 466 for 1000 Min + 4 GB" << endl;
    cout << "\t11.Enter '1514' Birr 1514 for 100 min + Unlimited Internet" << endl;
    cout << "12.Enter '1525' Birr 1525 for 300 min + Unlimited Internet" << endl;
    cout << "13.Enter '1549' Birr 1549 for 400 Min + Unlimited Internet" << endl;
    cout << "14.Enter '1568' Birr 1568 for 500 min + Unlimited Internet" << endl;
    cout << "15.Enter '1563' Birr 1563 for 100 min + Unlimited Internet" << endl;
    cout << "To go one  step back Enter '1'" << endl;
    cout << "To go two  steps back Enter '2'" << endl;
    cout << "To go three  steps back Enter '3'" << endl;
    cout << "To go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 157)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly  Reeciring Voice+Data package " << endl;
            cout << "Your Balance is now " << y - 157 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 214)
        {
            cout << "Congratulations!!! You Have Successfully Bought  monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 214 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 238)
        {
            cout << "Congratulations!!! You Have Successfully Bought  Monthly Recuring Voice+Data+SMS package" << endl;
            cout << "Your Balance is now " << y - 238 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 257)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 257 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 360)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 360 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 270)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 270 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 328)
        {
            cout << "Congratulations!!! You Have Successfully Bought  Monthly Recuring Voice+Data+SMS package" << endl;
            cout << "Your Balance is now " << y - 328 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 352)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 352 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 371)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 371 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 466)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 466 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1514)
        {
            cout << "Congratulations!!! You Have Successfully Bought  Monthly Recuring Voice+Data+SMS package" << endl;
            cout << "Your Balance is now " << y - 1514 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 1524)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 1524 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1549)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 1549 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1568)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 1568 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1563)
        {
            cout << "Congratulations!!! You Have Successfully Bought Monthly Recuring Voice+Data package" << endl;
            cout << "Your Balance is now " << y - 1563 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }

        else if (x == 1)
        {
            recuring();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 2)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            MR_VoicePlusDataPack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            cout << "\n\t\t\tTo go one  step back Enter '*'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '**'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '***'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                Premium_Unlimited_Mobile_Package();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                Unlimited_Voice_Data_Package();
            }
        }
    }
}
void MR_Unlimited_Premium_Pack()
{
    int x;
    cout << "\n*******************************************" << endl;
    cout << "**********MONTHLY RECURRING UBLIMITED PREMIUM PACKAGE**********" << endl;
    cout << "*******************************************" << endl;
    cout << "1.Enter '1510' Birr 1510 For Unlimited Voice" << endl;
    cout << "2.Enter '1510' Birr 1510 For Unlimited Internet" << endl;
    cout << "3.Enter '2545' Birr 2545 For Unlimited Voice & Internet" << endl;
    cout << "\tTo go one  step back Enter '1'" << endl;
    cout << "\tTo go two  steps back Enter '2" << endl;
    cout << "\tTo go three  steps back Enter '3'" << endl;
    cout << "\tTo go back to the first menu Enter '0'" << endl;
    cout << "Option: ";
    cin >> x;
    system("CLS");
    if (y - x >= 0)
    {
        if (x == 1510)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Recurring unlimited Voice Package" << endl;
            cout << "Your Balance is now " << y - 1510 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1510)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Recurring unlimited Internet Package" << endl;
            cout << "Your Balance is now " << y - 1510 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 2545)
        {
            cout << "Congratulations!!! You Have Successfully Bought Your Monthly Recurring unlimited Voice & Internet Package" << endl;
            cout << "Your Balance is now " << y - 2545 << " Birr. " << endl;
            int d;
            cout << "\n1.Enter '0' to buy another package\n2.Enter any key for 'EXIT'" << endl;
            cin >> d;
            switch (d)
            {
            case 0:
                Firstmenu();
                break;
            default:
                break;
            }
        }
        else if (x == 1)
        {
            recuring();
        }
        else if (x == 2)
        {
            ForYourself();
        }
        else if (x == 3)
        {
            services();
        }
        else if (x == 0)
        {
            Firstmenu();
        }
        else
        {
            cout << "__________Wrong input, please try again.__________" << endl;
            MR_Unlimited_Premium_Pack();
        }
    }
    else
    {
        int c;
        cout << "\n\tDear user your Balance is insufficient for this service. " << endl;
        cout << "\t\tTo get CREDIT Please Enter '0': ";
        cin >> c;
        system("CLS");
        if (c == 0)
        {
            credit();
        }
        else
        {
            int x;
            cout << "\n\t\t\tTo go one  step back Enter '1'" << endl;
            cout << "\t\t\tTo go two  steps back Enter '2'" << endl;
            cout << "\t\t\tTo go three  steps back Enter '3'" << endl;
            cout << "\t\t\tTo go back to the first menu Enter '0'" << endl;
            cout << "Option: ";
            cin >> x;
            system("CLS");
            if (x == 1)
            {
                recuring();
            }
            else if (x == 2)
            {
                ForYourself();
            }
            else if (x == 3)
            {
                services();
            }
            else if (x == 0)
            {
                Firstmenu();
            }
            else
            {
                cout << "__________Wrong input, please try again.__________" << endl;
                MR_Unlimited_Premium_Pack();
            }
        }
    }
}
