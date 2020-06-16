
	#include <iostream>
	using namespace std;

	#include <iomanip>
	using namespace std;

	class Time
	{
	friend ostream &operator<<(ostream &,const Time &);
	friend istream &operator>>(istream &,Time &);	
		
		
	public:
		Time(int h=0,int m=0,int s=0) //constructor //Time a;
		{
			setTime(h,m,s);//Time a;
		}

		Time(const Time &timeToCopy) //copy constructor 
		{
			this->hour=timeToCopy.getHour();//b=a;
			this->minute=timeToCopy.getMin();
			this->second=timeToCopy.getSec();
		}
		int getHour()const{return hour;}
		int getMin()const{return minute;}
		int getSec()const{return second;}
		//--------------------------------------------------
		void setHour(int h){this->hour=(h>=0 && h<24)?h:0;}
		void setMin(int m){this->minute=(m>=0 && m<60)?m:0;}
		void setSec(int s){this->second=(s>=0 && s<60)?s:0;}
		void setTime(int ho,int mi,int se){
			setHour(ho);setMin(mi);setSec(se); 
		}
		//--------------------------------------------------
		Time operator+=(int addSec)
		{
			int mi=getMin(); int sec=getSec(); int ho=getHour();
			sec+=addSec%60;
			mi+=addSec/60;
			ho+=mi/60;

			if(sec>59)
			{
				sec-=60;
				mi++;
				if(mi>59)
				{
					mi-=60;
					ho++;
					if(ho>23)
					{
						ho=ho-24;
					}
				}
			}
			
			setMin(mi);setSec(sec);setHour(ho);
			

		}
		//--------------------------------------------------
		Time operator-=(int minus)
		{
			int mi=getMin(); int sec=getSec(); int ho=getHour();

		

			if(sec<minus)
			{
				if(mi>0){
				mi--;	sec+=60;
				sec-=minus;}
				else{
					if(ho>0){
						ho--; mi=59; 
						mi--; sec+=60;
						sec-=minus;
					}
					else{
						ho+=23; mi=60;
						mi--; sec+=60;
						sec-=minus;
					}

					
				}
				
				
			}
			else
			{
				sec-=minus;
			}
			
			setMin(mi);setSec(sec);setHour(ho);
			

		}
		//--------------------------------------------------
		Time operator++()//cout<<++b<<endl;
		{	
			
			int mi=getMin(); int sec=getSec(); int ho=getHour();

			++sec;
			if(sec>59)
			{
				sec-=60;
				++mi;
				if(mi>59)
				{
					mi-=60;
					++ho;
					if(ho>23)
					{
						ho=ho-24;
					}
				}
			}
			
			setMin(mi); setSec(sec); setHour(ho);
			
			return *this;

		}
//--------------------------------------------------
		Time operator++(int)//cout<<b++<<endl;
		{	
			const Time old(*this); //buneaq yuh
			int mi=getMin(); int sec=getSec(); int ho=getHour();

			sec++;
			if(sec>59)
			{
				sec-=60;
				
				mi++;
				if(mi>59)
				{
					mi-=60;
					ho++;
					if(ho>23)
					{
						ho=ho-24;
					}
				}
			}
			
			setMin(mi); setSec(sec); setHour(ho);
			
			return old;


		}
/*
23:59:20
23:59:20
00:00:00
23:59:59
23:59:58
23:59:58
23:59:08
23:59:09
23:59:09
23:59:09

Time operator++(int)//cout<<b++<<endl;
		{	
			
			int mi=getMin(); int sec=getSec(); int ho=getHour();

			this->second=sec++;
			if(sec>59)
			{
				sec-=60;
				second=sec;
				minute=mi++;
				if(mi>59)
				{
					minute=mi-=60;
					hour=ho++;
					if(ho>23)
					{
						ho=ho-24;
					}
				}
			}
			
			//setMin(mi); setSec(sec); setHour(ho);
			
			return *this;

		}


*/
//--------------------------------------------------
		Time operator--()//cout<<--b<<endl;
		{	
			
			int mi=getMin(); int sec=getSec(); int ho=getHour();

			if(sec<=0)
			{
				if(mi>0){
				mi--;	sec+=60;
				sec--;}
				else{
					if(ho>0){
						ho--; mi=59; 
						mi--; sec+=60;
						sec--;
					}
					else{
						ho+=23; mi=60;
						mi--; sec+=60;
						sec--;
					}

					
				}
			}
			else
			{
				sec--;

			}
			
			setMin(mi); setSec(sec); setHour(ho);
			
			return *this;
		}
//--------------------------------------------------
		Time operator--(int)//cout<<b--<<endl;
		{	
			const Time old(*this);
			int mi=getMin(); int sec=getSec(); int ho=getHour();

			if(sec<=0)
			{
				if(mi>0){
				mi--;	sec+=60;
				sec--;}
				else{
					if(ho>0){
						ho--; mi=59; 
						mi--; sec+=60;
						sec--;
					}
					else{
						ho+=23; mi=60;
						mi--; sec+=60;
						sec--;
					}

					
				}
			}
			else
			{
				sec--;

			}
			
			setMin(mi); setSec(sec); setHour(ho);
			
			return old;
		}
		
	private:
		int hour;
		int minute;
		int second;

	};

ostream &operator <<(ostream &out,const Time &ti)
{
	out<<setfill('0')<<setw(2)<<ti.getHour()<<":"<<
		setfill('0')<<setw(2)<<ti.getMin()<<":"<<
		setfill('0')<<setw(2)<<ti.getSec();
	return out;
}

istream &operator >>(istream &in,Time &ti)
{	
	int a,b,c;
	in>>a>>b>>c;
	ti.setTime(a,b,c);
	return in;

}


int main()
{


Time a;

cin>>a;

cout<<a<<endl;

Time b;

b=a;

cout<<b<<endl;

b+=40;

cout<<b<<endl;

cout<<--b<<endl;

cout<<b--<<endl;

cout<<b<<endl;


b-=50;

cout<<b<<endl;

cout<<++b<<endl;

cout<<b++<<endl;

cout<<b<<endl;

return 0;

}
