//#include <iostream>
//using namespace std;
//
//int binarySearch(int arr[],int size, int value)
//{
//	int low = 0;
//	int high = size - 1;
//
//	int mid;
//
//	while (low <= high) // low�� high���� ���ų� ���� �� ����
//	{
//		mid = (low + high) / 2; //���� ���
//
//		if (value == arr[mid]) //ã�� ���ڰ� �߰��� ��ġ�Ѵٸ�
//			return mid;
//		else if (arr[mid] < value) //ã�� ���� �߰����� ũ�ٸ�
//			low = mid + 1; //mid + 1 ~ high �˻������� ���� �� mid + 1 ~ high ��ġ
//		else // (value < arr[mid])
//			high = mid - 1; //low ~ mid -1�� �˻������� ���� �� low ~ mid - 1 ��ġ
//	}
//	
//	return -1;
//}
//
//int main()
//{
//	int a[] = { 12, 24, 25, 29, 42, 55, 72, 79, 81, 99 };
//	int size = 10;
//	int value;
//	cout << "find Integer : ";
//	cin >> value;
//
//	cout << "value : " << value << " " << "index : " << binarySearch(a, size ,value);
//}