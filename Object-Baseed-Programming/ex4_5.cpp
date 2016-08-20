#include <iostream>
#include <vector>

using namespace std;
typedef float elemType;
class matri
{
public:
	matri(const elemType*);
	matri(elemType = 0,elemType = 0,elemType = 0,elemType = 0,
		elemType = 0,elemType = 0,elemType = 0,elemType = 0,
		elemType = 0,elemType = 0,elemType = 0,elemType = 0,
		elemType = 0,elemType = 0,elemType = 0,elemType = 0,);
	~matri();
	int rows()const{
		return 4;
	}
	int cols()const{
		return 4;
	}
	void operator+=(const matri&);
	
private:
	elemType _matrix[4][4];
};

int main(int argc, char const *argv[])
{
	
	return 0;
}