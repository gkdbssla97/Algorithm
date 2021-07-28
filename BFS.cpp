#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int num = 7;
int c[7]; // 방문여부
vector<int> a[8];

void bfs(int start) {
    queue<int> q;
    q.push(start);
    c[start] = true;
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        printf("%d! ",x);
        for(int i = 0; i < a[x].size(); i++){
            int y = a[x][i];
            if(!c[y]){
                q.push(y);
                c[y] = true;
            }
        }
    }
}

int main(void) {
    // 1과 2를 연결
    a[1].push_back(2);
    a[2].push_back(1);
    // 1과 3를 연결
    a[1].push_back(3);
    a[3].push_back(1);
    // 2과 3를 연결
    a[2].push_back(3);
    a[3].push_back(2);
    // 2과 4를 연결
    a[2].push_back(4);
    a[4].push_back(2);
    // 2과 5를 연결
    a[2].push_back(5);
    a[5].push_back(2);
    // 3과 6를 연결
    a[3].push_back(6);
    a[6].push_back(3);
    // 3과 7를 연결
    a[3].push_back(7);
    a[7].push_back(3);
    // 4과 5를 연결
    a[4].push_back(5);
    a[5].push_back(4);
    // 6과 7를 연결
    a[6].push_back(7);
    a[7].push_back(6);
    bfs(1);

    return 0;
}