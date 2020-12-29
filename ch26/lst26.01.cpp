template<typename T>
class smart_pointer
{
	private:
		T* rawPtr;
	
	public:
		smart_pointer(T* pData): rawPtr(pData){}
		~smart_pointer(){delete rawPtr;}
	
	// Copy constructor
	smart_pointer(const smart_pointer& anotherSP);

	// copy assignment operator
	smart_pointer& operator= (const smart_pointer& anotherSP);
	T& operator* () const
	{
		return *rawPtr;
	}

	T* operator ->() const
	{
		return rawPtr;
	}

};