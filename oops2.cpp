    // practise class
  class anand{
public:
	int rollno;
private:
	int age;
public:
	// /default destructer
	~anand(){
		cout<<"destructer is on action"<<endl;
	}
	// default constructer
	anand()
	{
		cout<<"constructer called"<<endl;
	}
	// parametrized contructer
	anand(int age,int rollno){
		 cout<<"constructer2 called"<<endl;
       this->age=age;
        this->rollno=rollno;

	}
	// function
	// void display()
	// {
	// 	cout<<age<<" "<<rollno<<endl;;
	// }
	int getage()
	{
		return age;
	}
	void setage(int a)
	{
		if(a>0){
			 age=a;
		}
		else{

			return;
		}
      
	}


};


//  fraction class


class fraction
{
public:
  int numerator;
  int denominator;
  fraction(int numerator ,int denominator)
  {
  	this->numerator=numerator;
  	this->denominator=denominator;
  }
  void print()
  {
  	cout<<this->numerator<<"/"<<this->denominator<<endl;
  }
  void simplify()
  {
  	int gcd=1;
  	int j=min(this->numerator,this->denominator);
  	for(int i=1;i<=j;i++)
  	{
  		if(this->numerator%i==0 && this->denominator%i==0)
  		{
  			gcd=i;
  		}
  	}
  	this->numerator=this->numerator/gcd;
  	this->denominator=this->denominator/gcd;
}
  fraction add( const fraction &f2)
  {
  	int lcm=this->denominator*f2.denominator;
  	int x=lcm/this->denominator;
  	int y=lcm/f2.denominator;
     int num=x*this->numerator+(y*f2.numerator);
    fraction fnew(num,lcm);
    fnew.simplify();
    return fnew;
      // this->simplify();
      // f2.numerator=-1;
  }
  // operator everload



   fraction operator+( const fraction &f2)
  {
  	int lcm=this->denominator*f2.denominator;
  	int x=lcm/this->denominator;
  	int y=lcm/f2.denominator;
     int num=x*this->numerator+(y*f2.numerator);
    fraction fnew(num,lcm);
    fnew.simplify();
    return fnew;
      // this->simplify();
      // f2.numerator=-1;
  }
  fraction multiply( const fraction &f2)
  {
  	int num=this->numerator*f2.numerator;
  	int deno=this->denominator*f2.denominator;

  	fraction fnew1(num,deno);
  	
  	fnew1.simplify();
  	return fnew1;
  }


  // operator overload

   fraction  operator*( const fraction &f2)
  {
  	 int num=this->numerator*f2.numerator;
  	int deno=this->denominator*f2.denominator;

  	fraction fnew1(num,deno);
  	
  	fnew1.simplify();
  	return fnew1;
  }


 // comparison opertor
  bool operator==(const fraction &f2)
  {
  	return (numerator==f2.numerator && denominator==f2.denominator);
  }


    // pre increment
  fraction &operator++()
  {
  	this->numerator=this->numerator+this->denominator;
  	this->simplify();
  	return *this;
  }
  // post increment  nesting is not allowed in post increment
 fraction operator++(int)
 {
 	fraction fnew2(this->numerator,this->denominator);
 	this->numerator=this->numerator+this->denominator;
      fnew2.simplify();
      this->simplify();
      return fnew2;
 }

 // plus equalto operator

fraction &operator+=(fraction const &f2)
 {
   int lcm=this->denominator*f2.denominator;
  	int x=lcm/this->denominator;
  	int y=lcm/f2.denominator;
     int num=x*this->numerator+(y*f2.numerator);
    this->numerator=num;
    this->denominator=lcm;
    this->simplify();
    return *this;
 }


};

      // complex number class
    class complexno{
        public:
        	int real;
        	int imaginary;
        	complexno(int real,int imaginary)
        	{
        		this->real=real;
        		this->imaginary=imaginary;
        	}
        	void print()
        	{
        		cout<<this->real<<" "<<"+"<<" "<<"i"<<this->imaginary<<endl;
        	}
        	void plus(complexno &c2)
        	{
        		this->real=this->real+c2.real;
        		this->imaginary=(this->imaginary+c2.imaginary);
        	}
        	void multiply(complexno &c2)
        	{
        		int store1=(this->real*c2.real)+((this->imaginary*c2.imaginary)*-1);
        	   int store2=(this->real*c2.imaginary)+(this->imaginary*c2.real);
        	   this->real=store1;
        	   this->imaginary=store2;
            }
    };


    // student class
      class student{

       int age;
       char *name;
           public:
          	student(int age,char *name)
          	{
          		this->age=age;
          		// shallow copy        avoid this
          		// this->name=name;


          		// deep copy
          		this->name=new char[strlen(name)+1];
          		strcpy(this->name,name);
          	}
          	student(student const &s1)
          	{
          		this->age=s1.age;
          		this->name=new char[strlen(s1.name)+1];
          		strcpy(this->name,s1.name);
          	}
          	void display()
          	{
          		cout<<this->name<<" "<<this->age<<endl;
          	}
       

    };

    // animal class for const keyword

    class animal{
    public:
    	int age;
    	const int cageno;
    	animal(int age,int cageno): cageno(cageno)
    	{
    		this->age=age;
    	}
    	void display()
    	{
    		cout<<age<<" "<<cageno<<endl;
    	}
    };

  //  static member

    class pyramid{
    public:
      int hieght;
      static int totalpyramid;
      pyramid()
      {
      	totalpyramid++;
      }
     
    };

    int pyramid::totalpyramid=0;



    // dynamic array class

    class dynamicarray{
     int *data;
     int nextindex;
     int capacity;
 public:
     dynamicarray()
     {
     	data=new int[5];
     	nextindex=0;
     	capacity=5;
      }

      dynamicarray(dynamicarray const &d)
      {
      	this->data=new int[d.capacity];
      	for(int i=0;i<d.nextindex;i++)
      	{
      		this->data[i]=d.data[i];
      	}
          this->nextindex=d.nextindex;
          this->capacity=d.capacity;
      }
      void operator=(dynamicarray const &d)
      {

      	this->data=new int[d.capacity];
      	for(int i=0;i<d.nextindex;i++)
      	{
      		this->data[i]=d.data[i];
      	}
          this->nextindex=d.nextindex;
          this->capacity=d.capacity;
          
      }
     void add(int element)
     {
     	if(nextindex==capacity)
     	{
     		int *newdata= new int[2*capacity];
     		for(int i=0;i<capacity;i++)
     		{
     			newdata[i]=data[i];
     		}
     		delete []data;
     		data=newdata;
     		capacity*=2;
     	}
       data[nextindex]=element;
       nextindex++;
      }
      int get(int i)
      {
      	if(i<capacity)
      	{
      		return data[i];
      	}
      	else{
      		return -1;
      	}
      }
      void add(int i,int element)
      {
      	if(i<nextindex)
      	{
      		data[i]=element;
      	}
      	else if(i==nextindex)
      	{
      		add(element);
      	}
      	else{
      		return;
      	}
      }
      void print()
      {
      	for(int i=0;i<nextindex;i++)
      	{
      		cout<<data[i]<<" ";
      	}
      	cout<<endl;
      }
 };

