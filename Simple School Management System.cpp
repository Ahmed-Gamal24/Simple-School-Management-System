#include <iostream>
#include <vector>
using namespace std;


class clsStudent
{
private:

	int NumberOfStudents;
	int numberOfNewAddedStudents;
	struct student
	{
		string FName;
		string LName;
		string fullName;
		string Gender;
		float MathGrade = 0;
		float ArabicGrade = 0;
		float EnglishGrade = 0;
	};
	//vector <student> studentInfo;
	student* studentInfo;
	student* newStudentInfo;
	

	float _mathAvg;
	float _arabicAvg;
	float _englishAvg;

	float _HigherMarkInMath;
	string _StudentNameOfHigherMarkInMath;
	float _HigherMarkInArabic;
	string _StudentNameOfHigherInArabic;
	float _HigherMarkInEnglish;
	string _StudentNameOfHigherInEnglish;

	
	void TakeNumberOfStudents()
	{
		cout << "Enter The Number Of Students: ";
		cin >> NumberOfStudents;
	}

	
	// Calculate The Average Of Marks In Subject Math 
	void CalcMathAvg()
	{
		float SumMathGrade = 0;
		for (int j = 0; j < NumberOfStudents; ++j)
		{
			SumMathGrade += studentInfo[j].MathGrade;
		}
		_mathAvg = SumMathGrade / NumberOfStudents;
	}
	// Calculate The Average Of Marks In Subject Arabic
	void CalcArabicAvg()
	{
		float SumArabicGrade = 0;
		for (int j = 0; j < NumberOfStudents; ++j)
		{
			SumArabicGrade += studentInfo[j].ArabicGrade;
		}
		_arabicAvg = SumArabicGrade / NumberOfStudents;
	}
	// Calculate The Average Of Marks In Subject English
	void CalcEnglishAvg()
	{
		float SumEnglishGrade = 0;
		for (int j = 0; j < NumberOfStudents; ++j)
		{
			SumEnglishGrade += studentInfo[j].EnglishGrade;
		}
		_englishAvg = SumEnglishGrade / NumberOfStudents;
	}


	// This Function To Know The Mark Of First Student In Subject Math
	void CalcHigherMarkInMath()
	{
		float Higher = 0;
		for (int j = 0; j < NumberOfStudents; ++j)
		{
			if (studentInfo[j].MathGrade > Higher)
			{
				Higher = studentInfo[j].MathGrade;
			}
		}
		_HigherMarkInMath = Higher;
	}
	// This Function To Know The Name Of First Student In Subject Math
	void KnowStudentNameOfHigherMarkInMath()
	{
		float Higher = 0;
		int indexOfHigher;

		for (int j = 0; j < NumberOfStudents; ++j)
		{

			if (studentInfo[j].MathGrade > Higher)
			{
				Higher = studentInfo[j].MathGrade;
				indexOfHigher = j;
			}
		}
		_StudentNameOfHigherMarkInMath = studentInfo[indexOfHigher].FName + " " + studentInfo[indexOfHigher].LName;

	}

	//This Function To Know The Mark Of First Student In Subject Arabic
	void CalcHigherMarkInArabic()
	{
		float Higher = 0;

		for (int j = 0; j < NumberOfStudents; ++j)
		{
			if (studentInfo[j].ArabicGrade > Higher)
			{
				Higher = studentInfo[j].ArabicGrade;

			}
		}
		_HigherMarkInArabic = Higher;
	}
	// This Function To Know The Name Of First Student In Subject Arabic
	void KnowStudentNameOfHigherInArabic()
	{
		float Higher = 0;
		int indexOfHigher;
		for (int j = 0; j < NumberOfStudents; ++j)
		{
			if (studentInfo[j].ArabicGrade > Higher)
			{
				Higher = studentInfo[j].ArabicGrade;
				indexOfHigher = j;
			}
		}
		_StudentNameOfHigherInArabic = studentInfo[indexOfHigher].FName + " " + studentInfo[indexOfHigher].LName;
	}

	// This Function To Know The Mark Of First Student In Subject English
	void CalcHigherMarkInEnglish()
	{
		float Higher = 0;
		for (int j = 0; j < NumberOfStudents; ++j)
		{
			if (studentInfo[j].EnglishGrade > Higher)
			{
				Higher = studentInfo[j].EnglishGrade;
			}
		}
		_HigherMarkInEnglish = Higher;
	}
	// This Function To Know The Name Of First Student In Subject English
	void KnowStudentNameOfHigherInEnglish()
	{
		float Higher = 0;
		int indexOfHigher;
		for (int j = 0; j < NumberOfStudents; ++j)
		{
			if (studentInfo[j].EnglishGrade > Higher)
			{
				Higher = studentInfo[j].EnglishGrade;
				indexOfHigher = j;
			}
		}
		_StudentNameOfHigherInEnglish = studentInfo[indexOfHigher].FName + " " + studentInfo[indexOfHigher].LName;
	}

