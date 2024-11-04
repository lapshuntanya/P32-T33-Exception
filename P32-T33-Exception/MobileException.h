#pragma once
#include <string>
using std::string;

class MobileException {
protected:
	std::string text;
public:
	MobileException(std::string text) { this->text = text; }
	virtual string showMessage()const = 0;
};

class SecondsException : public MobileException {
	int seconds;
public:
	SecondsException(std::string text, int seconds) :MobileException(text) {
		this->seconds = seconds;
	}
	string showMessage()const override {
		return text + ". Seconds:" + std::to_string(seconds)+".";
	}
};

class NameException : public MobileException {
	std::string name;
public:
	NameException(std::string text, std::string name) :MobileException(text) {
		this->name = name;
	}
	string showMessage()const override {
		return text + ". Name:" + name + ".";
	}
};