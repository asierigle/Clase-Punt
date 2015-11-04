#include <iostream>
#include "p2String.h"


p2String::p2String(const p2String& s){


}
p2String::p2String(const char* string){
	if (string != NULL){
		uint size = GetSize(string);
		if (size > 0){
			size += 1;
			str = new char[size];
			capacity = size;
			strcpy_s(str, size, string);
		}
		else{
			str = new char[1];
			capacity = 1;
			*str = '\0';
		}
	}
}

p2String::p2String(uint scapacity){
	if (scapacity > 0){
		str = new char[scapacity];
		capacity = scapacity;
	}
	else{
		printf("error");
	}
}
p2String::~p2String(){
	if (str != NULL){
		delete[] str;
	}
}
//Methods
const char* p2String::c_str()const{
	if(str != NULL){
		return str;
	}
}

int p2String::GetSize(const char* string)const
{
	uint size = 0;

	if (string != NULL){

		const char* tmp = string;
		
		for (tmp; *tmp != '\0'; tmp++){
			size++;
		}
	}
	return size;
}
//Operators
bool p2String::operator == (const p2String& string)const{
	return strcmp(this->str, string.str) == 0;
}

bool p2String::operator != (const p2String& string)const{
	return strcmp(this->str, string.str) != 0;
}

const p2String& p2String::operator = (const p2String& string){
	uint size = GetSize(string.str);
	if (size > capacity){
		delete[] str;
		capacity = size;
		str = new char[size];
	}
	strcpy_s(str, size, string.str);
	return (*this);
}

const p2String& p2String::operator += (const p2String& string){
	uint size = GetSize(string.str);
	char* tmp = new char[size + capacity + 1];
	strcpy_s(tmp, size + capacity + 1, str);
	delete[] str;
	
	strcat_s(str, capacity + size + 1, string.str);
	str = tmp;
	return(*this);


}