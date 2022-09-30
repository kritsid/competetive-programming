//SLIDING WINDOW

#include<iostream>
using namespace std;
#include<bits/stdc++.h>
string minWindow(string A, string B) {
 //start window size from first matching character
    unordered_map<char,int>m;
    int count = B.size();
    int n = A.size();
    string ans = "";
    string tempans = "";
    for(int i=0;i<count;i++){
        m[B[i]]++;
    }
    int i=0,j=0;
    while(j<=n){
    	cout<<i<<" "<<j<<" "<<count<<" "<<tempans<<endl;
        if(count==0){
            tempans = A.substr(i,j-i);
            //cout<<tempans<<endl;
            if(ans==""){
                 ans= tempans;
            }
            if(tempans.length()<ans.length()){
                ans = tempans;
            }
            while(count==0){
            	cout<<i<<j<<" "<<count<<" "<<tempans<<endl;
                if(m.find(A[i])!=m.end()){
                    if(m[A[i]]<0){
                        m[A[i]]++;
                    }else{
                        count++;
                        m[A[i]]++;
                    }
                }
                else{
                    tempans = A.substr(i+1,j-i);
                    if(tempans.length()<ans.length()){
                        ans= tempans;
                    }
                    if(ans==""){
                        ans= tempans;
                    }
                }
                i++;
                
            }
           
        }
        //cout<<ans<<endl;

        if(m.find(A[j])!=m.end()){
            if(m[A[j]]>0){
                count--;
            }
            m[A[j]]--;
        }
        j++;
    }
    
 return ans;
}

int main(){
	
	string s1 = "xiEjBOGeHIMIlslpQIZ6jERaAVoHUc9Hrjlv7pQpUSY8oHqXoQYWWll8Pumov89wXDe0Qx6bEjsNJQAQ0A6K21Z0BrmM96FWEdRG69M9CYtdBOrDjzVGPf83UdP3kc4gK0uHVKcPN4HPdccm9Qd2VfmmOwYCYeva6BSG6NGqTt1aQw9BbkNsgAjvYzkVJPOYCnz7U4hBeGpcJkrnlTgNIGnluj6L6zPqKo5Ui75tC0jMojhEAlyFqDs7WMCG3dmSyVoan5tXI5uq1IxhAYZvRQVHtuHae0xxwCbRh6S7fCLKfXeSFITfKHnLdT65K36vGC7qOEyyT0Sm3Gwl2iXYSN2ELIoITfGW888GXaUNebAr3fnkuR6VwjcsPTldQSiohMkkps0MH1cBedtaKNoFm5HbH15kKok6aYEVsb6wOH2w096OwEyvtDBTQwoLN87JriLwgCBBavbOAiLwkGGySk8nO8dLHuUhk9q7f0rIjXCsQeAZ1dfFHvVLupPYekXzxtWHd84dARvv4Z5L1Z6j8ur2IXWWbum8lCi7aErEcq41WTo8dRlRykyLRSQxVH70rUTz81oJS3OuZwpI1ifBAmNXoTfznG2MXkLtFu4SMYC0bPHNctW7g5kZRwjSBKnGihTY6BQYItRwLUINApd1qZ8W4yVG9tnjx4WyKcDhK7Ieih7yNl68Qb4nXoQl079Vza3SZoKeWphKef1PedfQ6Hw2rv3DpfmtSkulxpSkd9ee8uTyTvyFlh9G1Xh8tNF8viKgsiuCZgLKva32fNfkvW7TJC654Wmz7tPMIske3RXgBdpPJd5BPpMpPGymdfIw53hnYBNg8NdWAImY3otYHjbl1rqiNQSHVPMbDDvDpwy01sKpEkcZ7R4SLCazPClvrx5oDyYolubdYKcvqtlcyks3UWm2z7kh4SHeiCPKerh83bX0m5xevbTqM2cXC9WxJLrS8q7XF1nh";
	string s2 = "dO4BRDaT1wd0YBhH88Afu7CI4fwAyXM8pGoGNsO1n8MFMRB7qugS9EPhCauVzj7h";
	cout<<minWindow(s1,s2);
	
	return 0;
}

