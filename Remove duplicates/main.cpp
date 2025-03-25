#include <iostream>
#include <vector>


//funkcja przyjmująca strukture dancyhz ciagem liczb i zwracajaca strukture liczb unikalnych z tego ciągu
struct Data
{
	std::vector<int> numbers;
};

void removeDuplicates(Data &data)
{
	std::vector<int>uniqueNumbers;
	for (int num : data.numbers)
	{
		bool found = false;
		for (int unique : uniqueNumbers)
		{
			if (unique == num) {
				found = true;
				break;
			}
		}
		if (!found)
			uniqueNumbers.push_back(num);
	}
	data.numbers = uniqueNumbers;
}

int main() {
	Data myData = { {1, 2, 3, 4 ,2} };
	std::cout << "Przed usunieciem duplikatow: " ;
	for (int num : myData.numbers)
		std::cout << num << " ";
	removeDuplicates(myData);

	std::cout << "\nPo usunieciem duplikatow: ";
	for (int num : myData.numbers)
		std::cout << num << " ";

	return 0;
}
