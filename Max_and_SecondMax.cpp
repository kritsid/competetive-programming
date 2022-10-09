 vector<int> largestAndSecondLargest(int n, int arr[]){
        int m1 = 0 , m2 = -1;
        vector<int> v;
        for(int i=1; i<n; i++)
        {
            if(arr[i]>arr[m1])
            {
                m2 = m1;
                m1 = i;
            }
            else if (arr[i] != arr[m1])
            {
            if(m2 == -1 || arr[i]>arr[m2])
            {
               m2 = i; 
            }
            }
        }
        v.push_back(arr[m1]);
        if(m2!=-1)
        v.push_back(arr[m2]);
        else
        v.push_back(-1);
        return v;
    }
