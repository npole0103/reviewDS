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
//	if (start >= end) // �������� �� ������ ũ�ų� ������
//		return;
//
//	int pivot = arr[start]; //first element is pivot
//
//	int low = start + 1; //low point
//	int high = end; // high point
//
//	while (low <= high) //high point�� low���� �۾��� ������
//	{
//		cout << "Ppivot : " << pivot << endl;
//		cout << "Aarr low : " << arr[low] << endl;
//		cout << "Llow : " << low << endl;
//		cout << "Aarr high : " << arr[high] << endl;
//		cout << "Hhigh : " << high << endl;
//		cout << "Hhigh while: " << endl;
//		while (low <= end && arr[low] <= pivot) // pivot���� ���� �����
//		{
//			low++;
//			cout << "low" << endl;
//		}
//		while (start <= high && pivot < arr[high]) //pivot���� ū ����� //�ߺ� �� �����ϱ� ���� pivot < arr[high]?
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
//		if (low < high) //low�� high�� �������� �ʾҴٸ� ��, ���� pivot ����Ʈ���� �������� �ʾҴٸ�
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
//	swap(arr, start, high); //������ pivot�� ����Ǿ��ִ� start�ε����� ���� �ε����� high�� swap
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