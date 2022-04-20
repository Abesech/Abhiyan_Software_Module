# include<bits/stdc++.h>
using namespace std;

int main(){
  int m{},n{},k{};
  cin>>m>>n;
  cin>>k;
  int flag{};
  int arr[m][n];
  int arr1[m*n];
  for (int i{};i<m;i++){
    for(int j{};j<n;j++){
      cin>>arr[i][j];
      arr1[flag]=arr[i][j];
      flag++;
    }
  }
  int beg=0,end=m*n-1;
  int mid=(beg+end)/2;
  int check{};
  while (beg<=end){
    mid=(beg+end)/2;
    if (arr1[mid]==k){
      cout<<"True"<<endl;
      cout<<mid/(n)<<" "<<mid%(n);
      check++;
      break;
    }
    else if (arr1[mid]<k){
      beg=mid+1;
    }
    else if (arr1[mid]>k){
      end=mid-1;
    }
  }
  if (check==0) cout<<"False";

  return 0;
}
