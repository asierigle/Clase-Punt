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
