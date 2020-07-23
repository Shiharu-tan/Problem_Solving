//============================================================================
// Name        : 10946.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;
int n, m;
char maze[MAX][MAX];
int vis[MAX][MAX];
int cnt = 0;
void countReach(int x, int y, char c) {
	if (x >= n || y >= m || x < 0 || y < 0 || vis[x][y] == 1 || maze[x][y] != c)
		return;

	vis[x][y] = 1;
	cnt++;
	countReach(x - 1, y, c);
	countReach(x + 1, y, c);
	countReach(x, y - 1, c);
	countReach(x, y + 1, c);
}

bool cmp(pair<char, int> a, pair<char, int> b)
{
    if(a.second > b.second)
       return true;
    else if(a.second < b.second)
            return false;
    return a.first<b.first;
}

int main() {
	int sum=0;
	while(true){
		cin >> n >> m ;
		if(n == 0 && m == 0) return 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> maze[i][j];
			}
		}
		sum++;
		vector<pair<char, int>> v;
		for (char ch = 'A'; ch <= 'Z'; ch++) {
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					countReach(i, j, ch);
					if (cnt != 0)  v.push_back(make_pair(ch, cnt));
					cnt = 0;
				}
			}
		}
		sort(v.begin(), v.end(), cmp);
		cout << "Problem " << sum <<":" << endl;
		for (int i = 0; i < v.size(); i++) {
			cout << v[i].first << " " << v[i].second << endl;
		}
		memset(vis,0 , sizeof(vis));
	}
	return 0;
}

