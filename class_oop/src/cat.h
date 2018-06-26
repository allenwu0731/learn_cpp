/*
two boolean variable are defined, "angry" is private and "happy" is public
"happy" can be accessed beyounf the clss 
while "angry" is only avaialbe within the calss
*/
//file name: cat.h
//Programmer: TWu

class Cat{
private:
	/*in class initialization, only in c++11, 1st way to do it*/
	//bool angry = false; 

	bool m_angry;

	// use this varaible to count how many object have been created
	// static variable is associated with the class, not with a particular object
	static int countObject; 

	// regular varialbe is associated with the object
	int m_id;


public:
	//if constructor is not used, uncomment "bool angry=false;" 
	//and comment out "bool angry;"
	// Cat(): angry(false){} /*constructor, 2nd way to initialize angry*/
	Cat(); /*3rd way to initialize angry, check cat.cpp*/
	~Cat();  //destructor
	
	bool m_happy;
	void speak();
	void jump();

	void makeAngry();
	void makeSad();

	//Initialization of const must be done here
	//make "MAX" read-only variable
	static int const MAX = 99;
	int getID();
};

