#include <bits/stdc++.h>

using namespace std;

bool vis [1000000 + 10];
int siz = 0;

int N = 1000000 + 10;

void sieve(){                           // mark every number as prime or not

    vis[1] = true;
    for(long long i = 2; i * i <= N; i++){
        if(!vis[i]){                                    // check if the number is prime
            for( long long j = i * i; j <= N; j+= i){
                vis[j] = true;                          // mark the multiple of prime numbers as not prime
            }
        }
    }
}

int arr [32000 + 10];
int tree [32000 * 4 + 10];  // size = N * 4 = 200000 * 4

void build (int index , int le , int ri){

    if(le == ri){
        tree[index] = !vis[arr[le]];                            // prime cells has a value of 1
        return;
    }
    build(index * 2 + 1 , le , (le + ri) / 2);                 // build the left tree
    build(index * 2 + 2,  (le + ri) / 2 + 1, ri );             // build the right tree
    tree[index] = tree[index * 2 + 1] + tree[index * 2 + 2];   // add the values of left , right trees
    return;
}

void update (int index , int le , int ri , int target , int value){

    if(le == ri){
        tree[index] = !vis[value] ;                             // update the new value
        return ;
    }
    if(target <= (le + ri) / 2 ){                                   // check if the position of the new value is on the left or right tree
        update(index * 2 + 1, le , (le + ri) / 2, target, value);
    } else {
        update(index * 2 + 2, (le + ri) / 2 + 1 , ri , target, value);
    }
      tree[index] = tree[index * 2 + 1] + tree[index * 2 + 2];          // add the updated left, right trees
      return;
}

int query (int index , int le , int ri , int a , int b){

    if(le >= a && ri <= b){                                             // check if the interval lies in the query
        return tree[index];
    }
    if(le > b || ri < a) return 0;                                      // check if all of the interval is outside of the query
    return query(index * 2 + 1, le , (le + ri) / 2 , a  ,  b) + query(index * 2 + 2, (le + ri) / 2 + 1, ri , a  ,  b);              // add the value of the left, right trees

}


int main()
{
    int t , n , q, tem1 , tem2;
    char c;

    sieve();

    cin >> t;

    while(t--){

        cin >> n;
        for(int i = 0; i < n; i++) cin >> arr[i];

        build(0 , 0 , n - 1);

        cin >> q;

        for(int i = 0; i < q; i++){

           cin >> c >> tem1 >> tem2;

           if(c == 'C') update(0 , 0 , n - 1, tem1 - 1 , tem2);
           else cout << query(0 , 0 , n - 1, tem1 - 1, tem2 - 1) << "\n";
        }

    }

    return 0;
}
