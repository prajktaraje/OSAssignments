/* Name- Prajaktaraje Deshmukh */
//Best Fit Algorithm for allocation partitioned memory blocks

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int pros,blocks,*pro,*block,*index,i,j,min,allocated;
	
	allocated=400;
	
	cout<<"enter no of process";//entering no of process
	cin>>pros;
	pro=new int[pros];//allocating memory for process
	index=new int[pros];//allocating memory for index
	cout<<"enter process";
	for(i=0;i<pros;i++)
	{
		cin>>pro[i];
	}
	for(i=0;i<pro[i];i++)
	{
		if(pro[i]<=allocated)
		allocated=allocated-pro[i];
		else
		 cout<<"no memory for process"<<pro[i]<<"\n";
    }
    
	cout<<"free memory"<<allocated<<"\n";
	cout<<"-----------------BFS------------------\n";
	cout<<"enter no of blocks";//entering no of blocks(memory)
	cin>>blocks;
	block=new int[blocks];//allocating memory
	cout<<"enter block";
	for(i=0;i<blocks;i++)
	{
		cin>>block[i];
	}
	
	for(j=0;j<pros;j++)
	{
	min=-1;
	for(i=0;i<blocks;i++)//calculating memory for processs
	{
		if(block[i]>=pro[j])
		{
			if(min==-1)
				min=i;
				
			else if(block[i]<block[min])
				min=i;
			
			
		}
		  

	}
		index[j]=min+1;
		block[min]=block[min]-pro[j];//updating memory
}
	
	cout << "\nProcess No.\tProcess Size.\tBlock no.\n"; 
	for(i=0;i<pros;i++)
	{
		cout << i+1 << "\t\t" << pro[i] << "\t\t"<<index[i]<<"\n";
           
	}
	
	

	
	delete []index;
	delete []block;
	delete []pro;
    	
}
