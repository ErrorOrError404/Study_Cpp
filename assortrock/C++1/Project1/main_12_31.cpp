#include <stdio.h>

/*
* �Ѥ� ������ ���� �Ѥ�
* 1. ��������(�Լ� ������ �����!)
* 2. ��������
* 3. �������� (Ű����: static �� �Բ� ���)
* 4. �ܺκ��� (Ű����: extern �� �Բ� ���)
*/

/*
* �Ѥ� �޸� ���� �Ѥ�  �� ����ȭ ������, C++�� �޸𸮸� �ڱⰡ �����ϱ� ������ �޸� ����, �޸� ��� ��Ȳ�� �� �ľ��ؾ� ��!
* 1. ���� ���� (���������� ����ϴ� ���� + ����� ������� ����, �񿵱��� ����!!)
* 2. ������ ���� (��������, ��������, �ܺκ����� ����ϴ� ����)
* 3. �б� ����(�ڵ�, ROM)
* 4. �� ����
*/

/*
* �Ѥ� ������ ���� Ư¡ �Ѥ�
* ���α׷��� ���� �� ����,
* ���α׷��� ���� �� ����
* ���α׷��� ���� ���� ��� ���� ��� �����Ǿ� �ִ� ��
*  
*/


// �������� (�����Ǵ� ��)
int g_i = 0; // ��ü������ Data ������ �����

void Test()  // void�� �Լ��� ��ȯ ��(return)�� ���� ��쿡 �����ִ� type��, void �ܾ� ��: �ƹ��͵� ����
{
	// main �Լ��� �������� a�� 100�� �����϶�� �����ϰ� ������ �ǻ� 
	// Test �Լ��� �������� a�� 100�� �����϶�� �ڵ�� 
	// Test �Լ��� �������� a�� ����Ǿ� ���� �����Ƿ�
	// ���� ���� �Ұ�!
	// a = 100;

	// �ݸ� g_i�� � �޸� �����̵� ����ִ� ����������!
	++g_i;
}


void Test_2(); // �Լ� ���� �س���


#include "func.h" 
// ������ ���� �Լ��� ���� �Ǿ�����
// .exe �� ���������� ����� �������� link �۾��� ���� func.cpp�� �ۼ��� �ڵ尡 ���ٵ�

// cpp�� h�� ���� �����ϴ� ������
// �ڵ带 �ս��� �����ϱ� ���ؼ�... 





// �������� ���� - ���� ������ ����� ���Ͽ����� ����� �����ϴ�. ���� �ٸ� ���ϰ� �����ϴ�
// �������� �ʱ�ȭ ������ ���� ó������ ����ǰ� ���Ŀ� ������� �ʴ´�
// static int g_iStatic = 0;

#include "common.h"

int g_iExtern = 11;


int main()
{
	// �������� (�����Ǵ� ��)
	int a = 10;


	/*g_iStatic += 100;

	
	printf("\n%d ", g_iStatic);*/
	
	printf("\n%d\n", g_iExtern);

	Test();

	printing();
	

	Add(0, 0);

	Test();
	Test();

	Test_2(); // �Լ� ȣ���� ������. �Լ� ���Ǵ� ���� �ʾ����� ������ �߱� ����

	return 0;
}

/// <summary>
/// ���� Test_2��� �Լ��� ���� �ϰ� ���� ���Ǹ� ���� ������ link �ܰ迡�� ��������
/// ���� �ڵ�: LNK 
/// 
/// ������ Ʋ���� ������ ����
/// ���� �ڵ�: C
/// 
/// 
/// </summary>
void Test_2()
{
	++g_i;
}