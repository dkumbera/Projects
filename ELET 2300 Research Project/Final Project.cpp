/*************************
* ELET 2300
* Houston Weather Statistics Display
* <Danny Kumbera>
* Visual C++
**************************/
#include "stdafx.h"
#include "iostream"
#include "cstdlib"
#include "iomanip"
#include "fstream"
#include "cmath"
#include "string"

using namespace std;

int avgmonthtemp() // Function that calculates average temperature
{
	int x = 0, sum = 0, count = 0, legend;
	double avg = 0.0;
	string month;
	ofstream fout;
	ifstream fin;

	cout << "January: 13january.txt" << endl;
	cout << "February: 13february.txt" << endl;
	cout << "March: 13march.txt" << endl;
	cout << "April: 13april.txt" << endl;
	cout << "May: 13may.txt" << endl;
	cout << "June: 13june.txt" << endl;
	cout << "July: 13july.txt" << endl;
	cout << "August: 13august.txt" << endl;
	cout << "September: 13september.txt" << endl;
	cout << "October: 13october.txt" << endl;
	cout << "November: 13november.txt" << endl;
	cout << "December: 13december.txt" << endl;
	cout << "\n" << endl;
	cout << "January: 14january.txt" << endl;
	cout << "February: 14february.txt" << endl;
	cout << "March: 14march.txt" << endl;
	cout << "April: 14april.txt" << endl;
	cout << "May: 14may.txt" << endl;
	cout << "June: 14june.txt" << endl;
	cout << "July: 14july.txt" << endl;
	cout << "August: 14august.txt" << endl;
	cout << "September: 14september.txt" << endl;
	cout << "October: 14october.txt" << endl;
	cout << "November: 14november.txt" << endl;
	cout << "Choose which month to display average temperature for your desired year: " << endl;

	cin >> month;

	// Open file name for input
	fin.open(month.c_str(), ios::in);
	if (!fin.is_open())
	{
		cout << "Unable to open file " << month << endl;
		system("pause");
		exit(10);
	}

	// Read text from file
	//      fin >> x;

	while (!fin.fail())
	{
		fin >> x;
		sum += x;
		count++;
	};
	sum -= x;

	avg = (sum) / (count - 1); // Calculate average

	cout << "\n" << endl;
	cout << "********************************************************************************\n";
	cout << "               The average temperature of : " << month << " is: " << avg << "\370F" << "\n" << endl;
	cout << "********************************************************************************\n";
	cout << "\n" << endl;
	if (!fin.eof())
	{
		cout << "Error reading file " << month << endl;
		system("pause");
		exit(20);
	}
	fin.close();
}

int avgwind() // Function that calculates average wind speed
{
	int x = 0, sum = 0, count = 0, legend;
	double avg = 0.0;
	string month;
	ofstream fout;
	ifstream fin;

	cout << "January: 13janwind.txt" << endl;
	cout << "February: 13febwind.txt" << endl;
	cout << "March: 13marwind.txt" << endl;
	cout << "April: 13aprwind.txt" << endl;
	cout << "May: 13marwind.txt" << endl;
	cout << "June: 13junwind.txt" << endl;
	cout << "July: 13julwind.txt" << endl;
	cout << "August: 13augwind.txt" << endl;
	cout << "September: 13sepwind.txt" << endl;
	cout << "October: 13octwind.txt" << endl;
	cout << "November: 13novwind.txt" << endl;
	cout << "December: 13decwind.txt" << endl;
	cout << "\n" << endl;
	cout << "January: 14janwind.txt" << endl;
	cout << "February: 14febwind.txt" << endl;
	cout << "March: 14marwind.txt" << endl;
	cout << "April: 14aprwind.txt" << endl;
	cout << "May: 14marwind.txt" << endl;
	cout << "June: 14junwind.txt" << endl;
	cout << "July: 14julwind.txt" << endl;
	cout << "August: 14augwind.txt" << endl;
	cout << "September: 14sepwind.txt" << endl;
	cout << "October: 14octwind.txt" << endl;
	cout << "November: 14novwind.txt" << endl;
	cout << "Choose which month to display average wind for your desired year: " << endl;

	cin >> month;

	// open file file_name for input
	fin.open(month.c_str(), ios::in);
	if (!fin.is_open())
	{
		cout << "Unable to open file " << month << endl;
		system("pause");
		exit(10);
	}

	// read text from file
	//      fin >> x;

	while (!fin.fail())
	{
		fin >> x;
		sum += x;
		count++;
	};
	sum -= x;

	avg = (sum) / (count - 1);

	cout << "\n" << endl;
	cout << "********************************************************************************\n";
	cout << "              The average wind of : " << month << " was: " << avg << " Miles Per Hour" << "\n" << endl;
	cout << "********************************************************************************\n";
	cout << "\n" << endl;
	if (!fin.eof())
	{
		cout << "Error reading file " << month << endl;
		system("pause");
		exit(20);
	}
	fin.close();
}

