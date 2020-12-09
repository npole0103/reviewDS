# reviewDS

# ���ڷᱸ�� ������

## ��Iterator 
�ڷᱸ�� ������ ��Ҹ� ��ȸ�ϴ� ��ü

```cpp
for (vector<int>::iterator i = items.begin(); i != items.end(); ++i)
{  
	std::cout << *i;
}
for(auto i : items)
{
 	std::cout << i;
}
```
[Iterlator ����1](https://www.devoops.kr/45?category=691976)

---
# ��Vector
ũ�⸦ �������� �Ҵ��ϴ� �迭

�޸𸮴� Heap������ �Ҵ�Ǹ� ������ ����

���� ����(���������� �д� ���� �ƴ� Ư�� ���̸�ŭ �ǳ� �ٸ鼭 ���� �� �ִ� ���)�� ����

[Vector ����](https://blog.naver.com/jjaing01/221923350190)

---
# ��Stack

���� �� �ڷᰡ ���߿� ������ LIFO ����

���ۿ����÷ο� ����� �̿��� ������ �� �� ���ظ޸𸮿��� ��. DFS���� ���.

[Stack ����](https://life-with-coding.tistory.com/406)

---
# ��List
������� ������ �����ϴ� ������� �ڷᱸ��

STL�� �ִ� ����Ʈ�� ���� ���� ����Ʈ��

[List ����](https://hyeonstorage.tistory.com/326)

---
# ��Dequeue
Vector�� ����� �迭 ��� �����̳�����

Vector�� ������ �����ϴ� Ư¡�� ����.

[Dequeue ����](https://hyeonstorage.tistory.com/325?category=614599)

---
# ��Map / Multimap / Hash map
���� ���Ǵ� �����̳ʷ� key�� value�� ������ �����Ѵ�.

Set�� �ٸ� ���� set�� key�� ���������� map�� key�� value ������ �����.

������ key�� �ߺ� ����� �� ������ �ߺ� key�� �����ؾ��Ѵٸ� multimap �̿��ؾ���.

���� ���� Ʈ���� �̿��Ͽ� �α� �ð� ���⵵�� ����.

[Map ����1](https://blog.naver.com/qw4898/221473156965)
[Map ����2](https://hyeonstorage.tistory.com/329?category=614599)
[Map ����3](https://moonsupport.tistory.com/232)
[Map ����4](https://hyeonstorage.tistory.com/330?category=614599)  
<<multimap key�� �ߺ��ż� []������ ���� ����

---
# ��Set(Ʈ������) �ߺ�x / Multiset �ߺ� ���尡��
���� �����̳��� key��� ���� �������� �̷���� �����̳�(��� ���� �����̳� == ��� ��� �����̳�)

���� ���� Ʈ���� �����Ǿ� ���� Ʈ���� Ư¡�� ����.
[Set ����1](https://hyeonstorage.tistory.com/327?category=614599)

---
��BinarySearchTree
ó�� �� ���� root ���� �ǰ� ū ���� ���������� ���� ���� �������� �ִ� Ʈ�� �˰���
[BST ����1](https://www.youtube.com/watch?v=LwpLXm3eb6A)

---
# ��Btree
��尡 �߰��� ���� �߰� ���� ���� ���� �ٲ�
[Btree](https://www.youtube.com/watch?v=bhKixY-cZHE)

---
# ��Heap tree
���������� ��� ���� ���� ��尡 ���� ũ�ٸ� ���������� ���� ��� �������� ���� ��忡 ū ���� ���� ������ ������.
[Heap Tree ����1](https://www.youtube.com/watch?v=VEYSSANa-cw)

---
# ��Binary search
�ð� ���⵵ log n
[Binary Search ����1](https://www.youtube.com/watch?v=vohuRrwbTT4)

---
# ��Selection Sort
n^2 �� �ڿ������� ���� ū �� ã�Ƽ� �� �ڷ�

index �ϳ� ���̰� �ű⼭ ���� ū �� ã�Ƽ� �� �ڷ� ���ѹݺ�

---
# ��Insertion Sort
n^2 1���� i���� j = i �ְ� j - 1 �ε����� �ǹ����� ũ�ٸ� �ڸ� ü���� j�� �ٿ����� ���ѹݺ�

---
# ��Bubble Sort - ���� ��ȿ������
n^2 ó������ ������ i�� i+1�� �ϳ��ϳ� ���ؼ� ���� ū�� �ǵڷ� ����. �ѹ� �� �����ϸ� �״��� ū �� �ǵڿ��� �ι�°�� ���ѹݺ�

---
# ��Quick Sort 
n log n ������� ��Ȳ���� �ְ��� ����

---
# ��Merge Sort
�ڷ���� 2���� ¦ ��� ������

�״��� ���ĵ� 2���� 4���� ��� �� ������.

��� ���� ��ġ�鼭 ���������� ���ĵ�.

---
# ��Graph
[BFS / DFS](https://www.youtube.com/watch?v=_hxFgg7TLZQ)

---
# ��DepthFirstSearch
�ڽ� ��� ������ �� �˻�

inorder - preorder - postorder ��� ����

Stack�� �̿��ؼ� ������

---
# ��BreadthFirstSearch
�ڽ� ��� ������ �˻�

Queue�� �̿��ؼ� ������

---
