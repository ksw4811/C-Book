#include "BOOK.h"

int Book::menu()
{
	system("cls");
	int nButton;
	cout << "=====================================================================================================================" << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "\t\t\t\t\tȯ���մϴ�. �������� ���α׷��Դϴ�." << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "\t\t\t\t\t\t\t�޴�" << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "\t\t\t\t\t\t1. ��ü ���� ��� �ҷ�����" << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "\t\t\t\t\t\t2. ���� �߰��ϱ�" << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "\t\t\t\t\t\t3. ���� �����ϱ�" << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "\t\t\t\t\t\t4. ���� ���� �˻�" << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "\t\t\t\t\t\t5. ���� ��� �ʱ�ȭ" << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "\t\t\t\t\t\t6. ����" << endl;
	cout << "=====================================================================================================================" << endl;
	cout << "����� ����� ��ȣ�� �Է��ϰ� Enter�� ���� �ּ���(6���� �����ų� �ٸ����� ������ ���α׷��� ����˴ϴ�.) : ";
	cin >> nButton;

	if (nButton >= 1 && nButton <= 6)
	{
		return nButton;
	}
	else
	{
		return 0;
	}
}

void Book::error()
{
	cout << endl << "\t\t\t\t\t== �ٽ� �õ��Ͽ��ּ��� ==" << endl;
	system("pause");
}

void Book::NoBook()
{
	cout << endl << "\t\t\t\t\t == ������ �����ϴ�. ���� ȭ������ ���ư��ϴ�. == " << endl;
	system("pause");
}

void Book::CompleteDelete()
{
	cout << endl << "\t\t\t\t\t== ���� ������ �Ϸ�Ǿ����ϴ�!! ==" << endl;
	system("pause");
}

void Book::CompleteInsert()
{
	cout << endl << "\t\t\t\t\t== ���� �߰��� �Ϸ�Ǿ����ϴ�!! ==" << endl;
	system("pause");
}

void Book::GetName()
{
	cout << endl << "å�� �̸�(���� 100�� �̳�, �ѱ� 30�� �̳�, ��������, ó���� ������ ������ �������) : ";
}

void Book::GetWriter()
{
	cout << endl << "å�� �۰�(���� 100�� �̳�, �ѱ� 30�� �̳�, ��������, ó���� ������ ������ �������) : ";
}

void Book::GetYear()
{
	cout << endl << "���� �⵵(0~9999������ ���ڸ� �Է��Ͽ� �ּ���) : ";
}

void Book::GetInformation()
{
	cout << endl << "\t\t\tå�� ����(���� 100�� �̳�, �ѱ� 30�� �̳�, ��������, ó���� ������ ������ �������) : ";
}

void Book::HowInitialize()
{
	cout << "\t\t\t\t\t== ��ü ���� ����� �ʱ�ȭ �Ͻðڽ��ϱ�?? ==" << endl << endl << "\t\t\t\t\t== ��� �Ͻô� ��� 'y'�� �Է� �� ���͸� �����ּ��� ==" << endl << endl;
}

void Book::InitializeComplete()
{
	cout << "\t\t\t\t\t== �ʱ�ȭ�� �Ϸ� �Ǿ����ϴ�!! ==" << endl;
	system("pause");
}