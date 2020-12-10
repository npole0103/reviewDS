/*#include <iostream>
using namespace std;

class tree
{
public:
	tree() : left(NULL), right(NULL) {};

	int getData();
	tree* getRight();
	tree* getLeft();

	void setData(int value);
	void setRight(tree* r);
	void setLeft(tree* l);
	
private:
	int data;
	tree* right;
	tree* left;
};

class bstree
{
public:
	bstree() : root(NULL) {};
	void printTree();
	void show_content(tree* BST, int size);
	void t_insert(int data);
	void t_delete(int data);
private:
	tree* root;
};

int tree::getData()
{
	return data;
}

tree * tree::getRight()
{
	return right;
}

tree * tree::getLeft()
{
	return left;
}

void tree::setData(int value)
{
	data=value;
}

void tree::setRight(tree * r)
{
	right=r;
}

void tree::setLeft(tree * l)
{
	left = l;
}

void bstree::t_insert(int data)
{
	//루트가 NULL일 경우 트리에 아무것도 없다는 말임
	//루트가 NULL이 아닐 경우 루트의 데이터와 비교해서 작은지 큰지 비교

	if (root == NULL)
	{
		//root->setData(data);

		root = new tree; //루트에 직접 할당해주고
		root->setData(data); //데이터를 대입
	}
	else
	{
		tree* check_tree = new tree; //체크하는 트리 하나를 만들어서 루트처럼 사용, 왜냐하면 루트값은 변하면 안되니까 check_tree에서 넣어서 check_tree를 사용한다.
		check_tree = root;

		while (1) //무한 반복
		{
			if (data < check_tree->getData()) //입력된 데이터가 작을 때
			{
				if (check_tree->getLeft() == NULL) //체크트리의 왼쪽 값이 널 값이라면 즉 아무것도 없는 상태라면
				{
					tree* new_tree = new tree;
					new_tree->setData(data);

					check_tree->setLeft(new_tree); //root의 left에 할당된 것을 대입
					break;
				}
				else //체크트리의 왼쪽 값이 존재한다면
					check_tree = check_tree->getLeft(); //체크트리의 기준을 왼쪽부터 시작해서 다시 반복
			}
			else if (check_tree->getData() < data) //입력된 데이터가 클 때
			{
				if (check_tree->getRight() == NULL) //체크트리의 오른쪽이 널 값이라면 즉 아무것도 없는 상태라면
				{
					tree* new_tree = new tree;
					new_tree->setData(data);

					check_tree->setRight(new_tree); //root의 right에 할당된 것을 대입
					break;
				}
				else //체크트리의 오른쪽에 데이터가 존재한다면 체크트리를 바꿔줌
					check_tree = check_tree->getRight();
			}
			else if (check_tree->getData() == data)//같은 값일 때
			{
				cout << "이미 존재하는 값 입니다." << endl;
				break;
			}

		}
	}
}

void bstree::t_delete(int data)
{

}


void bstree::printTree()
{
	show_content(root, 0);
}

void bstree::show_content(tree* BST, int size)
{
	if (BST != NULL && BST->getData() != NULL)
	{
		size += 2;
		show_content(BST->getRight(), size);
		for (int i = 0; i<size; i++)
			cout << " ";
		cout << BST->getData() << endl;
		show_content(BST->getLeft(), size++);
	}
}

int main()
{
	bstree tree;
	int num;
	while (1)
	{
		cout << "넣을 값을 입력하세요" << endl;
		cin >> num;
		tree.t_insert(num);
		tree.printTree();
	}
}*/