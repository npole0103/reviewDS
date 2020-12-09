# reviewDS

# ★자료구조 정리★

## ★Iterator 
자료구조 내부의 요소를 순회하는 객체

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
[Iterlator 참고1](https://www.devoops.kr/45?category=691976)

---
# ★Vector
크기를 동적으로 할당하는 배열

메모리는 Heap영역에 할당되며 순차적 저장

랜덤 접근(순차적으로 읽는 것이 아닌 특정 길이만큼 건너 뛰면서 읽을 수 있는 방식)이 가능

[Vector 참고](https://blog.naver.com/jjaing01/221923350190)

---
# ★Stack

먼저 들어간 자료가 나중에 나오는 LIFO 구조

버퍼오버플로우 취약점 이용한 공격을 할 때 스텍메모리에서 함. DFS에서 사용.

[Stack 참고](https://life-with-coding.tistory.com/406)

---
# ★List
상대적인 순서를 유지하는 노드기반의 자료구조

STL에 있는 리스트는 이중 연결 리스트임

[List 참고](https://hyeonstorage.tistory.com/326)

---
# ★Dequeue
Vector와 비슷한 배열 기반 컨테이너지만

Vector의 단점을 보완하는 특징을 가짐.

[Dequeue 참고](https://hyeonstorage.tistory.com/325?category=614599)

---
# ★Map / Multimap / Hash map
자주 사용되는 컨테이너로 key와 value를 쌍으로 저장한다.

Set과 다른 점은 set은 key만 저장하지만 map은 key와 value 쌍으로 저장됨.

원소의 key는 중복 저장될 수 없으며 중복 key를 저장해야한다면 multimap 이용해야함.

균형 이진 트리를 이용하여 로그 시간 복잡도를 보장.

[Map 참고1](https://blog.naver.com/qw4898/221473156965)
[Map 참고2](https://hyeonstorage.tistory.com/329?category=614599)
[Map 참고3](https://moonsupport.tistory.com/232)
[Map 참고4](https://hyeonstorage.tistory.com/330?category=614599)  
<<multimap key가 중복돼서 []연산자 제공 안함

---
# ★Set(트리구조) 중복x / Multiset 중복 저장가능
연관 컨테이너중 key라는 원소 집합으로 이루어진 컨테이너(모든 연관 컨테이너 == 노드 기반 컨테이너)

균형 이진 트리로 구현되어 이진 트리의 특징을 가짐.
[Set 참고1](https://hyeonstorage.tistory.com/327?category=614599)

---
★BinarySearchTree
처음 들어간 값이 root 값이 되고 큰 값은 오른쪽으로 작은 값은 왼쪽으로 넣는 트리 알고리즘
[BST 참고1](https://www.youtube.com/watch?v=LwpLXm3eb6A)

---
# ★Btree
노드가 추가될 수록 중간 값이 상위 노드로 바뀜
[Btree](https://www.youtube.com/watch?v=bhKixY-cZHE)

---
# ★Heap tree
순차적으로 계속 들어가며 상위 노드가 값이 크다면 마지막으로 들어온 노드 기준으로 상위 노드에 큰 값이 없을 때까지 스왑함.
[Heap Tree 참고1](https://www.youtube.com/watch?v=VEYSSANa-cw)

---
# ★Binary search
시간 복잡도 log n
[Binary Search 참고1](https://www.youtube.com/watch?v=vohuRrwbTT4)

---
# ★Selection Sort
n^2 맨 뒤에서부터 제일 큰 값 찾아서 맨 뒤로

index 하나 줄이고 거기서 제일 큰 값 찾아서 맨 뒤로 무한반복

---
# ★Insertion Sort
n^2 1부터 i까지 j = i 넣고 j - 1 인덱스가 피벗보다 크다면 자리 체인지 j를 줄여가며 무한반복

---
# ★Bubble Sort - 제일 비효율적임
n^2 처음부터 끝까지 i랑 i+1씩 하나하나 비교해서 제일 큰거 맨뒤로 보냄. 한번 더 실행하면 그다음 큰 거 맨뒤에서 두번째로 무한반복

---
# ★Quick Sort 
n log n 평균적인 상황에서 최고의 성능

---
# ★Merge Sort
자료들을 2개씩 짝 지어서 정렬함

그다음 정렬된 2쌍을 4개로 묶어서 또 정렬함.

계속 쌍을 합치면서 최종적으로 정렬됨.

---
# ★Graph
[BFS / DFS](https://www.youtube.com/watch?v=_hxFgg7TLZQ)

---
# ★DepthFirstSearch
자식 노드 끝까지 다 검색

inorder - preorder - postorder 방식 사용됨

Stack을 이용해서 구현됨

---
# ★BreadthFirstSearch
자식 노드 층별로 검색

Queue를 이용해서 구현됨

---
