#pragma once
template<class T>
class ExArray {
private:
	T* a;
	int size;
public:
	ExArray(int s) {
		a = new T[size = s];
	}
	void addData(T data) {
		for (int i = 0; i < size; i++) {
			a[i] = data;
		}
	}
	void printData() {
		for (int i = 0; i < size; i++) {
			cout << a[i] << ",";
		}
		cout << endl;
	}
};