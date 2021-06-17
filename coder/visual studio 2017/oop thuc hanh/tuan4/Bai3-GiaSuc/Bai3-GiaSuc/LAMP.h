#pragma once
#include "GiaSuc.h"
class Lamp : virtual public GiaSuc {
public:
	Lamp(void);
	~Lamp(void);
	void Sua();
	void Voice();
};
