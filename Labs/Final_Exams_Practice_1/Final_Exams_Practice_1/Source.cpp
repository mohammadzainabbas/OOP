//maximum function and average of array function via template

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Classroom
//{
//private:
//	int students;
//	
//public:
//	Classroom(int a=0):students(a){};
//	void setStudents(int a)
//	{
//		students=a;
//	}
//	int getStudents()
//	{
//		return students;
//	}
//	friend bool operator>(Classroom &a,Classroom &b);
//	friend ostream& operator<<(ostream out,Classroom &a);
//};
//
//bool operator>(Classroom &a,Classroom &b)
//{
//	return (a.getStudents()>b.getStudents())?true:false;
//}
//ostream& operator<<(ostream out,Classroom &a)
//{
//	out<<"Total Students are:\t"<<a.getStudents()<<endl;
//	return out;
//}
//template <class Type>
//Type maximum(Type a, Type b)
//{
//	return (a>b)?a:b;
//}
//template <class Type>
//Type Array_Average(Type *Array, int ArrayLength)
//{
//    Type Sum = 0;
//    for (int i=0; i < ArrayLength; i++)
//        Sum += Array[i];
// 
//    Sum /= ArrayLength;
//    return Sum;
//}
//
//void main()
//{
//	cout<<maximum(4,9)<<"\n"<<maximum('a','b')<<"\n"<<maximum(979.708,9970.9)<<endl;
//	int a[5];
//	for (int i=0;i<5;i++)
//	{
//		cin>>a[i];
//	}
//	cout<<Array_Average(a,5);
//	Classroom aa[5] = {Classroom(3), Classroom(8),Classroom(24),Classroom(32),Classroom(827)};
//	//cout<<Array_Average(aa,5);
//	
//}						

//Stack via template

//#include <iostream>
//#include <string>
//using namespace std;
//
//template <typename Type>
//class Stack
//{
//public:
//	//explicit Stack(int = 10);
//	~Stack()
//	{
//		delete [] stackpointer;
//	}
//	//template <typename Type>
//
//	Stack(int a):size(a>0?a:10),top(-1),stackpointer(new Type [size])
//	{}
//	Stack():size(10),top(-1),stackpointer(new Type [size])
//	{}
//	bool isEmpty() const
//	{
//		return top == -1;
//	}
//	bool isFull() const
//	{
//		return top == size - 1;
//	}
//	bool push (const Type &pushValue)
//	{
//		if (!isFull())
//		{
//			stackpointer[++top] = pushValue;
//			return true; 
//		}
//		return false;
//	}
//	bool pop (Type &popValue)
//	{
//		if(!isEmpty())
//		{
//			popValue= stackpointer[top--];
//			return true;
//		}
//		return false;
//	}
//private:
//	int size;
//	int top;
//	Type* stackpointer;
//};
//
//template <typename Type>
//void PrintStack(Stack <Type> &stack, Type startValue, Type incrementValue)
//{
//	cout<<"\n\nPushing to stack\n";
//
//	while (stack.push(startValue))
//	{
//		cout<<startValue<<"\t";
//		startValue+=incrementValue;
//	}
//
//	cout<<"\nPoping from stack\n";
//
//	while (stack.pop(startValue))
//	{
//		cout<<startValue<<"\t";
//	}
//}
//
//void main()
//{
//	/*Stack<double> doubleStack(5);
//	double doubleValue = 1.5;
//
//	cout<<"Pushing\n";
//
//	while (doubleStack.push(doubleValue))
//	{
//		cout<<doubleValue<<"\t";
//		doubleValue+=1.5;
//	}
//
//	cout<<"\nPoping\n";
//
//	while (doubleStack.pop(doubleValue))
//	{
//		cout<<doubleValue<<"\t";
//	}
//
//	cout<<"\n\n\nIntegar Stack\n";
//
//	Stack<int> intStack;
//	int val = 1;
//
//	cout<<"Pushing\n";
//
//	while (intStack.push(val))
//	{
//		cout<<val++<<"\t";
//	}
//
//	cout<<"Poping\n";
//
//	while (intStack.pop(val))
//	{
//		cout<<val<<"\t";
//	}*/
//
//	Stack<double> doubleStack(5);
//	Stack<int> intStack;
//
//	PrintStack(doubleStack, 1.5, 1.5);
//	PrintStack(intStack, 1, 1);
//
//}

