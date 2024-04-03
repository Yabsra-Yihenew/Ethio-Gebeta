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
