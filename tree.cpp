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
	//��Ʈ�� NULL�� ��� Ʈ���� �ƹ��͵� ���ٴ� ����
	//��Ʈ�� NULL�� �ƴ� ��� ��Ʈ�� �����Ϳ� ���ؼ� ������ ū�� ��

	if (root == NULL)
	{
		//root->setData(data);

		root = new tree; //��Ʈ�� ���� �Ҵ����ְ�
		root->setData(data); //�����͸� ����
	}
	else
	{
		tree* check_tree = new tree; //üũ�ϴ� Ʈ�� �ϳ��� ���� ��Ʈó�� ���, �ֳ��ϸ� ��Ʈ���� ���ϸ� �ȵǴϱ� check_tree���� �־ check_tree�� ����Ѵ�.
		check_tree = root;

		while (1) //���� �ݺ�
		{
			if (data < check_tree->getData()) //�Էµ� �����Ͱ� ���� ��
			{
				if (check_tree->getLeft() == NULL) //üũƮ���� ���� ���� �� ���̶�� �� �ƹ��͵� ���� ���¶��
				{
					tree* new_tree = new tree;
					new_tree->setData(data);

					check_tree->setLeft(new_tree); //root�� left�� �Ҵ�� ���� ����
					break;
				}
				else //üũƮ���� ���� ���� �����Ѵٸ�
					check_tree = check_tree->getLeft(); //üũƮ���� ������ ���ʺ��� �����ؼ� �ٽ� �ݺ�
			}
			else if (check_tree->getData() < data) //�Էµ� �����Ͱ� Ŭ ��
			{
				if (check_tree->getRight() == NULL) //üũƮ���� �������� �� ���̶�� �� �ƹ��͵� ���� ���¶��
				{
					tree* new_tree = new tree;
					new_tree->setData(data);

					check_tree->setRight(new_tree); //root�� right�� �Ҵ�� ���� ����
					break;
				}
				else //üũƮ���� �����ʿ� �����Ͱ� �����Ѵٸ� üũƮ���� �ٲ���
					check_tree = check_tree->getRight();
			}
			else if (check_tree->getData() == data)//���� ���� ��
			{
				cout << "�̹� �����ϴ� �� �Դϴ�." << endl;
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
		cout << "���� ���� �Է��ϼ���" << endl;
		cin >> num;
		tree.t_insert(num);
		tree.printTree();
	}
}*/