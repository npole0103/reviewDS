////https://goodmilktea.tistory.com/75
//#include <iostream> //�ּ� ��
//#include <algorithm>
//#define MAX 100001
//using namespace std;
//
//class MinHeap {
//private:
//	int arr[MAX] = { 0, };
//	int size;
//public:
//	MinHeap()
//	{
//		size = 0;
//	}
//	void ins(MinHeap* mh, int data)
//	{
//		mh->arr[++size] = data;
//
//		int idx = size;
//
//		while (idx / 2 > 0) //��Ʈ �������� �ݺ��� ����
//		{
//			if (mh->arr[idx] < mh->arr[idx / 2]) //�ڽĳ�� ���� �θ��庸�� ������
//				swap(mh->arr[idx], mh->arr[idx / 2]);
//			else
//				break;
//			idx /= 2;
//		}
//	}
//
//	void del(MinHeap* mh)
//	{
//		if (size == 0)
//		{
//			cout << "0" << "\n";
//			return;
//		}
//
//		cout << mh->arr[1] << "\n";
//
//		mh->arr[1] = mh->arr[size];
//		mh->arr[size--] = 0; //������ �ε����� ����
//
//		int idx = 1;
//
//		while (1)
//		{
//			//Ʈ�� �ڽ��� 2���� ���
//			if (idx * 2 + 1 <= size && mh->arr[idx * 2 + 1] != 0)
//			{
//				if (mh->arr[idx * 2] <= mh->arr[idx * 2 + 1]) //������ ��尡 �� ũ�ų� ����(���� ���� �θ�� swap)
//				{
//					if (mh->arr[idx] > mh->arr[idx * 2])
//					{
//						swap(mh->arr[idx], mh->arr[idx * 2]);
//						idx = idx * 2;
//					}
//					else
//						return;
//				}
//				else //���� ��尡 �� ū ��� (������ ���� �θ�� swap)
//					if (mh->arr[idx] > mh->arr[idx * 2 + 1])
//					{
//						swap(mh->arr[idx], mh->arr[idx * 2 + 1]);
//						idx = idx * 2 + 1;
//					}
//					else
//						return;
//			}
//			//Ʈ�� �ڽ��� 1���� ���
//			else if (idx * 2 <= size && mh->arr[idx * 2] != 0)
//			{
//				if (mh->arr[idx] > mh->arr[idx * 2])
//					swap(mh->arr[idx], mh->arr[idx * 2]);
//				else
//					return;
//			}
//			//�ڽ��� ���� ���
//			else
//				return;
//		}
//	}
//};
//
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int cnt;
//	int cmd;
//	MinHeap mh;
//
//	cin >> cnt;
//
//	while (cnt--)
//	{
//		cin >> cmd;
//
//		if (cmd == 0)
//			mh.del(&mh);
//		else
//			mh.ins(&mh, cmd);
//	}
//}