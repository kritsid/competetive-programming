for(i=0;i<3;i++)cin>>arr[i];
   sort(arr,arr+3);
 
 if(arr[0]+arr[1]==arr[2])cout<<"yes"<<endl;
 else{
     if(arr[0]==arr[1]+arr[2])cout<<"yes"<<endl;
     else cout<<"no"<<endl;
 }
   
 
}
	return 0;
}