int avghum() // Function that calculates average humidity
{
	int x = 0, sum = 0, count = 0, legend;
	double avg = 0.0;
	string month;
	ofstream fout;
	ifstream fin;

	cout << "January: 13janhum.txt" << endl;
	cout << "February: 13febhum.txt" << endl;
	cout << "March: 13marhum.txt" << endl;
	cout << "April: 13aprhum.txt" << endl;
	cout << "May: 13mayhum.txt" << endl;
	cout << "June: 13junhum.txt" << endl;
	cout << "July: 13julhum.txt" << endl;
	cout << "August: 13aughum.txt" << endl;
	cout << "September: 13sephum.txt" << endl;
	cout << "October: 13octhum.txt" << endl;
	cout << "November: 13novhum.txt" << endl;
	cout << "December: 13dechum.txt" << endl;
	cout << "\n" << endl;
	cout << "January: 14janhum.txt" << endl;
	cout << "February: 14febhum.txt" << endl;
	cout << "March: 14marhum.txt" << endl;
	cout << "April: 14aprhum.txt" << endl;
	cout << "May: 14mayhum.txt" << endl;
	cout << "June: 14junhum.txt" << endl;
	cout << "July: 14julhum.txt" << endl;
	cout << "August: 14aughum.txt" << endl;
	cout << "September: 14sephum.txt" << endl;
	cout << "October: 14octhum.txt" << endl;
	cout << "November: 14novhum.txt" << endl;
	cout << "Choose which month to display average humidity for your desired year: " << endl;

	cin >> month;

	// open file file_name for input
	fin.open(month.c_str(), ios::in);
	if (!fin.is_open())
	{
		cout << "Unable to open file " << month << endl;
		system("pause");
		exit(10);
	}

	// read text from file
	//      fin >> x;

	while (!fin.fail())
	{
		fin >> x;
		sum += x;
		count++;
	};
	sum -= x;

	avg = (sum) / (count - 1);

	cout << "\n" << endl;
	cout << "********************************************************************************\n";
	cout << "                 The average humidity of: " << month << " was: " << avg << "%" << "\n" << endl;
	cout << "********************************************************************************\n";
	cout << "\n" << endl;
	if (!fin.eof())
	{
		cout << "Error reading file " << month << endl;
		system("pause");
		exit(20);
	}
	fin.close();
}

int avgdew() // Function that calculates the average dew point
{
	int x = 0, sum = 0, count = 0, legend;
	double avg = 0.0;
	string month;
	ofstream fout;
	ifstream fin;

	cout << "January: 13jandew.txt" << endl;
	cout << "February: 13febdew.txt" << endl;
	cout << "March: 13mardew.txt" << endl;
	cout << "April: 13aprdew.txt" << endl;
	cout << "May: 13mardew.txt" << endl;
	cout << "June: 13jundew.txt" << endl;
	cout << "July: 13juldew.txt" << endl;
	cout << "August: 13augdew.txt" << endl;
	cout << "September: 13sepdew.txt" << endl;
	cout << "October: 13octdew.txt" << endl;
	cout << "November: 13novdew.txt" << endl;
	cout << "December: 13decdew.txt" << endl;
	cout << "\n" << endl;
	cout << "January: 14jandew.txt" << endl;
	cout << "February: 14febdew.txt" << endl;
	cout << "March: 14mardew.txt" << endl;
	cout << "April: 14aprdew.txt" << endl;
	cout << "May: 14mardew.txt" << endl;
	cout << "June: 14jundew.txt" << endl;
	cout << "July: 14juldew.txt" << endl;
	cout << "August: 14augdew.txt" << endl;
	cout << "September: 14sepdew.txt" << endl;
	cout << "October: 14octdew.txt" << endl;
	cout << "November: 14novdew.txt" << endl;
	cout << "Choose which month to display average dew point for your desired year: " << endl;

	cin >> month;

	// open file file_name for input
	fin.open(month.c_str(), ios::in);
	if (!fin.is_open())
	{
		cout << "Unable to open file " << month << endl;
		system("pause");
		exit(10);
	}

	// read text from file
	//      fin >> x;

	while (!fin.fail())
	{
		fin >> x;
		sum += x;
		count++;
	};
	sum -= x;

	avg = (sum) / (count - 1);

	cout << "\n" << endl;
	cout << "********************************************************************************\n";
	cout << "              The average dew point of : " << month << " was: " << avg << "\370F" << "\n" << endl;
	cout << "********************************************************************************\n";
	cout << "\n" << endl;
}

