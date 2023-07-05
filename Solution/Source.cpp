#include <iostream>
#include <string>

// STL <queue ���̺귯��>
#include <queue>

// STL <stack ���̺귯��>
#include <stack>

// STL <vector ���̺귯��>
#include <vector>

using namespace std;


int main()
{

#pragma region �����̳� �����
	// ���� �����̳��� �������̽��� �����Ͽ� ���� �����
	// ���ѵǰų� ������ �����̳��Դϴ�.

	// std::queue
	/* std::queue<int> queue;
	
	queue.push(10);
	queue.push(20);
	queue.push(30);
	queue.push(40);
	queue.push(50);

	// queue.pop(); ���� �� ���� 10�� ���� 20�� ��µǰ� ��

	// std::cout << queue[0] << std::endl; (X) �ε��� ���� �Ұ���
	//std::cout << queue.front() << std::endl; 


	// 10 20 30 40 50
	while (queue.size() > 0)
	{
		std::cout << queue.front() << " ";
		queue.pop();
	}
	std::cout << std::endl;
	// �����̳��� �����Ͱ� ���� �� pop�� �õ��ϸ� 
	// ��Ÿ�� ������ �߻��մϴ�.
	// queue.pop(); (X)
	*/

	// std::swap
	/*
	int a = 10;
	int b = 20;

	std::swap(a, b);

	cout << "a : " << a << "     b : " << b << endl;
	*/

	// std::stack
	/*
	std::stack<int> stack;

	stack.push(10);
	stack.push(20);
	stack.push(30);
	stack.push(40);
	stack.push(50);

	while (stack.size() != 0)
	{
		std::cout << stack.top() << std::endl;
		stack.pop();
	}
	*/

	// std::iterator�ݺ���
	/*
	std::vector<int> vector;

	vector.push_back(10); // 10
	vector.push_back(20); // 10 20
	vector.push_back(30); // 10 20 30

	std::vector<int>::iterator iter;

	vector.insert(vector.begin() + 1, 999);

	vector.erase(vector.begin() + 3);

	iter = vector.begin();

	// iter�� ����Ű�� ���� ������ּ���.
	// std::cout << "iter�� ����Ű�� �� : " << *iter << std::endl;
	for (; iter != vector.end(); iter++)
	{
		cout << *iter << endl;
	}
	*/
	

#pragma endregion





	return 0;
}
