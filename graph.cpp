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
	check[start] = true; //�湮 ǥ��
	cout << start << " ";

	for (int i = 0; i < graph[start].size(); i++) //start ��忡 ����� size��ŭ ȣ��
	{
		int next = graph[start][i]; //next�� start�� ������ ��� ����
		if (check[next] == false) //���� �湮���� �ʾҴٸ�
			recursiveDfs(graph, check ,next); //next�� ������ ��� ����� ȣ��
	}	
}

void stackDfs(vector<int> graph[], bool check[], int start)
{
	stack<int> s; //create stack
	s.push(start); //���� ���ÿ� ����
	check[start] = true; //���� ��� �湮 ǥ��
	cout << start <<" "; // ���

	while (!s.empty())
	{
		int currentNode = s.top();
		s.pop(); //�̹� cout << start�� ��� �����ϱ�? pop ����
		for (int i = 0; i < graph[currentNode].size(); i++)
		{
			int nextNode = graph[currentNode][i]; //currentNode�� ������ ��� ����

			if (check[nextNode] == false) //�湮 ���� �����
			{
				cout << nextNode << " "; //���
				check[nextNode] = true; //�湮 ǥ��
				
				s.push(currentNode); // �ڿ� �ϴ� ����?��

				/*
				DFS�� ��� �ڽ� ��带 Ž���� �� ���������� Ž���ϰ� ���� �ڽ��� Ž���ϴ� ����� �½��ϴ�.�������ֽ� �κе� �±���!
				s.push(current_node)�� �ϴ� ������ "�ڽĵ��� �� Ž���ϰ� �ڱ��ڽ����� ���ƿ;� �ϱ� ����"�� ���ÿ� �ִ°̴ϴ�.
				a - b - d
				 \
				  c - e

				�̷��� �ִٰ� ������ �� a�� ���� ���ÿ� push�� �� a�� pop�մϴ�.
				a�� ���� �ڽ� b�� c�� �ִµ� b���� Ž���� �Ѵ��ϸ� b�� ���ÿ� �־�߰�����.
				���⼭ ���� a�� ���� �ʴ´ٸ� b�� �ְ� pop�ϰ� �ڽ��� �ô��� d�� �־ �ٽ� b�� ���� �ʰ� d�� �ִ´ٸ�
				�ٽ� b->a �̷��� ���ƿ;��ϴµ� ���ƿ��� ���մϴ�. 
				��, ���ư��� ���� c�� e�� Ž���� ���� ���ϴ� ��Ȳ�� ���� �Ǳ���.
				*/
				s.push(nextNode); //�� ���� ��� push
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
			if (check[nextNode] == false) //�湮���� �ʾҴٸ�
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

	// Sorting�� �� �Ѱ���?
	// ���߿� �ϳ��� �������� ������ Ž���� �� node ���� ���������� �����ؾ��ϱ� ����
	for (int i = 1; i <= n; i++)
		sort(graph[i].begin(), graph[i].end()); //graph[u][v] ���� u�� ������ �ʰ� v�� ���ĵ�.

	//dfs
	stackDfs(graph, check, start);
	cout << endl;
	
	//bfs error for memset
	//memset(check, false, sizeof(check));

	fill_n(check, n + 1, false);
	bfs(graph, check, start);

	return 0;
}