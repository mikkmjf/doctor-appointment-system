#include<iostream>
#include<string>

using namespace std;

class PersonType
{
public:
    void print() const;
    void SetName(string first, string last);
    string getFirstName() const;
    string getLastName() const;
    PersonType(string first = "", string last = "");

private:
    string FirstName, LastName;
};
void PersonType :: print() const
{
    cout << FirstName << " " << LastName << endl;
}
void PersonType :: SetName(string first, string last)
{
    FirstName = first;
    LastName = last;
    cout << "Please Enter Your FIRST Name.\n";
    cin >> first;
    cout << "Please Enter Your LAST Name.\n";
    cin >> last;
}
string PersonType :: getFirstName() const
{
    return FirstName;
}
string PersonType :: getLastName() const
{
    return LastName;
}
PersonType :: PersonType(string first, string last)
{
    FirstName = first;
    LastName = last;
}

class DoctorType : public PersonType
{
public:
    void SetName(string first, string last);
    void SetSpeciality(string Special);
    string getSpeciality() const;
    string getFirstName() const;
    string getLastName() const;
    DoctorType(string Special = "");

private:
    string FirstName, LastName, Speciality;
};
void DoctorType :: SetSpeciality(string Special)
{
    Speciality = Special;
    cout << "Please Enter Your SPECIALITY.\n";
    cin >> Special;
}
string DoctorType :: getSpeciality() const
{
    return Speciality;
}
DoctorType :: DoctorType(string Special = "")
{
    Speciality = Special;
}

class DateType
{
public:
    void printDate() const;
    void SetDate(int Day, int Month, int Year);
    int getTheDay() const;
    int getTheMonth() const;
    int getTheYear() const;
    DateType(int Day,int Month, int Year);

private:
    int TheDay, TheYear, TheMonth;
};
void DateType :: printDate() const
{
    cout << TheDay << " " << TheMonth << " " << TheYear << endl;
}
void DateType :: SetDate(int Day, int Month, int Year)
{
    TheDay = Day;
    TheMonth = Month;
    TheYear = Year;

    cout << "Please Enter The Day (DD).\n";
    cin >> Day;
    cout << "Please Enter The Month (MM).\n";
    cin >> Month;
    cout << "Please Enter The Year (YYYY).\n";
    cin >> Year;
}
int DateType :: getTheDay() const
{
    return TheDay;
}
int DateType :: getTheMonth() const
{
    return TheMonth;
}
int DateType :: getTheYear() const
{
    return TheYear;
}
DateType::DateType(int Day, int Month, int Year)
{
    TheDay = Day;
    TheMonth = Month;
    TheYear = Year;
}
class DateOfBirthType : public DateType
{
public:
    void printDOB() const;
    void SetDOB(int Day, int Month, int Year);
    int getTheDay() const;
    int getTheMonth() const;
    int getTheYear() const;

private:
    int TheDay, TheYear, TheMonth;
};
void DateOfBirthType :: printDOB() const
{
    cout << "Patients Date Of Birth: " << TheDay << "/" << TheMonth << "/" << TheYear << endl;
}
void DateOfBirthType :: SetDOB(int Day, int Month, int Year)
{
    TheDay = Day;
    TheMonth = Month;
    TheYear = Year;

    cout << "Enter The Patients DAY Of Birth.\n";
    cin >> Day;
    cout << "Enter The Patients MONTH Of Birth.\n";
    cin >> Month;
    cout << "Enter The Patients YEAR Of Birth.\n";
    cin >> Year;
}

class AdmittanceDateType : public DateType
{
public:
    void printAdmittanceDate() const;
    void SetAdmittanceDate(int Day, int Month, int Year);
    int getTheDay() const;
    int getTheMonth() const;
    int getTheYear() const;

private:
    int TheDay, TheYear, TheMonth;
};
void AdmittanceDateType :: printAdmittanceDate() const
{
    cout << "The Patients Admittance Date: " << TheDay << " " << TheMonth << " " << TheYear << endl;
}
void AdmittanceDateType :: SetAdmittanceDate(int Day, int Month, int Year)
{
    TheDay = Day;
    TheMonth = Month;
    TheYear = Year;

    cout << "Enter The Patients DAY Of Admittance.\n";
    cin >> Day;
    cout << "Enter The Patients MONTH Of Admittance.\n";
    cin >> Month;
    cout << "Enter The Patients YEAR Of Admittance.\n";
    cin >> Year;
}

class DischargeDateType : public DateType
{
public:
    void printDischargeDate() const;
    void SetDischargeDate(int Day, int Month, int Year);
    int getTheDay() const;
    int getTheMonth() const;
    int getTheYear() const;

private:
    int TheDay, TheYear, TheMonth;
};
void DischargeDateType :: printDischargeDate() const
{
    cout << "The Patients Discharge Date: " << TheDay << " " << TheMonth << " " << TheYear << endl;
}
void DischargeDateType :: SetDischargeDate(int Day, int Month, int Year)
{
    TheDay = Day;
    TheMonth = Month;
    TheYear = Year;

    cout << "Enter The Patients DAY Of Discharge.\n";
    cin >> Day;
    cout << "Enter The Patients MONTH Of Discharge.\n";
    cin >> Month;
    cout << "Enter The Patients YEAR Of Discharge.\n";
    cin >> Year;
}

class PatientType : public PersonType
{
    void print() const;
    void SetName(string first, string last);
    void SetPatientID(int ID);
    void SetPatientAge(int Age);
    int getPatientAge() const;
    int getPatientID() const;
    string getFirstName() const;
    string getLastName() const;
    PatientType(string first = "", string last = "");
    PatientType(int ID = 0);
    PatientType(int Age = 0);

private:
    string FirstName, LastName;
    int PatientID, PatientAge;
};
int PatientType::getPatientID() const
{
    return PatientID;
}
int PatientType::getPatientAge() const
{
    return PatientAge;
}
PatientType::PatientType(string first = "", string last = "")
{
    FirstName = first;
    LastName = last;
}
PatientType::PatientType(int ID = 0)
{
    PatientID = ID;
}
PatientType::PatientType(int Age = 0)
{
    PatientID = Age;
}
int main()
{
    int choice;

    PersonType *Person = NULL;

    cout << "Who would you like to input information for?\n";
    cout << "      1 - Doctor\n";
    cout << "      2 - Patient\n";
    cin >> choice;

    if (choice == 1)
    {
        Person = new DoctorType();
        Person->SetName();
        Person->SetSpeciality();
    }
    else if (choice == 2)
    {
        Person = new PatientType();
        Person->;
        Person->;
    }
    return 0;
}