#ifndef BINARY_SEARCH_H_INCLUDED
#define BINARY_SEARCH_H_INCLUDED

int bs(int arr[],int s,int e,int f){
    if(e>=s){
    int m=(s+e)/2;
    if(arr[m]==f){
        return m;
    }
    else if(arr[m]>f){
        return bs(arr,s,m-1,f);
    }
    else{
        return bs(arr,m+1,e,f);
    }
    }
    return -1;
}

#endif // BINARY_SEARCH_H_INCLUDED
