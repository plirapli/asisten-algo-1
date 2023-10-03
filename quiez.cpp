#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
	//	char username[100], password[100];
	string password, username;
	int menu;
	string code1, code2, name1, name2;
	string check, repeat;
	bool checking = false;

	printf("\tWelcome to UPN Veteran Yogyakarta\n");
	printf("\n\n\tUsername:");
	cin >> username;
	printf("\tPassword:");
	cin >> password;

	if (username == "Rifka" && password == "062")
	{
		system("CLS");
		cout << "\n\tWelcome " << username << "!\n";
		cout << "\n\tStudents Menu:\n\t1. Input KRS\n\t2. Print KRS\n\t3. Check Schedule\n\tChoice:";
		scanf("%i", &menu);

		switch (menu)
		{
		case 1:
			cout << "\n\tInput 2 Subject Study:\n";
			cout << "\t\t1. Code Subject:";
			cin >> code1;
			cin.ignore();
			cout << "\t\t   Name Subject:";
			getline(cin, name1);
			cout << "\t\t2. Code Subject:";
			cin >> code2;
			cin.ignore();
			cout << "\t\t   Name Subject:";
			getline(cin, name2);
			checking = true;
			break;

		case 2:
			if (checking)
			{
				cout << "\n\n\t\t------- KRS -------\n";
				cout << "\t\t| " << code1 << " | " << name1 << " | \n";
				cout << "\t\t| " << code2 << " | " << name2 << " | \n";
			}
			else
			{
				cout << "\n\n\t !!! YOU HAVE NOT INPUT KRS YET !!!";
			}
			break;

		case 3:
			if (checking)
			{
				cout << "\n\n\tInput code subject:";
				cin >> check;
				if (check == code1)
				{
					cout << "\tYour code subject of " << check << " is code for subject : " << name1;
				}
				else if (check == code2)
				{
					cout << "\tYour code subject of " << check << " is code for subject : " << name2;
				}
				else
				{
					cout << "\t\tCode subject was not found!!";
				}
			}
			else
			{
				cout << "\n\n\t !!! YOU HAVE NOT INPUT KRS YET !!!";
			}
			break;
		default:
			cout << "\n\tMenu was not ready just yet!!";
		}
		cout << "\n\n\t2 more chance to go back to menu! back to menu?  (y/n) : ";
		cin >> repeat;

		if (repeat == "y" || repeat == "Y")
		{
			system("CLS");
			cout << "\n\tWelcome " << username << "!\n";
			cout << "\n\tStudents Menu:\n\t1. Input KRS\n\t2. Print KRS\n\t3. Check Schedule\n\tChoice:";
			scanf("%i", &menu);

			switch (menu)
			{
			case 1:
				cout << "\n\tInput 2 Subject Study:\n";
				cout << "\t\t1. Code Subject:";
				cin >> code1;
				cin.ignore();
				cout << "\t\t   Name Subject:";
				getline(cin, name1);
				cout << "\t\t2. Code Subject:";
				cin >> code2;
				cin.ignore();
				cout << "\t\t   Name Subject:";
				getline(cin, name2);
				checking = true;
				break;

			case 2:
				if (checking)
				{
					cout << "\n\n\t\t------- KRS -------\n";
					cout << "\t\t| " << code1 << " | " << name1 << " | \n";
					cout << "\t\t| " << code2 << " | " << name2 << " | \n";
				}
				else
				{
					cout << "\n\n\t !!! YOU HAVE NOT INPUT KRS YET !!!";
				}
				break;

			case 3:
				if (checking)
				{
					cout << "\n\nInput code subject:";
					cin >> check;
					if (check == code1)
					{
						cout << "\tYour code subject of " << check << " is code for subject : " << name1;
					}
					else if (check == code2)
					{
						cout << "\tYour code subject of " << check << " is code for subject : " << name2;
					}
					else
					{
						cout << "\t\tCode subject was not found!!";
					}
				}
				else
				{
					cout << "\n\n\t !!! YOU HAVE NOT INPUT KRS YET !!!";
				}
				break;
			default:
				cout << "\n\tMenu was not ready just yet!!";
			}
			cout << "\n\n\t1 more chance to go back to menu! back to menu?  (y/n) : ";
			cin >> repeat;

			if (repeat == "y" || repeat == "Y")
			{
				system("CLS");
				cout << "\n\tWelcome " << username << "!\n";
				cout << "\n\tStudents Menu:\n\t1. Input KRS\n\t2. Print KRS\n\t3. Check Schedule\n\tChoice:";
				scanf("%i", &menu);

				switch (menu)
				{
				case 1:
					cout << "\n\tInput 2 Subject Study:\n";
					cout << "\t\t1. Code Subject:";
					cin >> code1;
					cin.ignore();
					cout << "\t\t   Name Subject:";
					getline(cin, name1);
					cout << "\t\t2. Code Subject:";
					cin >> code2;
					cin.ignore();
					cout << "\t\t   Name Subject:";
					getline(cin, name2);
					checking = true;
					break;

				case 2:
					if (checking)
					{
						cout << "\n\n\t\t------- KRS -------\n";
						cout << "\t\t| " << code1 << " | " << name1 << " | \n";
						cout << "\t\t| " << code2 << " | " << name2 << " | \n";
					}
					else
					{
						cout << "\n\n\t !!! YOU HAVE NOT INPUT KRS YET !!!";
					}
					break;

				case 3:
					if (checking)
					{
						cout << "\n\n\tInput code subject:";
						cin >> check;
						if (check == code1)
						{
							cout << "\tYour code subject of " << check << " is code for subject : " << name1;
						}
						else if (check == code2)
						{
							cout << "\tYour code subject of " << check << " is code for subject : " << name2;
						}
						else
						{
							cout << "\t\tCode subject was not found!!";
						}
					}
					else
					{
						cout << "\n\n\t !!! YOU HAVE NOT INPUT KRS YET !!!";
					}
					break;
				default:
					cout << "\n\tMenu was not ready just yet!!";
				}
				cout << "\n\n\tThank you!!!\n\tInformatika Beda!\n\tInformatika Satu!\n\tInformatika Beda Tapi Satu!\n";
			}

			else
			{
				cout << "\n\n\tThank you!!!\n\tInformatika Beda!\n\tInformatika Satu!\n\tInformatika Beda Tapi Satu!\n";
			}
		}

		else
		{
			cout << "\n\n\tThank you!!!\n\tInformatika Beda!\n\tInformatika Satu!\n\tInformatika Beda Tapi Satu!\n";
		}
	}
	else if (username == "Rifka" && password != "062")
	{
		cout << "\t\tWrong password!!";
	}
	else if (username != "Rifka")
	{
		cout << "\t\tusername not found!!";
	}

	return 0;
}
