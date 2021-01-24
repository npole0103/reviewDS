////https://goodmilktea.tistory.com/75
//#include <iostream> //최소 힙
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
//		while (idx / 2 > 0) //루트 노드까지만 반복문 실행
//		{
//			if (mh->arr[idx] < mh->arr[idx / 2]) //자식노드 값이 부모노드보다 작으면
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
//		mh->arr[size--] = 0; //마지막 인덱스를 지움
//
//		int idx = 1;
//
//		while (1)
//		{
//			//트리 자식이 2개인 경우
//			if (idx * 2 + 1 <= size && mh->arr[idx * 2 + 1] != 0)
//			{
//				if (mh->arr[idx * 2] <= mh->arr[idx * 2 + 1]) //오른쪽 노드가 더 크거나 같고(왼쪽 값을 부모랑 swap)
//				{
//					if (mh->arr[idx] > mh->arr[idx * 2])
//					{
//						swap(mh->arr[idx], mh->arr[idx * 2]);
//						idx = idx * 2;
//					}
//					else
//						return;
//				}
//				else //왼쪽 노드가 더 큰 경우 (오른쪽 값을 부모랑 swap)
//					if (mh->arr[idx] > mh->arr[idx * 2 + 1])
//					{
//						swap(mh->arr[idx], mh->arr[idx * 2 + 1]);
//						idx = idx * 2 + 1;
//					}
//					else
//						return;
//			}
//			//트리 자식이 1개인 경우
//			else if (idx * 2 <= size && mh->arr[idx * 2] != 0)
//			{
//				if (mh->arr[idx] > mh->arr[idx * 2])
//					swap(mh->arr[idx], mh->arr[idx * 2]);
//				else
//					return;
//			}
//			//자식이 없는 경우
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