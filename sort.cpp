#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**
\fn linearSearch
\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/
//int linearSearch(auto data, auto key);//prototype
int selectionSort(auto &Data);
void printVector(auto &inputs);


int main()
{
  vector<string> inputs;
  string search_key, input;
  int count;   

   cout<<"Welcome to \"Sort it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }   
   
   count = selectionSort(inputs);
   
   cout << count << endl;
   
   printVector(inputs);
        

   return 0;
}



int selectionSort(auto & Data)
{
	int counter = 0;
	
	for (int i= 0; i < Data.size(); i++)
	{
		int min = i;
		for (int j = (i+1); j < Data.size(); j++)
		{
			if  (Data[j] < Data[min])
			{
				min = j; //Updates min index
			}
			swap(Data[i],Data[min]);			
		}
	if (i == 20000)
		{
			counter++;
		}
	}
	return counter;
	
}

void printVector(auto &newprintInput)
{
	unsigned int vectorSize = newprintInput.size();
	
	cout << "Results: ";
	
	for (unsigned int i = 0; i < vectorSize; i++)
	{
		cout << newprintInput[i]<< ", ";		
	}
	
	cout << endl;

}
