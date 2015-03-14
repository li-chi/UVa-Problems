#include <stdio.h>

/* LI Chi */
int adj[36][36];
int n;
int min;
int maxAdj[36];

void cal(bool visited[], bool located[], int numVisited, int k, int locate) {
	for(int i=1; i<=k-1; i++) {
		if(!visited[i])
			if(maxAdj[i]<k)
				return;
	}
	int count = 0;
	int mem[30];
	if(!visited[locate]) {
		visited[locate] = true;
		numVisited ++;
	}
	
	located[locate] = true;
	
	for(int i=0;i<adj[locate][0];i++) {
		if(visited[adj[locate][i+1]] == false) {
			visited[adj[locate][i+1]] = true;
			numVisited++;
			mem[count++] = adj[locate][i+1];
		}
	}
	if(numVisited >= n) {
		if(k < min)
			min = k;
	} else {
		for(int i=1; i<=n; i++) {
			if(!located[i]) {
				cal(visited,located,numVisited,k+1,i);
			}
		}
	}
	located[locate] = false;
	for(int i=0; i<count; i++)
		visited[mem[i]] = false;
}

int main() {
	int m,a,b;
	scanf("%d %d",&n,&m);
	while(n!=0 || m!=0) {
		for(int i=0; i<36; i++)
			adj[i][0] = 0;
		while(m-- > 0) {
			scanf("%d %d",&a,&b);
			adj[a][++adj[a][0]] = b;
			adj[b][++adj[b][0]] = a;
		}

		int maxNode = 0;
		for(int i=1;i<=n;i++) {
			maxNode = 0;
			for(int j=0; j<adj[i][0]; j++){
				if(adj[i][j+1]>maxNode)
					maxNode = adj[i][j+1];
			}
			maxAdj[i] = maxNode;
		}

		bool visited[n+1];
		bool located[n+1];
		
		min = 40;
		for(int i=1; i<=n; i++) {
			for(int i=0; i<=n; i++){
				visited[i] = false;
				located[i] = false;
			}
			cal(visited,located,0,1,i);

		}

		printf("%d\n",min);
		scanf("%d %d",&n,&m);
	}
}