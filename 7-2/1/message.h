#include <map>
#include <vector>
#include <string>

class MessageBook {
public:
	MessageBook();
	~MessageBook();
	void AddMessage(int number, const std::string& message);	
	void DeleteMessage(int number); 
	//std::vector<int> GetNumbers();
	const std::string& GetMessage(int number);
	void PrintList();

private:
	std::map<int, std::string> messages_;
};
