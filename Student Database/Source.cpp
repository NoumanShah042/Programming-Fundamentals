#include<iostream>
#include<iomanip>

using namespace std;


int addStudentRecord(int[], float[], int *, int, int, float);
int findStudentRollNo(int[], int, int);
bool isFull(int, int);
bool removeStudentRecord(int[], float[], int*, int);
void displayAllRecords(int[], float[], int);
void studentDatabase();

int main()
{
	studentDatabase();
	return 0;

}

void studentDatabase()
{
	const int size = 60; 
	int rollNo[size];
	float cgpa[size];
	int recordCount = 0;
	int choice=0;
	int rno;
	float gp;
	bool appRunFlag = true;


	do
	{
		cout << "\n student database \n";
		cout << "\nEnter  1 --> Add Records :\n";
		cout << "\nEnter  2 --> Search REcords :\n";
		cout << "\nEnter  3 --> Display All Records :\n";
		cout << "\nEnter  4 --> Display Records with CGPA >=X  :\n";
		cout << "\nEnter  5 --> Display Records with CGPA <= X :\n";
		cout << "\nEnter  6 --> Display Class Average CGPA:\n";
		cout << "\nEnter  7 --> Remove a record wih roll no =X:\n";
		cout << "\nEnter  8 --> Update CGPA with roll no = X :\n";
		cout << "\nEnter  0 --> Close the application :\n";
		cin >> choice;

		switch (choice)
		{
		   case  1:       //add records
		   {
			   cout << "\nEneter Roll No:";
			   cin >> rno;
			   cout<< "\nEneter cgpa";
			   cin >> gp;

			   int status = addStudentRecord(rollNo, cgpa, &recordCount, size, rno,gp);
			   if (status == 1)
				   cout << "\nRecord successfully added \n";
			   else if (status == 2)
				   cout << "\n Database is full";
			   else
				   cout << "record with that roll no" << rno << " Already exist";

			  break;
		   }
		   case 2:
		   {

			   break;

		   }
		   case 3:
		   {
			   displayAllRecords(rollNo, cgpa, recordCount);
			   break;
		   }

		   case 4:
		   {
			   break;
		   }
		   case 5:
		   {
			   break;
		   }
		   case 6:
		   {
			   break;
		   }
		   case 7:
		   {
			   cout << "Enter roll No to Remove records";
			   cin >> rno;
			   int status= removeStudentRecord(rollNo, cgpa, &recordCount,rno);
			   if (status == true)
				   cout << "record successfully removed";
			   else
				   cout << "record not found";
			   
			   break;
		   }
		   case 8:
		   {
			   break;
		   }
		   case 0:
		   {
			   appRunFlag = false;
			   break;
		   }
		}
	}

	while (appRunFlag);
	
}

int addStudentRecord(int rollNo[], float cgpa[], int * rc, int size, int rno, float gp)
{
	if (isFull(*rc, size))
		return 2;
	int recordIndex = findStudentRollNo(rollNo, *rc, rno);
	if (recordIndex != -1)
	{
		return 0;
	}

	rollNo[*rc] = rno;
	cgpa[*rc] = gp;
	*rc = *rc + 1;
	return 1;

}

int findStudentRollNo(int rollNo[], int rc, int key)
{
	int i = 0;
	while (i < rc && rollNo[i] != key)
	{
		i = i + 1;
	}
	if (i = rc)
		return -1;

	else
		return i;
}

bool isFull(int rc, int size)
{
	return rc == size;

}

void displayAllRecords(int rollNo[], float cgpa[], int rc)
{
	cout << "\n Roll NO           CGPA";
	cout << "\n----------           -----";
	cout.fill('.');
	for (int i = 0; i < rc; i++)
	{
		cout << "\n" << setw(7) << left << rollNo[i] << setw(12) << right << cgpa[i];

	}

}

bool removeStudentRecord(int rollNo[], float cgpa[], int* rc, int key)
{
	int index = findStudentRollNo(rollNo, *rc, key);
	if (index = -1)
		return false;
	for (int i = index ; i < *rc - 1 ; i++)
	{
		rollNo[i] = rollNo[i + 1];
		cgpa[i] = cgpa[i + 1];
	}
	*rc = *rc - 1;
	return true;
}







