#pragma once
#include <iostream>
#include <string>
// Lab 7 ex 2 (cumva)
template <typename T>
class Vector {
private:
	int count;
	int currentPosition;
	T* vector;
	T empty;
	const T* empty_C = nullptr;

	void Debug(std::string message)
	{
		std::cout << message << std::endl;
	}

	void Resize()
	{
		T* aux = new T[count * 2];
		count *= 2;
		for (int i = 0; i < currentPosition; i++)
			aux[i] = vector[i];
		delete[] vector;
		vector = aux;
	}

public:
	Vector(int length)
	{
		if (length < 1)
		{
			Debug("Error! The length of the vector can't be below 1.");
			return;
		}
		count = length;
		currentPosition = 0;
		vector = new T[length];
	}

	void Push(T obj)
	{
		if (currentPosition < count)
		{
			vector[currentPosition++] = obj;
			return;
		}
		Resize();

		vector[currentPosition++] = obj;
	}

	T Pop()
	{
		if (currentPosition > 0)
			return vector[currentPosition];
		Debug("Error! The vector is empty!");
		return empty;
	}

	void Remove(int index)
	{
		if (index < 0 || index > currentPosition)
		{
			Debug("Error! Can't remove at that index.");
			return;
		}
		for (int i = index; i < currentPosition - 1; i++)
			vector[i] = vector[i + 1];
		currentPosition--;
	}

	void Insert(T obj, int index)
	{
		if (index < 0 || index > currentPosition)
		{
			Debug("Error! Can't insert element at the specified index.");
			return;
		}

		if (currentPosition == index || currentPosition >= count)
		{
			Resize();
			for (int i = currentPosition; i > index; i--)
				vector[i] = vector[i - 1];
			vector[index] = obj;
			currentPosition++;
			return;
		}

		// This means that we have space left in the vector.
		for (int i = currentPosition; i >= index; i--)
			vector[i] = vector[i - 1];
		vector[index] = obj;
		currentPosition++;
	}

	void Sort(bool IsGreater(T, T))
	{
		if (IsGreater == nullptr)
		{
			T aux;
			bool ok;
			do
			{
				ok = true;
				for (int i = 0; i < currentPosition - 1; i++)
					if (vector[i] < vector[i + 1])
					{
						aux = vector[i];
						vector[i] = vector[i + 1];
						vector[i + 1] = aux;
						ok = false;
					}
			} while (!ok);
			return;
		}
		T aux;
		bool ok;
		do
		{
			ok = true;
			for (int i = 0; i < currentPosition - 1; i++)
				if (IsGreater(vector[i], vector[i + 1]) == true)
				{
					aux = vector[i];
					vector[i] = vector[i + 1];
					vector[i + 1] = aux;
					ok = false;
				}
		} while (!ok);

	}

	const T& Get(int index)
	{
		if (index < 0 || index >= currentPosition)
		{
			Debug("Error! Can't get element at the specified index.");
			return *empty_C;
		}
		return vector[index];
	}

	void Set(T obj, int index)
	{
		if (index < 0 || index >= currentPosition)
		{
			Debug("Error! Can't set element at the specified index.");
			return;
		}
		vector[index] = obj;
	}

	int Count() const
	{
		return currentPosition;
	}

	int firstIndexOf(T obj, bool IsEqual(T, T))
	{
		if (IsEqual == nullptr)
		{
			for (int i = 0; i < currentPosition; i++)
				if (obj == vector[i])
					return i;
			return -1;
		}
		for (int i = 0; i < currentPosition; i++)
			if (IsEqual(vector[i], obj) == true)
				return i;
		return -1;
	}
};