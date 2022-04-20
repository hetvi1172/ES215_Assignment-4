#include<bits/stdc++.h>
using namespace std;
struct timespec start, finish;

int main(){
    int n;
    cin>>n;

    int m1[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            m1[i][j]=rand();
        }
    }

    int m2[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            m2[i][j]=rand();
        }
    }

    int ans[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            ans[i][j]=0;
        }
    }

    timespec_get(&start, TIME_UTC);
    for(int j=0; j<n; j++){
        for(int i=0; i<n; i++){
            for(int k=0; k<n; k++){
                ans[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
    timespec_get(&finish, TIME_UTC);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<finish.tv_sec-start.tv_sec<<" "<<finish.tv_sec-start.tv_nsec;

    return 0;
}
