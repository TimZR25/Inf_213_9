#include <iostream>

class DataStorage
{
private:
	std::string _manufacturer;
	std::string _model;
	int _serialNumber;
	std::string _type;
	int _capacity;
	int _amountParts;
	int _capacityParts;
	std::string _partilionStyle;

	void init(std::string manufacturer,
		std::string model,
		int serialNumber,
		std::string type,
		int capacity,
		int amountParts,
		int capacityParts,
		std::string partilionStyle);
public:
	DataStorage(std::string manufacturer,
		std::string model,
		int serialNumber,
		std::string type,
		int capacity,
		int amountParts,
		int capacityParts,
		std::string partilionStyle);

	void Print();
	std::string Get_Manufacturer();
	std::string Get_Model();
	int Get_SerialNumber();
	std::string Get_Type();
	int Get_Capacity();
	int Get_AmountParts();
	int Get_CapacityParts();
	std::string Get_PartilionStyle();

};

