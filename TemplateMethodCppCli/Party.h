#pragma once

interface class IParty
{
	void GoToParty();
};

ref class Party : public IParty
{
private:
	void GoToBeforeParty();
	void GoToAfterParty();
protected:
	virtual void DrinkInClub() = 0;
public:
	void GoToParty() override sealed;
};
