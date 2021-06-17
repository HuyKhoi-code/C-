#pragma once
#include "GiaSuc.h"
class Cow : virtual public GiaSuc {
public:
	Cow(void);
	~Cow(void);
	void Sua();
	void Voice();
};
