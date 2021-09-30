// stack using array with template
    template<typename T>
class stackusingarray{
  T *arr;
  int nextindex;
  int capacity;
public:
  stackusingarray()
  {
  	arr=new T[4];
  	nextindex=0;
  	capacity=4;
  }


   T size()
   {
   	return nextindex;
   }


   bool isempty()
   {
   	if(nextindex==0)
   	{
   		return true;
   	}
   	else{
   		return false;
   	}
   	// return next==0;
   }

   void push(T element)
   {
   	if(nextindex==capacity)
   	{
   	  T *newarray=new T[2*capacity];
   	  for(int i=0;i<capacity;i++)
   	  {
   	  	newarray[i]=arr[i];
   	  }
   	  capacity *=2;
   	  delete []arr;
   	  arr=newarray;
    }
   	arr[nextindex]=element;
   	nextindex++;
   }
   T pop()
   {
   	if(nextindex==0)
   	{
   		return 0;
   	}
   	 nextindex--;
   	 return arr[nextindex];
   }
   T top()
   {
   	if(nextindex==0)
   	{
   		return 0;
   	}
   	return arr[nextindex-1];
   }

};

// template
 template<typename T,typename S>
class Pair
{
	T x;
	T y;
	// U z;
public:
	void setx(T x)
	{
		this->x=x;
	}
	T getx()
	{
		return this->x;
	}
	void sety(S y)
	{
		this->y=y;
	}
	S gety()
	{
		return this->y;
	}
	// void setz(U z)
	// {
	// 	this->z=z;
	// }
	// U getz()
	// {
	// 	return this->z;
	// }
};