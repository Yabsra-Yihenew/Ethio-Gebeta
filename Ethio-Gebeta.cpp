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

