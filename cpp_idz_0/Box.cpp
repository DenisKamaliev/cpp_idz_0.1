#include "Box.h"
#include "Errors.h"


Box::Box() {

}

Box::Box(int length, int width, int height, double weight, int value) {
	if (length <= 0) {
		throw Errors("Некорректная длина");
	}
	this->length = length;
	if (width <= 0) {
		throw Errors("Некорректная ширина");
	}
	this->width = width;
	if (height <= 0) {
		throw Errors("Некорректная высота");
	}
	this->height = height;
	if (weight <= 0) {
		throw Errors("Некорректный вес");
	}
	this->weight = weight;
	if (value <= 0) {
		throw Errors("Некорректная стоимость");
	}
	this->value = value;
}

bool equal(const Box& box_1, const Box& box_2) {
	return box_1.length == box_2.length && box_1.width == box_2.width && box_1.height == box_2.height && box_1.weight == box_2.weight && box_1.value == box_2.value;
}

istream& operator >>(istream& in, Box& box) {
	int length, width, height, value;
	double weight;
	in >> length >> width >> height >> weight >> value;
	if (length <= 0) {
		throw Errors("Некорректная длина");
	}
	box.length = length;
	if (width <= 0) {
		throw Errors("Некорректная ширина");
	}
	box.width = width;
	if (height <= 0) {
		throw Errors("Некорректная высота");
	}
	box.height = height;
	if (weight <= 0) {
		throw Errors("Некорректный вес");
	}
	box.weight = weight;
	if (value <= 0) {
		throw Errors("Некорректная стоимость");
	}
	box.value = value;
	return in;
}


ostream& operator <<(ostream& out, const Box& box) {
	out << "length: " << box.length << ", width: " << box.width <<
		", height: " << box.height << ", weight: " << box.weight <<
		", value: " << box.value;
	return out;
}

int sumValue(int n, const Box* const arr) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + arr[i].value;
	}
	return sum;
}

bool checkSumBox(int n, const Box* const arr, int param) {
	for (int i = 0; i < n; i++) {
		if (arr[i].length + arr[i].width + arr[i].height > param) {
			return false;
		}
	}
	return true;
}

double maxWeight(int n, const Box* const arr, int maxV) {
	double max = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i].length * arr[i].width * arr[i].height <= maxV && max < arr[i].weight) {
			max = arr[i].weight;
		}
	}
	return max;
}