//Implementing Array + Array.GetLength() etc functions via template

//#include <iostream>
//#include <assert.h> // for assert() //assert will terminate the program (usually with a message quoting the assert statement) if its argument turns out to be false.
// 
//template <typename T>
//class Array
//{
//private:
//    int m_nLength;
//    T *m_ptData;
// 
//public:
//    Array()
//    {
//        m_nLength = 0;
//        m_ptData = 0;
//    }
// 
//    Array(int nLength)
//    {
//        m_ptData= new T[nLength];
//        m_nLength = nLength;
//    }
// 
//    ~Array()
//    {
//		Erase();
//	}
// 
//    void Erase()
//    {
//        delete[] m_ptData;
//        // We need to make sure we set m_pnData to 0 here, otherwise it will
//        // be left pointing at deallocated memory!
//        m_ptData= 0;
//        m_nLength = 0;
//    }
// 
// 
//    T& operator[](int nIndex)
//    {
//        assert(("Required index isn't available, pal!",(nIndex >= 0 && nIndex < m_nLength)));
//        return m_ptData[nIndex];
//    }
// 
//    // The length of the array is always an integer
//    // It does not depend on the data type of the array
//    int GetLength(); // templated GetLength() function defined below
//};
// 
//template <typename T>
//int Array<T>::GetLength() { return m_nLength; }
// void main()
//{
//	Array<int> anArray(12);
//	Array<double> adArray(12);
// 
//	for (int nCount = 0; nCount < 12; nCount++)
//	{
//		anArray[nCount] = nCount;
//		adArray[nCount] = nCount + 0.5;
//	}
// 
//	for (int nCount = 0; nCount < 12; nCount++)
//		std::cout << anArray[nCount] << "\t" << adArray[nCount] << std::endl;
// 
// }

//cin and cout using iterators

//#include <iostream>
//#include <string>
//#include <iterator>
//
//using namespace std;
//
//void main()
//{
//	cout<<"Enter two numbers\n";
//
//	istream_iterator <int> input(cin);
//
//	int num1 = *input;
//	++input;
//	int num2 = *input;
//
//	ostream_iterator <int> out(cout);
//	ostream_iterator <string> Stringout(cout);
//	
//	*Stringout = "Sum is \t";		//cout<<"Sum is \t";
//	*out = num1 + num2;				//cout<<num1+num2;
//	*Stringout = "\n";				//cout<<"\n";
//}

//Vector class STL Testing

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//#include <stdexcept>
//
//using namespace std;
//
//void main()
//{
//	const int array_size = 5;
//	int myarray[array_size] = {1, 2, 3, 4, 5};
//	vector<int> int_vector(myarray, myarray + array_size);
//	ostream_iterator<int> out(cout," ");
//
//	cout<<"Vector int array is: ";
//	copy(int_vector.begin(), int_vector.end(), out);
//	cout<<"\nAfter replacing last element with 6\n";
//	int_vector.at(4) = 6;
//	copy(int_vector.begin(), int_vector.end(), out);
//}

//List class STL Testing

