/*�㷨��Ͱ����*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void bksort(float A[],int l,int h){
    int size = h-l+1;
    vector<float> b[size];//��size�����ݣ��ͷ���size��Ͱ
    for(int i=l;i<=h;i++){
        int bi = size*A[i];//Ԫ��A[i]��Ͱ���
        b[bi].push_back(A[i]);//��Ԫ��A[i]ѹ��Ͱ��
    }
    for(int i=0;i<size;i++)
        sort(b[i].begin(),b[i].end());//Ͱ������
    int idx = l;//ָ������A���±�
    for(int i=0;i<size;i++){//����Ͱ
        for(int j=0;j<b[i].size();j++){//����Ͱ��Ԫ��
            A[idx++] = b[i][j];
        }
    }
}
 
int main(){
    float A[] = {0.78,0.17,0.39,0.26,0.72,0.94,0.21,0.12,0.23,0.68};
    bksort(A,0,9);
    for(int i=0;i<10;i++)
        cout<<A[i]<<" ";
}
