#include<iostream>
#include<cstdio>
using namespace std;
const int maxn=1e5+10;
int n,m,k;
int p[maxn];
int sz[maxn];//标记所有朋友的个数 
int blo[maxn];//标记是直接朋友和敌人 
int find(int x)
{
	return p[x]==x?x:p[x]=find(p[x]);
}
int main()
{
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
	{
		p[i]=i;//初始化并查集 
		sz[i]=1; 
	}
	int a,b; 
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d",&a,&b);
		blo[a]++;
		blo[b]++;
		int pa=find(a);
		int pb=find(b);
		if(pa!=pb)
		{
			p[pa]=pb;
			sz[pb]+=sz[pa];
		}
	 } 
	 for(int i=1;i<=k;i++)
	 {
	 	scanf("%d%d",&a,&b);
	 	if(find(a)==find(b))
	 	{
		 	blo[a]++;
			blo[b]++;
		}
	 }
	 for(int i=1;i<=n;i++)
	 {
	 	printf("%d ",sz[find(i)]-1-blo[i]);
	 }
	return 0;
}