int avgpre() // Function that calculates average precipitation
{
	double x = 0.0, sum = 0, count = 0, legend;
	double avg = 0.0;
	string month;
	ofstream fout;
	ifstream fin;

	cout << "January: 13janpre.txt" << endl;
	cout << "February: 13febpre.txt" << endl;
	cout << "March: 13marpre.txt" << endl;
	cout << "April: 13aprpre.txt" << endl;
	cout << "May: 13marpre.txt" << endl;
	cout << "June: 13junpre.txt" << endl;
	cout << "July: 13julpre.txt" << endl;
	cout << "August: 13augpre.txt" << endl;
	cout << "September: 13seppre.txt" << endl;
	cout << "October: 13octpre.txt" << endl;
	cout << "November: 13novpre.txt" << endl;
	cout << "December: 13decpre.txt" << endl;
	cout << "\n" << endl;
	cout << "January: 14janpre.txt" << endl;
	cout << "February: 14febpre.txt" << endl;
	cout << "March: 14marpre.txt" << endl;
	cout << "April: 14aprpre.txt" << endl;
	cout << "May: 14marpre.txt" << endl;
	cout << "June: 14junpre.txt" << endl;
	cout << "July: 14julpre.txt" << endl;
	cout << "August: 14augpre.txt" << endl;
	cout << "September: 14seppre.txt" << endl;
	cout << "October: 14octpre.txt" << endl;
	cout << "November: 14novpre.txt" << endl;
	cout << "Choose which month to display average precipitaion for your desired year: " << endl;

	cin >> month;

	// open file file_name for input
	fin.open(month.c_str(), ios::in);
	if (!fin.is_open())
	{
		cout << "Unable to open file " << month << endl;
		system("pause");
		exit(10);
	}

	// read text from file
	//      fin >> x;

	while (!fin.fail())
	{
		fin >> x;
		sum += x;
		count++;
	};
	sum -= x;

	avg = (sum) / (count - 1);

	cout << "\n" << endl;
	cout << "********************************************************************************\n";
	cout << "              The Average precipitaion of : " << month << " was: " << avg << " Inches " << "\n" << endl;
	cout << "********************************************************************************\n";
	cout << "\n" << endl;
	if (!fin.eof())
	{
		cout << "Error reading file " << month << endl;
		system("pause");
		exit(20);
	}
	fin.close();
}

std::fstream& GotoLine(std::fstream& file, unsigned int num) // Function that picks out specific lines form a text file.
{
	string line;
	ifstream myfile("hlmonth13.txt");
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			file.seekg(std::ios::beg);
			for (int i = 0; i < num - 1; ++i){
				file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			return file;
		}
		myfile.close();
	}

	else
		if (myfile.fail())
		{
		cout << "The file failed to open." << "\n" // If program fails to open file it displays this message.
			<< "Check that the file currently exists." << "\n";
		system("pause");
		exit(1);
		}
}

std::fstream& GotoLine2(std::fstream& file, unsigned int num)
{
	string line;
	ifstream myfile("hlmonth14.txt");
	if (myfile.is_open())
	{
		while (!myfile.eof())
		{
			file.seekg(std::ios::beg);
			for (int i = 0; i < num - 1; ++i){
				file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}
			return file;
		}
		myfile.close();
	}

	else
		if (myfile.fail())
		{
		cout << "The file failed to open." << "\n" // If program fails to open file it displays this message.
			<< "Check that the file currently exists." << "\n";
		system("pause");
		exit(1);
		}
}


