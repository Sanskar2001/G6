bool bisearch(int* arr,int key,int n)
{
	int s=0,e=n-1;
	int mid;
	while(s<=e)
	{
		 mid=(s+e)/2;

		if(arr[mid]==key)
			return true;

		if(key<arr[mid])
		e=mid-1;
	    else 
	    s=mid+1;
	}

	return false;
}

int findKthPositive(int* arr, int n, int k){


	int cnt=0;

    // int i=1;


    //using while loop
    // while(cnt!=k)
    // {
    //     bool isFound=bisearch(arr,i,n);

    //     if(!isFound)
    //     cnt++;


    
    //     i++;

    // }

    // using for loop
    int i;
    for(i=1;cnt!=k;i++)
    {
        bool isFound=bisearch(arr,i,n);

        if(!isFound)
        cnt++;

    }
	// for(int i=1;i<=1000;i++)
	// {

	// 	bool isFound=bisearch(arr,i,n);


	// 	if(!isFound)
	// 	{
	// 		cnt++;
	// 	}

	// 	if(cnt==k)
	// 	return i;

	// }

	return --i;
}