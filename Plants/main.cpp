#include <iostream>

class Plants {
public:
	virtual int GetHeight() {
		return height_;
	}
	virtual bool GetSize() {
		return size_;
	}
	virtual std::string GetName() {
		return name_;
	}


	virtual void SetHeight(int height) {
		height_ = height;
	}
	virtual void SetName(std::string name) {
		name_ = name;
	}
	

protected:
	std::string name_;
	bool size_;
	int height_;
};

class Tree :public Plants {
public:
	Tree() {
		size_ = true;
	}
/*
	Plod *TakePlod() {
		count_plod_ -= 1;
		Plod *ptrPlod = new Plod(500, "Груша");
		return ptrPlod;
	}
*/
private:
	int count_plod_ = 20;


};

class Bush : public Plants {
public:
	Bush() {
		size_ = false;
	}

	void SetInfo(int height, std::string name, bool size) {
		name_ = name;
		size_ = size;
		height_ = height;
	}

};

class Plod{
public:
	Plod(){
		count_plod_ = 15;
	}
	Plod(int massa, std::string name) {
		massa_ = massa;
		name_ = name;
	}


	virtual float GetMassa() {
		return massa_;
	}
	virtual std::string GetName() {
		return name_;
	}

	virtual void SetMassa(float massa) {
		massa_ = massa;
	}

	virtual void SetName(std::string name) {
		name_ = name;
	}
	virtual void TakePlod()const {

	}

protected:
	std::string name_;
	float massa_;
	int count_plod_;

};

class Berry:public Plod{
public:
	Berry TakePlod()const {
		Berry plod = Berry();
		return plod;
	}
	


};

class Fruit :public Plod {
public:
	Fruit TakePlod()const {
		Fruit plod = Fruit();
		return plod;
	}



};
class Cone :public Plod {//шишки
public:
	Cone TakePlod()const {
		Cone plod = Cone();
		return plod;
	}



};







int main() {
	Plants a;
	Tree b;
	Fruit mango;
	mango.TakePlod();


	return 0;
}
