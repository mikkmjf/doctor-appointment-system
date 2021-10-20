#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

// Doctors Surgery Information
class Surgery
{
public:
	void GetSurgery(string sSurgeryNamePass, string sSurgeryLocationPass);
protected:
	int iSurgeryID = 0;
	string sSurgeryName = " ";
	string sSurgeryLocation = " ";
	int iDoctor[2]; // array here
};

void Surgery::GetSurgery(string sSurgeryNamePass, string sSurgeryLocationPass)
{
	sSurgeryName = sSurgeryNamePass;
	sSurgeryLocation = sSurgeryLocationPass;
}

// Doctors Information
class Doctor
{
protected:
	int iDoctorID = 0;
	string sDoctorName = " ";
	string sDoctorSpecialistArea = " ";

};

// Patient Information/Booking System Log
class Patient
{
public:
	void GetPatient(int iPatientIDPass, string sPatientNamePass, int iPhoneNumberPass, string sPatientAddressPass);
	int AddPatient();
	void OutputPatient(vector<Patient>*oPatient);
protected:
	int iPatientID = 0;
	string sPatientName = " ";
	int iPhoneNumber;
	string sPatientAddress = " ";
	string sAilment = " ";
};

void Patient::GetPatient(int iPatientIDPass, string sPatientNamePass, int iPhoneNumberPass, string sPatientAddressPass)
{
	iPatientID = iPatientIDPass;
	sPatientName = sPatientNamePass;
	iPhoneNumber = iPhoneNumberPass;
	sPatientAddress = sPatientAddressPass;
}

int Patient::AddPatient()
{

	cout << "\n Please enter how many users you'd like \n";

	int iPatientAmount = 0;
	cin >> iPatientAmount;

	vector<Patient>oPatient(iPatientAmount);

	for (int iCount = 0; iCount < oPatient.size(); iCount++)
	{
		oPatient[iCount].GetPatient(iPatientID, sPatientName, iPhoneNumber, sPatientAddress);
	}

	for (int iCount = 0; iCount < oPatient.size(); iCount++)
	{
		iPatientID = iPatientID + 1;

		cout << "\n Please enter name of Patient " << iCount + 1 << endl;
		cin >> sPatientName;

		cout << "\n Please enter phone number of Patient " << iCount + 1 << endl;
		cin >> iPhoneNumber;

		cout << "\n Please enter address of Patient " << iCount + 1 << endl;
		cin >> sPatientAddress;

	}

	return 0;

}

/* void Patient::OutputPatient(vector<Patient>*oPatient)
{
	for (int iCount = 0; iCount < oPatient.size(); iCount++)
	{
		oPatient[iCount].GetPatient(iPatientID, sPatientName, iPhoneNumber, sPatientAddress);
	}

	for (int iCount = 0; iCount < oPatient.size(); iCount++)
	{
		oPatient[iCount].OutputPatient();

		// OutputPatient(&oPatient);

	}
} */

class Booking
{
public:

protected:
	string sAilment = " ";
};

void Login()
{
	string sUsername;
	string sPassword;
	int iAttempts = 0;

	while (iAttempts < 5)
	{
		cout << "Please enter your login: ";
		cin >> sUsername;
		cout << "Please enter your password: ";
		cin >> sPassword;

		if (sUsername == "mikk" && sPassword == "doctor1")
		{
			cout << "Welcome Mikk!" << endl;
			break;
		}
		else if (sUsername == "doctor2" && sPassword == "password2")
		{
			cout << "Welcome Doctor2!" << endl;
			break;
		}
		else
		{
			cout << "Invalid login attempt. Please try again.\n" << '\n';
			iAttempts++;
		}
	}
	if (iAttempts == 5)
	{
		cout << "Too many login attempts! The program will now terminate.";
	}

	cout << "Thank you for logging in.\n";
}

int main()
{

	Login();

	Patient oPatient;

	vector<Patient>oPatient();

	bool bChoice = false;

	do
	{
		int iChoice = 0;

		cout << "1. Add New Patient " << endl;
		cout << "2. Add New Doctor " << endl;
		cout << "3. Create Appointment " << endl;
		cout << "4. View Appointments " << endl;
		cout << "5. View Patients " << endl;
		cout << "6. View Doctors " << endl;

		cin >> iChoice;

		switch (iChoice)
		{
		case 1:
			oPatient.AddPatient();
			break;
		case 2:
			cout << "Add new doctor" << endl;
			break;
		case 3:
			cout << "Create appointment" << endl;
			break;
		case 4:
			cout << "View Appointments" << endl;
			break;
		case 5:
			// oPatient.OutputPatient();
			break;
		case 6:
			cout << "View Doctors" << endl;
			break;
		case 7:
			bChoice = true;
			break;
		default:
			cout << "Option entered does not exist. Make a choice from the following: " << endl;
			break;
		}

	} while (bChoice == false);


	_getch();
	return 0;
}