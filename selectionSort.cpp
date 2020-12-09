//#include <iostream>
//using namespace std;
//
//void selectionSort(int data[], int size)
//{
//	if (size == 0)
//		return;
//
//	for (int i = size - 1; i > 0 ; --i) // reducing the size until size == 0
//	{
//		int largest = data[0];
//		int largestindex = 0;
//		int temp = 0;
//
//		for (int j = 1; j <= i; ++j) //find the max value and index
//			if (data[j] > largest)
//			{
//				largest = data[j];
//				largestindex = j;
//			}
//
//		//swap the value
//		temp = data[i];
//		data[i] = largest;
//		data[largestindex] = temp;
//	}
//}	
//
//
//int main()
//{
//	int data[10] = {0, 9, 2, 5, 6 ,1, 8, 7, 4, 3};
//
//	for(int i = 0 ; i < 10; i++)
//		cout << data[i] << " ";
//
//	cout << endl;
//
//	selectionSort(data, 10);
//	cout << endl;
//
//	for (int i = 0; i < 10; i++)
//		cout << data[i] << " ";
//
//	cout << endl;
//	return 0;
//}