int main(array<System::String ^> ^args)
{
	int legend;

	while (1)
	{
		cout << "\n" << endl;
		cout << "****************************************\n";
		cout << "Weather Statistics Display for the year 2013/2014\n";
		cout << "1. Average monthly temperature data for Houston" << endl;
		cout << "2. High and Low temperature of the month for 2014" << endl;
		cout << "3. High and Low temperature of the month for 2013" << endl;
		cout << "4. Average Wind data for Houston" << endl;
		cout << "5. Average humidity data for Houston " << endl;
		cout << "6. Average dew point for Houston " << endl;
		cout << "7. Average precipitaion for the month" << endl;
		cout << "8. Exit program" << endl;
		cout << "****************************************\n\n";
		cout << "\n" << endl;
		cout << "Choose what you want to display: ";

		cin >> legend;

		if (legend == 1)
		{
			avgmonthtemp(); //Function call for average temperature 
		}

		if (legend == 2)
		{
			int choice;

			cout << "January: 1" << endl;
			cout << "February: 2" << endl;
			cout << "March: 3" << endl;
			cout << "April: 4" << endl;
			cout << "May: 5" << endl;
			cout << "June: 6" << endl;
			cout << "July: 7" << endl;
			cout << "August: 8" << endl;
			cout << "September: 9" << endl;
			cout << "October: 10" << endl;
			cout << "November: 11" << endl;
			cout << "Choose which month to display high and low temperature: " << endl;
			cin >> choice;

			fstream file("hlmonth14.txt");
			if (choice == 1)
			{
				GotoLine2(file, 1);
				GotoLine2(file, 2);

				string line1;
				string line2;
				file >> line1;
				file >> line2;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for January is: " << line1 << "\370F" << endl;
				cout << "The Min low temperature for January is: " << line2 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 2)
			{
				GotoLine2(file, 5);
				GotoLine2(file, 6);

				string line5;
				string line6;
				file >> line5;
				file >> line6;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for February is: " << line5 << "\370F" << endl;
				cout << "The Min low temperature for February is: " << line6 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 3)
			{
				GotoLine2(file, 9);
				GotoLine2(file, 10);

				string line9;
				string line10;
				file >> line9;
				file >> line10;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for March is: " << line9 << "\370F" << endl;
				cout << "The Min low temperature for March is: " << line10 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 4)
			{
				GotoLine2(file, 13);
				GotoLine2(file, 14);

				string line13;
				string line14;
				file >> line13;
				file >> line14;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for April is: " << line13 << "\370F" << endl;
				cout << "The Min low temperature for April is: " << line14 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 5)
			{
				GotoLine2(file, 17);
				GotoLine2(file, 18);

				string line17;
				string line18;
				file >> line17;
				file >> line18;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for May is: " << line17 << "\370F" << endl;
				cout << "The Min low temperature for May is: " << line18 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 6)
			{
				GotoLine2(file, 21);
				GotoLine2(file, 22);

				string line21;
				string line22;
				file >> line21;
				file >> line22;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for June is: " << line21 << "\370F" << endl;
				cout << "The Min low temperature for June is: " << line22 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 7)
			{
				GotoLine2(file, 25);
				GotoLine2(file, 26);

				string line25;
				string line26;
				file >> line25;
				file >> line26;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for July is: " << line25 << "\370F" << endl;
				cout << "The Min low temperature for July is: " << line26 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 8)
			{
				GotoLine2(file, 29);
				GotoLine2(file, 30);

				string line29;
				string line30;
				file >> line29;
				file >> line30;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for August is: " << line29 << "\370F" << endl;
				cout << "The Min low temperature for August is: " << line30 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 9)
			{
				GotoLine2(file, 33);
				GotoLine2(file, 34);

				string line33;
				string line34;
				file >> line33;
				file >> line34;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for September is: " << line33 << "\370F" << endl;
				cout << "The Min low temperature for September is: " << line34 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 10)
			{
				GotoLine2(file, 37);
				GotoLine2(file, 38);

				string line37;
				string line38;
				file >> line37;
				file >> line38;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for October is: " << line37 << "\370F" << endl;
				cout << "The Min low temperature for October is: " << line38 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 11)
			{
				GotoLine2(file, 41);
				GotoLine2(file, 42);

				string line41;
				string line42;
				file >> line41;
				file >> line42;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for Novemeber is: " << line41 << "\370F" << endl;
				cout << "The Min low temperature for November is: " << line42 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
		}
		if (legend == 3)
		{
			int choice;

			cout << "January: 1" << endl;
			cout << "February: 2" << endl;
			cout << "March: 3" << endl;
			cout << "April: 4" << endl;
			cout << "May: 5" << endl;
			cout << "June: 6" << endl;
			cout << "July: 7" << endl;
			cout << "August: 8" << endl;
			cout << "September: 9" << endl;
			cout << "October: 10" << endl;
			cout << "November: 11" << endl;
			cout << "Choose which month to display high and low temperature: " << endl;
			cin >> choice;

			fstream file("hlmonth13.txt");
			if (choice == 1)
			{
				GotoLine(file, 1);
				GotoLine(file, 2);

				string line1;
				string line2;
				file >> line1;
				file >> line2;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for January is: " << line1 << "\370F" << endl;
				cout << "The Min low temperature for January is: " << line2 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 2)
			{
				GotoLine(file, 5);
				GotoLine(file, 6);

				string line5;
				string line6;
				file >> line5;
				file >> line6;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for February is: " << line5 << "\370F" << endl;
				cout << "The Min low temperature for February is: " << line6 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 3)
			{
				GotoLine(file, 9);
				GotoLine(file, 10);

				string line9;
				string line10;
				file >> line9;
				file >> line10;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for March is: " << line9 << "\370F" << endl;
				cout << "The Min low temperature for March is: " << line10 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 4)
			{
				GotoLine(file, 13);
				GotoLine(file, 14);

				string line13;
				string line14;
				file >> line13;
				file >> line14;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for April is: " << line13 << "\370F" << endl;
				cout << "The Min low temperature for April is: " << line14 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 5)
			{
				GotoLine(file, 17);
				GotoLine(file, 18);

				string line17;
				string line18;
				file >> line17;
				file >> line18;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for May is: " << line17 << "\370F" << endl;
				cout << "The Min low temperature for May is: " << line18 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 6)
			{
				GotoLine(file, 21);
				GotoLine(file, 22);

				string line21;
				string line22;
				file >> line21;
				file >> line22;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for June is: " << line21 << "\370F" << endl;
				cout << "The Min low temperature for June is: " << line22 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 7)
			{
				GotoLine(file, 25);
				GotoLine(file, 26);

				string line25;
				string line26;
				file >> line25;
				file >> line26;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for July is: " << line25 << "\370F" << endl;
				cout << "The Min low temperature for July is: " << line26 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 8)
			{
				GotoLine(file, 29);
				GotoLine(file, 30);

				string line29;
				string line30;
				file >> line29;
				file >> line30;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for August is: " << line29 << "\370F" << endl;
				cout << "The Min low temperature for August is: " << line30 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 9)
			{
				GotoLine(file, 33);
				GotoLine(file, 34);

				string line33;
				string line34;
				file >> line33;
				file >> line34;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for September is: " << line33 << "\370F" << endl;
				cout << "The Min low temperature for September is: " << line34 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 10)
			{
				GotoLine(file, 37);
				GotoLine(file, 38);

				string line37;
				string line38;
				file >> line37;
				file >> line38;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for October is: " << line37 << "\370F" << endl;
				cout << "The Min low temperature for October is: " << line38 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
			else if (choice == 11)
			{
				GotoLine(file, 41);
				GotoLine(file, 42);

				string line41;
				string line42;
				file >> line41;
				file >> line42;

				cout << "\n" << endl;
				cout << "************************************************" << "\n";
				cout << "The Max high temperature for Novemeber is: " << line41 << "\370F" << endl;
				cout << "The Min low temperature for November is: " << line42 << "\370F" << endl;
				cout << "************************************************" << "\n";
				cout << "\n" << endl;
			}
		}
		if (legend == 4)
		{
			avgwind();
		}
		if (legend == 5)
		{
			avghum();
		}
		if (legend == 6)
		{
			avgdew();
		}
		if (legend == 7)
		{
			avgpre();
		}
		if (legend == 8)
		{
			cout << "Thank you for using the Weather Statistics Generator." << endl;
			break;
		}
	}
	system("pause");
	return 0;
}