// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// tset.cpp - Copyright (c) Гергель В.П. 04.10.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (19.04.2015)
//
// Множество - реализация через битовые поля

#include "tset.h"

// Fake variables used as placeholders in tests
static const int FAKE_INT = -1;
static TBitField FAKE_BITFIELD(1);
static TSet FAKE_SET(1);

TSet::TSet(int mp) : BitField(mp)
{
    MaxPower = mp;
}

// конструктор копирования
TSet::TSet(const TSet &s) : BitField(s.BitField)
{
    MaxPower = s.MaxPower;
    /*BitField = s.BitField;*/

}

// конструктор преобразования типа
TSet::TSet(const TBitField &bf) : BitField(bf)
{
    MaxPower = bf.GetLength();
}

TSet::operator TBitField()
{
    return BitField;
}

int TSet::GetMaxPower(void) const // получить макс. к-во эл-тов
{

    return MaxPower;
}

int TSet::IsMember(const int Elem) const // элемент множества?
{
    if (Elem < 0 || Elem > MaxPower) {
        return 0;
    }
    return BitField.GetBit(Elem);
}

void TSet::InsElem(const int Elem) // включение элемента множества
{
    if (Elem >= 0 && Elem <= MaxPower) {
        BitField.SetBit(Elem);
    }
}

void TSet::DelElem(const int Elem) // исключение элемента множества
{
    if (Elem >= 0 && Elem <= MaxPower) {
        BitField.ClrBit(Elem);
    }
}

// теоретико-множественные операции

TSet& TSet::operator=(const TSet &s) // присваивание
{
    if(this!=&s){
        BitField = s.BitField;
        MaxPower = s.MaxPower;
    }
    return *this;
}

int TSet::operator==(const TSet &s) const // сравнение
{
    return (MaxPower == s.MaxPower)&&(BitField == s.BitField);
}

int TSet::operator!=(const TSet &s) const // сравнение
{
    if (MaxPower != s.MaxPower || BitField != s.BitField) {
        return 1;
    }
    return 0;
}

TSet TSet::operator+(const TSet &s) // объединение
{
    int NMaxPower = (MaxPower > s.MaxPower) ? MaxPower : s.MaxPower;
    TSet res(NMaxPower);
    for (int i = 0; i < MaxPower; i++) {
        if (IsMember(i)) {
            res.InsElem(i);
        }
    }
    for (int i = 0; i < s.MaxPower; i++) {
        if (s.IsMember(i)) {
            res.InsElem(i);
        }
    }
    return res;
}

TSet TSet::operator+(const int Elem) // объединение с элементом
{
    if (Elem<0 || Elem > MaxPower) {
        throw out_of_range("Exception op +");
    }
    TSet res(*this);
    res.InsElem(Elem);
    return res;
}

TSet TSet::operator-(const int Elem) // разность с элементом
{
    TSet res(*this);
    res.DelElem(Elem);
    return res;
}

TSet TSet::operator*(const TSet &s) // пересечение
{
    int NMaxPower = (MaxPower > s.MaxPower) ? MaxPower : s.MaxPower;
    TSet res(NMaxPower);
    for (int i = 0; i < NMaxPower; i++) {
        if (IsMember(i) && s.IsMember(i)) {
            res.InsElem(i);
        }
    }
    return res;
}

TSet TSet::operator~(void) // дополнение
{
    TBitField res = ~BitField;
    return TSet(res);
}

// перегрузка ввода/вывода

istream &operator>>(istream &istr, TSet &s) // ввод
{
    int g;
    for (int i = 0; i < s.MaxPower; i++) {
        istr >> g;
        s.InsElem(g);
    }
    return istr;
}

ostream& operator<<(ostream &ostr, const TSet &s) // вывод
{
    
    for (int i = 0; i < s.MaxPower; i++) {
        if (s.IsMember(i)) {
            ostr << i;
        }
    }
    return ostr;
}
