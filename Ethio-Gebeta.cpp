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
