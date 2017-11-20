// ReSharper disable All
#include "Party.h"

using namespace System;

void Party::GoToBeforeParty()
{
	Console::WriteLine("I go to a house party!");
}

void Party::GoToAfterParty()
{
	Console::WriteLine("I go drink to a park!");
}

void Party::GoToParty()
{
	GoToBeforeParty();
	DrinkInClub();
	GoToAfterParty();
}

