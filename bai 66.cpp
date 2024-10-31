#include<iostream>

using namespace std;

int main() {
    int a[1000];
    int n;
    cout<< "nhap so luong chu so trong day: ";cin >> n;
    for (int i=0;i<n;i++){
        cout<<"nhập số thứ "<<i+1<< " : "; cin >> a[i];
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    for (int i=0;i<n;i++){
        cout << a[i]<<" ";
    }
    return 0;
}
