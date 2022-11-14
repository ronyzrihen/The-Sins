#pragma once
#include <iostream>
#include "Bladder.h"
#include "Hunger.h"
#include "Energy.h"
#include "Fun.h"
#include "social.h"


class Needs
{
public:
	Needs();
	~Needs();

private:
	Bladder bladder;
	Hunger hunger;
	Energy energy;
	Social social;
};

Needs::Needs()
{
}

Needs::~Needs()
{
}
