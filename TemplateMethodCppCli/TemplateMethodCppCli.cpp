// TemplateMethodCppCli.cpp : main project file.

#include "JakubParty.h"
#include "MichalParty.h"
#include "PawelParty.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	auto jakub = gcnew JakubParty();
	auto michal = gcnew MichalParty();
	auto pawel = gcnew PawelParty();

	Console::WriteLine("Jakub:");
	jakub->GoToParty();

	Console::WriteLine("Michal:");
	michal->GoToParty();

	Console::WriteLine("Pawel:");
	pawel->GoToParty();

	Console::Read();
}