//#include <iostream>
//#include <list>
//#include <algorithm>
//#include <iterator>
//
//using namespace std;
//template <class T> 
//void PrintList(const list <T> &list_reference)
//{
//	if(list_reference.empty())
//	{
//		cout<<"List is empty";
//	}
//	else
//	{
//		ostream_iterator <T> out(cout," ");
//		copy(list_reference.begin(), list_reference.end(), out);
//	}
//	cout<<endl;
//}
//template <class T> 
//void PrintBothLists(const list <T> &list_1, const list <T> &list_2)
//{
//	cout<<"First list is\n";
//	PrintList(list_1);
//	cout<<"\nSecond List is\n";
//	PrintList(list_2);
//	cout<<endl;
//}
//
//void main()
//{
//	const int array_size = 5;
//	int myarray[array_size] = {1, 2, 3, 4, 5};
//	list <int> int_list_1(myarray, myarray + array_size);
//	list <int> int_list_2;
//	
//	cout<<"Fist list after initialization:\n";
//	PrintList(int_list_1);
//
//	int_list_2.assign(int_list_1.begin(),int_list_1.end());
//
//	cout<<"After assigning 2nd list the elements of 1st list:\n";
//	PrintBothLists(int_list_1,int_list_2);
//
//	int_list_2.push_front(3);
//	int_list_2.push_front(2);
//	int_list_2.push_front(4);
//	int_list_2.push_back(11);
//	int_list_2.push_back(23);
//	int_list_2.push_back(8);
//
//	cout<<"After adding elements to 2nd list\n";
//	PrintList(int_list_2);
//
//	cout<<"After sorting 2nd list\n";
//	int_list_2.sort();
//	PrintList(int_list_2);
//
//	cout<<"After swapping 1st list and 2nd list\n";
//	int_list_1.swap(int_list_2);
//	PrintBothLists(int_list_1,int_list_2);
//
//	cout<<"After removing 2nd list members and inserting them at the end of 1st list\n";
//	int_list_1.splice(int_list_1.end(), int_list_2);
//	PrintBothLists(int_list_1,int_list_2);
//
//	cout<<"Inserting elements in 2nd list\n";
//	int_list_2.insert(int_list_2.begin(), myarray, myarray + array_size);
//	PrintList(int_list_2);
//
//	cout<<"Merging both lists -- Removing elements of 1st list and inserting them into 2nd list in sorted order"<<endl;
//	int_list_2.merge(int_list_1);
//	PrintBothLists(int_list_1,int_list_2);
//
//	cout<<"After sorting 2nd list\n";
//	int_list_2.sort();
//	PrintList(int_list_2);
//
//	cout<<"Removing duplicate elements from 2nd list\n";
//	int_list_2.unique();
//	PrintList(int_list_2);
//}

//Exception Handling

//Derived a class from Base class Run-time + Simple try-catch

//#include <iostream>
//#include <stdexcept>
//
//using namespace std;
//
//class DivideByZeroException: public runtime_error
//{
//public:
//	DivideByZeroException():runtime_error("Can't be divided by zero")
//	{
//	}
//};
//
//double Quotient(int num1, int num2)
//{
//	if(num2==0)
//		throw DivideByZeroException();
//	return static_cast<double> (num1)/num2;
//}
//
//void main()
//{
//	int num1=0,num2=0;
//
//	double result =0;
//
//	while (cin>>num1>>num2)
//	{
//		try
//		{
//			result=Quotient(num1,num2);
//			cout<<result<<endl;
//		}
//		catch (DivideByZeroException &exp)
//		{
//			cout<<exp.what()<<endl;
//		}
//	}
//	cout<<endl;
//}

//Unexpected Exceptions

//#include <iostream>
//#include <exception>
//
//using namespace std;
//
//void Exception()
//{
//	cout<<"Exception here!, pal";
//	exit(EXIT_FAILURE);
//}
//void Test_Function() throw()
//{
//	//throw exception();
//}
//
//void main()
//{
//	set_unexpected(Exception);
//
//	try
//	{
//		Test_Function();
//	}
//	catch (const logic_error&)
//	{
//	}
//}

//void main()
//{
//
//(([](){})());
//
//}

//File handling

//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//void main()
//{
//	ifstream in;
//	ofstream out;
//	in.open("number.txt");
//	out.open("Copynumber.txt");
//	
//	char a;
//	int num=0;
//	if(in.fail())
//	{
//		cerr<<"Error opening file\n";
//		exit(1);
//	}
//	do
//	{
//	in.get(a);
//	num=(int)a;
//	num=num*2;
//	a=(char)num%48;
//	out.put(num);
//
//	} while (!in.eof());
//	
//
//
//
//	//string the = "the";
//	//string a;
//	//if(in.fail())
//	//{
//	//	cerr<<"Error opening file\n";
//	//	exit(1);
//	//}
//	//int counter=0;
//	//do
//	//{
//	//	in>>a;
//	//	out<<a;
//	//	if (a==the)
//	//	{
//	//		counter++;
//	//	}
//	//} while (!in.eof());
//	//cout<<"Total the ares:\t"<<counter<<endl;
//
//	in.close();
//	out.close();
//}
