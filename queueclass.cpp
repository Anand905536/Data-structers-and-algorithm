template<typename T>
class queueusingarray
 {
   T *data;
   int firstindex;
   int capacity;
   int nextindex;
   int size;
public:
   queueusingarray(T s)
   {
   	data=new T[s];
   	firstindex=-1;
   	capacity=s;
   	nextindex=0;
   	size=0;
   }
   int getsize()
   {
      return size;
   }
   bool isempty()
   {
   	return size==0;
   }

   // insert element
   void enqueue(T element)
   {
   	if(size==capacity)
   	{
   		cout<<"queue full !"<<endl;
   		return;
   	}
   	data[nextindex]=element;
   	nextindex=(nextindex+1) % capacity;
   	if(firstindex==-1)
   	{
   		firstindex=0;
   	}
   	size++;
   }
   T front()
   {
	if(isempty())
   	{
   		cout<<"queue is empty"<<endl;
   		return 0;
   	}
    return data[firstindex];
	} 
	T dequeue()
	{
      if(isempty())
   	{
   		cout<<"queue is empty"<<endl;
    
   		return 0;
   	}
     T ans=data[firstindex];
     firstindex=(firstindex+1)%capacity;
      size--;
     if(size==0)
     {
     	firstindex=-1;
     	nextindex=0;
     }
     return ans;

	} 

 };