//#include <iostream> //https://blog.naver.com/ssootube/222125300914
//using namespace std;
//
//void swap(int arr[], int i, int j)
//{
//	int temp = arr[i];
//	arr[i] = arr[j];
//	arr[j] = temp;
//}
//
//void quickSort(int arr[], int start, int end)
//{
//	if (start >= end) // 시작점이 끝 점보다 크거나 같으면
//		return;
//
//	int pivot = arr[start]; //first element is pivot
//
//	int low = start + 1; //low point
//	int high = end; // high point
//
//	while (low <= high) //high point가 low보다 작아질 떄까지
//	{
//		cout << "Ppivot : " << pivot << endl;
//		cout << "Aarr low : " << arr[low] << endl;
//		cout << "Llow : " << low << endl;
//		cout << "Aarr high : " << arr[high] << endl;
//		cout << "Hhigh : " << high << endl;
//		cout << "Hhigh while: " << endl;
//		while (low <= end && arr[low] <= pivot) // pivot보다 작은 수라면
//		{
//			low++;
//			cout << "low" << endl;
//		}
//		while (start <= high && pivot < arr[high]) //pivot보다 큰 수라면 //중복 수 삽입하기 위해 pivot < arr[high]?
//		{
//			high--;
//			cout << "pivot : " << pivot<< endl;
//			cout << "arr low : " << arr[low] <<endl;
//			cout << "low : " << low << endl;
//			cout << "arr high : " << arr[high] << endl;
//			cout << "high : " << high<< endl;
//			cout << "high while: " << endl;
//		}
//
//		if (low < high) //low와 high가 교차하지 않았다면 즉, 아직 pivot 포인트까지 도달하지 않았다면
//		{
//			cout << "before swap" << endl;
//			cout << "arr low : " << arr[low] << endl;
//			cout << "low : " << low << endl;
//			cout << "arr high : " << arr[high] << endl;
//			cout << "high : " << high << endl;
//			swap(arr, low, high);
//			cout << "after swap" << endl;
//			cout << "arr low : " << arr[low] << endl;
//			cout << "low : " << low << endl;
//			cout << "arr high : " << arr[high] << endl;
//			cout << "high : " << high << endl;
//		}
//	}
//	swap(arr, start, high); //기준점 pivot이 저장되어있던 start인덱스와 중점 인덱스인 high를 swap
//	quickSort(arr, start, high - 1);
//	quickSort(arr, high + 1, end);
//}
//
//int main()
//{
//	int arr[] = { 0, 9, 2, 5, 6 ,6, 6, 7, 4, 3};
//	quickSort(arr, 0, 9);
//
//	for (int i = 0; i < 10; i++)
//		cout << arr[i] << " ";
//
//	cout << endl;
//	return 0;
//}