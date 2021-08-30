#ifndef HTMLWRITER_H
#define HTMLWRITER_H

#include "DocWriter.h"

class HTMLWriter : public DocWriter
{
public:
	HTMLWriter();
	HTMLWriter(const string& fileName, const string& content);
	~HTMLWriter();

	// 텍스트 파일로 저장시킨다.
	void Write();

	// 폰트를 지정한다.
	void SetFont(const string& fontName, int fontSize, const string& fontColor);

protected:
	string _fontName;
	int _fontSize;
	string _fontColor;
};

#endif