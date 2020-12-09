//#include <iostream>
//using namespace std;
//
//void insertionSort(int data[], int size)
//{
//	if (size == 0)
//		return;
//
//	int prev;
//	int j;
//
//	for (int i = 1; i < size; i++)
//	{
//		prev = data[i]; //store the current value in prev
//		j = i;
//
//		while (j > 0 && prev < data[j - 1]) // if data[j-1] is larger than prev(data[j]), swap the these
//		{
//			data[j] = data[j - 1];
//
//			j--;
//		}
//		data[j] = prev;
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
//	insertionSort(data, 10);
//	cout << endl;
//
//	for (int i = 0; i < 10; i++)
//		cout << data[i] << " ";
//
//	cout << endl;
//	return 0;
//}