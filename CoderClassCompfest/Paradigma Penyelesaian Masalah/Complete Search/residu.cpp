#include<bits/stdc++.h>
#define LL long long
#define fi first
#define se second 

using namespace std;
 
int n;
LL harga,bebek,duit,ans=0;
pair<LL,LL> data[123123];
 
int main(){
    scanf("%d %lld",&n,&duit);
 
    for(int i=0;i<n;i++){
        scanf("%lld %lld",&harga,&bebek);
        data[i].fi=harga;
        data[i].se=bebek;
    }
 
    sort(data,data+n);
 
    for(int i=0;i<n;i++){
        if(duit>=data[i].fi*data[i].se){
            duit-=(data[i].fi*data[i].se);
            ans+=data[i].se;
        }else if(duit>=data[i].fi){
            ans+=(duit/data[i].fi);
            break;
        }else
            break;
    }
 
    printf("%lld\n",ans);
 
    return 0;
}
