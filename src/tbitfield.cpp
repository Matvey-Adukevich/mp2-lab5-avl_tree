// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// tbitfield.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (19.04.2015)
//
// Битовое поле

#include "tbitfield.h"

// Fake variables used as placeholders in tests
static const int FAKE_INT = -1;
static TBitField FAKE_BITFIELD(1);

TBitField::TBitField(int len)
{
    
    if (len < 0) {
        throw std::invalid_argument("negative length ");
    }
    BitLen = len;
    MemLen = (len + 31) / 32;
    pMem = new TELEM[MemLen];
    for (int i = 0; i < MemLen; i++) {
        pMem[i] = 0;
    }

}

TBitField::TBitField(const TBitField &bf) // конструктор копирования
{
    BitLen = bf.BitLen;
    MemLen = bf.MemLen;
    pMem = new TELEM[MemLen];
    for (int i = 0; i < MemLen; i++) {
        pMem[i] = bf.pMem[i];
    }
}

TBitField::~TBitField()
{
    delete[]pMem;
}

int TBitField::GetMemIndex(const int n) const // индекс Мем для бита n
{
    return n>>5;
}

TELEM TBitField::GetMemMask(const int n) const // битовая маска для бита n
{
    int j = n & ((1 << 5) - 1);
    TELEM a = 0;
    a |= (1 << j);
    return a;
}

// доступ к битам битового поля

int TBitField::GetLength(void) const // получить длину (к-во битов)
{
  return this->BitLen;
}

void TBitField::SetBit(const int n) // установить бит
{
    if (n < 0 || n > BitLen) {
        throw std::invalid_argument("Exception SetBit");
    }
    
    int k = GetMemIndex(n);
    /*int j = n & ((1 << 5) - 1);
    TELEM a = 0;
    a = (1 << j);*/
    TELEM a = GetMemMask(n);
    pMem[k] = pMem[k] | a;
}

void TBitField::ClrBit(const int n) // очистить бит
{
    if (n < 0 || n > BitLen) {
        throw std::invalid_argument("Exception ClrBit");
    }
    int k = GetMemIndex(n);
    int j = n & ((1 << 5) - 1);
    TELEM a = 0;
    a = ~(1 << j);
    pMem[k] = pMem[k] & a;
}

int TBitField::GetBit(const int n) const // получить значение бита
{
    if (n < 0 || n > BitLen) {
        throw std::invalid_argument("Exception GetBit");
    }
    int k = GetMemIndex(n);
    TELEM a = pMem[k];
    /*int j = n & ((1 << 5) - 1);
    TELEM b = 0;
    b |= (1 << j);*/
    TELEM b = GetMemMask(n);
    TELEM c = a & b;
    if (c == 0) {
        return 0;
    }
    else {
        return 1;
    }
}

// битовые операции

TBitField& TBitField::operator=(const TBitField &bf) // присваивание
{
    if (this != &bf) {
        delete[] pMem;
        BitLen = bf.BitLen;
        MemLen = bf.MemLen;
        pMem = new TELEM[MemLen];
        for (int i = 0; i < MemLen; i++) {
            pMem[i] = bf.pMem[i];
        }
    }
    return *this;
}

int TBitField::operator==(const TBitField &bf) const // сравнение
{
    if(this->BitLen != bf.BitLen){
        return 0;
    }
    for (int i = 0; i < MemLen; i++) {
        if (this->pMem[i] != bf.pMem[i]) {
            return 0;
        }
    }
    return 1;
}

int TBitField::operator!=(const TBitField &bf) const // сравнение
{
    if (this->BitLen != bf.BitLen) {
        return 1;
    }
    for (int i = 0; i < MemLen; i++) {
        if (this->pMem[i] != bf.pMem[i]) {
            return 1;
        }
    }
    return 0;
}

TBitField TBitField::operator|(const TBitField &bf) // операция "или"
{
    /*if (this->BitLen != bf.BitLen) {
        throw std::invalid_argument("Exception Or");
    }*/
    TBitField res(bf.BitLen);
    for (int i = 0; i < MemLen; i++) {
        res.pMem[i] = pMem[i] | bf.pMem[i];
    }
    return res;
}

TBitField TBitField::operator&(const TBitField &bf) // операция "и"
{
    /*if (this->BitLen != bf.BitLen) {
        throw std::invalid_argument("Exception And");
    }*/
    TBitField res(std::max(bf.BitLen, BitLen));
    for (int i = 0; i < MemLen; i++) {
        res.pMem[i] = pMem[i] & bf.pMem[i];
    }
    return res;
}

TBitField TBitField::operator~(void) // отрицание
{
    TBitField res(BitLen);
    for (int i = 0; i < MemLen - 1; i++) {
        res.pMem[i] = ~(pMem[i]);
    }
    res.pMem[MemLen - 1] = ~(pMem[MemLen - 1]);
    int j = BitLen & ((1 << 5) - 1);
    if (j > 0) {
        res.pMem[MemLen - 1] &= ((1 << j) - 1);

    }
    return res;
}

// ввод/вывод

istream &operator>>(istream &istr, TBitField &bf) // ввод
{
    int g;
    for (int i = 0; i < bf.GetLength(); i++) {
        istr >> g;
        if (g == 1) {
            bf.SetBit(i);
        }
    }
    return istr;
}

ostream &operator<<(ostream &ostr, const TBitField &bf) // вывод
{
    
    for(int i = 0; i<bf.GetLength(); i++){
        ostr << bf.GetBit(i);
    }
    return ostr;
}
