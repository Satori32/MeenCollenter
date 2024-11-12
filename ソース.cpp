#include <stdio.h>
#include <stdint.h>

struct Characters {
	const Size = 1;
	//type C = NULL;
	typedef char C;
	//type CHAR = C;
	C Ch[Size] = { 0, };
};

template<class CHAR,size_t N>
Characters ConstructCharacters<CHAR, N>() {
	Characters C = { CHAR,N };

	return C;
}

struct Meen {
	Characters Code;
	Characters Name;
	Characters Info;

	//type Type = NULL;
	typedef void* Type;
	//type T = Type;
	Type Effect;

};

struct MeenCollecter {
	const size_t Size = 1;
	Characters Name;
	Characters Code;
	Characters Info;
	Meen Meens[Size] = { 0, };
};

template<size_t N>
MeenCollecter ConstructMeenCollecter<N>() {
	MeenCollecter M = { N };

	return M;
}