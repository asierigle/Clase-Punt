#ifndef __DYNAMICARRAY_H__
#define __DYNAMICARRAY_H__	
#include "p2Defs.h"

#define BLOCK 32

template <class TYPE> 
class DynamicArray
{
public:
	//Constructors and destructors
	DynamicArray(){
		data = new TYPE[memCapacity];
	}

	DynamicArray(const DynamicArray<TYPE>& DynA):numElements(DynA.numElements){
		
		memCapacity = MAX(BLOCK, DynA.numElements);
		data = new TYPE[BLOCK];
		memcpy(data, DynA.data, DynA.numElements*sizeof(TYPE));
	}
	//Reserva de memoria
	DynamicArray(uint& memory){
		memCapacity += memory;
		data = new TYPE[memCapacity];
	}

	~DynamicArray(){
		if (data != NULL)delete[] data;
	}

	void PushBack(const TYPE& DynA){ 
		if (memCapacity < numElements){
			TYPE* tmp = data;
			memCapacity += BLOCK;
			data = new TYPE[memCapacity];
			memcpy(data, tmp, numElements* sizeof(TYPE));
			delete[] tmp;
		}
			data[numElements++] = DynA;
	}

	TYPE& At(const uint index) const{
		if (index < numElements){
			return data[index];
		}
		return NULL;
	}
	
	uint Capacity()const{
		return memCapacity;
	}

	uint Size()const{
		return numElements;
	}

	void Clear(){
			numElements = 0;
	}

	bool Empty() const{
		return strlen(data) > 0 ? true : false;
	}

private:
	TYPE* data = NULL;
	uint numElements = 0;
	uint memCapacity = BLOCK;
};

#endif // !__DYNAMICARRAY_H__
