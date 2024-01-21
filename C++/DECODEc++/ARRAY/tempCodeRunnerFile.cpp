int secmaxm = INT_MIN;
for(int i=0;i<size;i++){
    if (arr[i]>maxm)
    maxm = arr[i];
    else 
    continue;
}
for(int i=0;i<size;i++){
    if (arr[i]>secmaxm && arr[i] != maxm)
    secmaxm = arr[i];
    else 
    continue;
}