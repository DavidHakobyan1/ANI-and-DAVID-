#ifndef STRING
#define STRING

class my_string 
{
	public:
		std::string str;
	public:
		my_string();
		my_string(std::string my_str);
		my_string(my_string& b);
	 	~my_string();
			
	public:
		std::string get_str();
		int get_size();
		my_string& append(my_string& obj);
		bool operator==(my_string& obj);
		my_string& operator=(const my_string& obj);
    	my_string& operator+(const my_string& obj);
		bool operator<(const my_string& obj);
		my_string& operator+=(const my_string& obj);
		char operator[](int index);
		my_string& swap(my_string& obj);
		int find_first_of(my_string& obj);
};

#endif	