	int askNumOfNewAddedStudents()
	{
		int numberOfNewAddedStudents;
		cout << "Enter The Number Of Students You Want To Add: ";
		cin >> numberOfNewAddedStudents;
		return numberOfNewAddedStudents;
	}

	void createNewSizedArray()
	{
		int size = NumberOfStudents + askNumOfNewAddedStudents();
		newStudentInfo = new student[size];
		numberOfNewAddedStudents = size;
	}

	void TransferOldArrayDataToNewAnother()
	{
		for (int i = 0; i < NumberOfStudents; ++i)
		{
			newStudentInfo[i] = studentInfo[i];
		}
	}
	void collectNewStudentsData()
	{
		for (int i = NumberOfStudents; i < (NumberOfStudents + numberOfNewAddedStudents); ++i)
		{
			cout << "Enter The Data Of Student " << i + 1 << endl;
			cout << "First Name   : ";
			cin >> studentInfo[i].FName;
			cout << "Last Name    : ";
			cin >> studentInfo[i].LName;
			studentInfo[i].fullName = studentInfo[i].FName + " " + studentInfo[i].LName;
			cout << "Gender       : ";
			cin >> studentInfo[i].Gender;
			cout << "Math Grade   : ";
			cin >> studentInfo[i].MathGrade;
			cout << "Arabic Grade : ";
			cin >> studentInfo[i].ArabicGrade;
			cout << "English Grade: ";
			cin >> studentInfo[i].EnglishGrade;
		}

	}



public:

	clsStudent()
	{
		TakeNumberOfStudents();
		studentInfo = new student[NumberOfStudents];
	}
	void CollectStudentsData() 
	{
		
		for (int i = 0; i < NumberOfStudents; ++i)
		{
			cout << "Enter The Data Of Student " << i + 1 << endl;
			cout << "First Name   : ";
			cin >> studentInfo[i].FName;
			cout << "Last Name    : ";
			cin >> studentInfo[i].LName;
		    studentInfo[i].fullName = studentInfo[i].FName + " " + studentInfo[i].LName;
			cout << "Gender       : ";
			cin >> studentInfo[i].Gender;
			cout << "Math Grade   : ";
			cin >> studentInfo[i].MathGrade;
			cout << "Arabic Grade : ";
			cin >> studentInfo[i].ArabicGrade;
			cout << "English Grade: ";
			cin >> studentInfo[i].EnglishGrade;
		}
	}


	

	void addOtherStudentsInfo()
	{
		createNewSizedArray();
		TransferOldArrayDataToNewAnother();
		collectNewStudentsData();		
	}



	void searchStudentName()
	{
		string studentName;
		bool isExist = 0;
		cout << "Enter Studnt Name You Want to Search: ";
		cin >> studentName;
		for (int i = 0; i < NumberOfStudents; ++i)
		{
			if (studentName == studentInfo[i].FName)
			{
				cout << "The Student Exist In Index " << i;
				isExist = 1;
				break;
			}		
		}
		if (isExist == 0)
		{
			cout << "The Student Not Exist\n";
		}

	}

	float GetMathAverage()
	{
		CalcMathAvg();
		return _mathAvg;
	}
	float GetArabicAverage()
	{
		CalcArabicAvg();
		return _arabicAvg;
	}
	float GetEnglishAverage()
	{
		CalcEnglishAvg();
		return _englishAvg;
	}


	float GetHigherMarkInMath()
	{
		CalcHigherMarkInMath();
		return _HigherMarkInMath;
	}
	string GetStudentNameOfHigherMarkInMath()
	{
		KnowStudentNameOfHigherMarkInMath();
		return _StudentNameOfHigherMarkInMath;
	}
	
	float GetHigherMarkInArabic()
	{
		CalcHigherMarkInArabic();
		return _HigherMarkInArabic;
	}
	string GetStudentNameOfHigherMarkInArabic()
	{
		KnowStudentNameOfHigherInArabic();
		return _StudentNameOfHigherInArabic;
	}

	float GetHigherMarkInEnglish()
	{
		CalcHigherMarkInEnglish();
		return _HigherMarkInEnglish;
	}
	string GetStudentNameOfHigherMarkInEnglish()
	{
		KnowStudentNameOfHigherInEnglish();
		return _StudentNameOfHigherInEnglish;
	}


};



int main()
{
	clsStudent studentsInfo;
	studentsInfo.CollectStudentsData();
	studentsInfo.GetStudentNameOfHigherMarkInArabic(); // ahmed 
	studentsInfo.addOtherStudentsInfo();
	studentsInfo.GetStudentNameOfHigherMarkInArabic(); // aya
	

   
	return 0;
}