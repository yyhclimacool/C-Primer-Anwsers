#ifndef _SALES_DATA_HPP_
#define _SALES_DATA_HPP_

#include <iostream>
#include <string>

using namespace std;

class Sales_data{
	public:
		/*
		 * Ĭ�������thisָ�������Ϊ��Sales_data * const
		 * �����������������Ͳ��ܱ�����const���ԵĶ��������
		 * const����˺����������
		 */
		string isbn() const { return bookNo;}
		Sales_data &combine(const Sales_data &rhs);
		double avg_price() const;
	private:
		string bookNo;
		unsigned units_sold = 0;
		double revenue = 0.0;
};

Sales_data add(const Sales_data &, const Sales_data &);
ostream &print(ostream &, const Sales_data &);
istream &input(istream &, Sales_data &);

#endif