// polynomial class



 class polynomial{
 private:
     int *poly;
     int capacity;
 public:
     polynomial()
     {
     	poly=new int[5];
     	capacity=5;
     	for(int i=0;i<=5;i++)
     	{
              poly[i]=0;
     	}
     }
     polynomial(polynomial const &p2)
     {
     	this->poly=new int[p2.capacity];
      	for(int i=0;i<=p2.capacity;i++)
      	{
      	    this->poly[i]=p2.poly[i];
      	}
       
          this->capacity=p2.capacity;
     }
     void operator=(polynomial const &p2)
      {
     	this->poly=new int[p2.capacity];
      	for(int i=0;i<=p2.capacity;i++)
      	{
      	    this->poly[i]=p2.poly[i];
      	}
       
          this->capacity=p2.capacity;
     }
     void setcoefficient(int coefficient,int value)
     {
     	if(coefficient<=capacity)
     	{
     		poly[coefficient]=value;
     	}
     	else if(coefficient>capacity)
     	{
            int store=0;
          
            if(coefficient%capacity==0)
            {
              store=coefficient/capacity;
            }
            else {
                store=(coefficient/capacity)+1;
                // cout<<store<<endl;
            }
            int *newpoly=new int[store*capacity];
            for(int i=0;i<=store*capacity;i++)
            {
                    newpoly[i]=0;
                    // cout<<newpoly[i]<<" ";
            }
            // cout<<endl;
            
             // cout<<poly[coefficient]<<" ";
            for(int i=0;i<=capacity;i++)
            {
            	newpoly[i]=poly[i];
            	// cout<<newpoly[i]<<" ";
            }

            delete []poly;
            poly=newpoly;
             poly[coefficient]=value;
            capacity*=store;

     	}
     }
      polynomial operator*(polynomial const &p){
       polynomial pnew;
        delete [] pnew.poly;
        pnew.capacity=this->capacity+p.capacity;
        pnew.poly=new int[pnew.capacity]{0};
        for(int i=0;i<capacity;i++){
            for(int j=0;j<p.capacity;j++){
                pnew.poly[i+j]+=p.poly[j]*poly[i];
            }
        }
        return pnew;
        
        
    }
   polynomial operator+(polynomial const &p){
        polynomial pnew;
        delete [] pnew.poly;
        pnew.capacity=max(this->capacity,p.capacity);
        pnew.poly=new int[pnew.capacity]{0};
        int i=0;
        while(i<capacity&&i<p.capacity){
            pnew.poly[i]=this->poly[i]+p.poly[i];
            i++;
        }
        if(i>=capacity){
            while(i<pnew.capacity){
                pnew.poly[i]=p.poly[i];
                i++;
            }
        }
        else if(i>=p.capacity){
            while(i<pnew.capacity){
                pnew.poly[i]=poly[i];
                i++;
            }
        }
        return pnew;
      
        
    }
   polynomial operator-(polynomial const &p){
        polynomial pnew;
        delete [] pnew.poly;
        pnew.capacity=max(this->capacity,p.capacity);
        pnew.poly=new int[pnew.capacity]{0};
        int i=0;
        while(i<capacity&&i<p.capacity){
            pnew.poly[i]=this->poly[i]-p.poly[i];
            i++;
        }
        if(i>=capacity){
            while(i<pnew.capacity){
                pnew.poly[i]-=p.poly[i];
                i++;
            }
        }
        else if(i>=p.capacity){
            while(i<pnew.capacity){
                pnew.poly[i]=poly[i];
                i++;
            }
        }
        return pnew;
        
    }
    
     void print()
     {
       for(int i=0;i<capacity;i++)
       {
       	if(poly[i]!=0 && poly[i]<0)
       	{
       		cout<<poly[i]<<"x"<<i<<" ";
       	}
       	else if(poly[i]!=0 && poly[i]>0)
       	{
       		cout<<poly[i]<<"x"<<i<<" ";
       	}
       	
       }
       cout<<endl;
     }

     


 };
















