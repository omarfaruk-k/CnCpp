    int freq1[max1+1]={0};
    int freq2[max2+1]={0};

    for(int i=0;i<n;i++) freq1[arr[i]]++;
    for(int i=0;i<m;i++) freq2[arr[i]]++;

    for(int i=0;i<max2+1;i++){
        if(freq1[i]<freq2[i]){
            cout<<i<<" "<<endl;
        }
    }

    cout<<endl;