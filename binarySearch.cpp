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
//	while (low <= high) // low가 high보다 같거나 작을 때 실행
//	{
//		mid = (low + high) / 2; //중점 계산
//
//		if (value == arr[mid]) //찾는 숫자가 중간에 위치한다면
//			return mid;
//		else if (arr[mid] < value) //찾는 값이 중간보다 크다면
//			low = mid + 1; //mid + 1 ~ high 검색범위로 설정 후 mid + 1 ~ high 서치
//		else // (value < arr[mid])
//			high = mid - 1; //low ~ mid -1을 검색범위로 설정 후 low ~ mid - 1 서치
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