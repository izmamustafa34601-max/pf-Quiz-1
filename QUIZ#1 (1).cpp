//Write a program for a photocopy center. Read N jobs and number of pages. Charge 3 per page. 
//If pages > 100 give 12% discount. Print total cost per job and sum. 
//Use variables, IO, loops, if/else. Push to GitHub and paste repository.

#include<iostream>
using namespace std;
int main (){
    int N;
    cout<<"Enter number of jobs="<<endl;
    cin>>N;
    float totalsum=0;  //to store sum of all jobs
    for(int i=1; i<=N; i++){
        int pages;
        cout <<"enter number of pages for jobs"<<i<<"=   "<<endl;
        cin>>pages;
        float cost= pages*3;
        if (pages>100){
            float discount=cost*0.12;
            cost=cost-discount;

        }
        cout<<"total cost for jobs"<<i<<"=  "<<cost<<endl;
        totalsum+=cost;

    }
    cout<<"total sum of all jobs =   "<<totalsum<<endl;
    return 0;

}