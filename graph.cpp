#include <iostream> //https://twpower.github.io/73-how-to-implement-dfs-and-bfs-in-cpp
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

//DFS - STACK / RECURSIVE
//BFS - QUEUE
//TEST TEST

void recursiveDfs(vector<int> graph[], bool check[], int start)
{
	check[start] = true; //방문 표시
	cout << start << " ";

	for (int i = 0; i < graph[start].size(); i++) //start 노드에 저장된 size만큼 호출
	{
		int next = graph[start][i]; //next에 start에 인접한 노드 저장
		if (check[next] == false) //아직 방문하지 않았다면
			recursiveDfs(graph, check ,next); //next와 인접한 노드 재귀적 호출
	}	
}

void stackDfs(vector<int> graph[], bool check[], int start)
{
	stack<int> s; //create stack
	s.push(start); //시작 스택에 저장
	check[start] = true; //시작 노드 방문 표시
	cout << start <<" "; // 출력

	while (!s.empty())
	{
		int currentNode = s.top();
		s.pop(); //이미 cout << start로 출력 했으니까? pop 해줌
		for (int i = 0; i < graph[currentNode].size(); i++)
		{
			int nextNode = graph[currentNode][i]; //currentNode와 인접한 노드 저장

			if (check[nextNode] == false) //방문 안한 노드라면
			{
				cout << nextNode << " "; //출력
				check[nextNode] = true; //방문 표시
				
				s.push(currentNode); // ★왜 하는 거지?★

				/*
				DFS의 경우 자식 노드를 탐색할 수 있을때까지 탐색하고 다음 자식을 탐색하는 방법이 맞습니다.설명해주신 부분도 맞구요!
				s.push(current_node)를 하는 이유는 "자식들을 다 탐색하고 자기자신으로 돌아와야 하기 때문"에 스택에 넣는겁니다.
				a - b - d
				 \
				  c - e

				이렇게 있다고 가정할 때 a를 먼저 스택에 push한 후 a를 pop합니다.
				a는 현재 자식 b와 c가 있는데 b부터 탐색을 한다하면 b를 스택에 넣어야겠지요.
				여기서 만약 a를 넣지 않는다면 b를 넣고 pop하고 자식을 봤더니 d가 있어서 다시 b를 넣지 않고 d만 넣는다면
				다시 b->a 이렇게 돌아와야하는데 돌아오지 못합니다. 
				즉, 돌아가지 못해 c와 e는 탐색도 하지 못하는 상황이 오게 되구요.
				*/
				s.push(nextNode); //그 다음 노드 push
				break;
			}
		}
	}
}

void bfs(vector<int> graph[], bool check[], int start)
{
	queue<int> q;

	q.push(start);
	check[start] = true;

	while (!q.empty())
	{
		int temp = q.front();
		q.pop();
		cout << temp << " ";

		for (int i = 0; i < graph[temp].size(); i++)
		{
			int nextNode = graph[temp][i];
			if (check[nextNode] == false) //방문하지 않았다면
			{
				q.push(nextNode);
				check[nextNode] = true;
			}
		}
	}
}


int main()
{
	int n, m, start;
	cin >> n >> m >> start;

	vector<int>* graph = new vector<int>[n + 1];
	bool* check = new bool[n + 1];
	fill_n(check, n + 1, false);

	for (int i = 0; i < m; i++) 
	{
		int u, v;
		cin >> u >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	// Sorting은 왜 한거지?
	// 나중에 하나의 정점에서 다음을 탐색할 때 node 값에 순차적으로 접근해야하기 때문
	for (int i = 1; i <= n; i++)
		sort(graph[i].begin(), graph[i].end()); //graph[u][v] 에서 u는 변하지 않고 v만 정렬됨.

	//dfs
	stackDfs(graph, check, start);
	cout << endl;
	
	//bfs error for memset
	//memset(check, false, sizeof(check));

	fill_n(check, n + 1, false);
	bfs(graph, check, start);

	return 0;
}