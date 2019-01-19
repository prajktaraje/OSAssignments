/* Name- Prajaktaraje Deshmukh */
//Best Fit Algorithm for allocation partitioned memory blocks

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int pros,mems,*pro,*mem,*index,i,j,min;
	
	cout<<"enter no of process";//entering no of process
	cin>>pros;
	pro=new int[pros];//alocating memory for process
	index=new int[pros];//alocating memory for index
	cout<<"enter process";
	for(i=0;i<pros;i++)
	{
		cin>>pro[i];
	}
	cout<<"enter no of mem";//entering no of blocks(memory)
	cin>>mems;
	mem=new int[mems];//alocating memory
	cout<<"enter mem";
	for(i=0;i<mems;i++)
	{
		cin>>mem[i];
	}
	
	for(j=0;j<pros;j++)
	{
	min=-1;
	for(i=0;i<mems;i++)//calculating memory for processs
	{
		if(mem[i]>=pro[j])
		{
			if(min==-1)
				min=i;
				
			else if(mem[i]<mem[min])
				min=i;
			
			
		}
		  

	}
		index[j]=min+1;
		mem[min]=mem[min]-pro[j];//updating memory
	}
	cout<<"Allocation array is :";
	for(i=0;i<pros;i++)
	{
		cout<<index[i]<<"  ";
	}
	
	delete []index;
	delete []mem;
	delete []pro;
    	
}
