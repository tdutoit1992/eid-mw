#ifndef EID_VWR_CONVERTOR_H
#define EID_VWR_CONVERTOR_H

#include <conversions.h>
#include <map>
#include <string>

class ConversionWorker;
class XmlConversionWorker;

class Convertor {
private:
	static std::map<std::string, ConversionWorker*> convertors;
	static std::map<std::string, XmlConversionWorker*> to_xml;
	static std::map<std::string, XmlConversionWorker*> from_xml;
public:
	Convertor();
	const char* convert(const char* label, const char* normal);
	const char* convert_to_xml(const char* label, const char* normal);
	void* convert_from_xml(const char* name, const char* value, int* len_return);
	int can_convert(const char* label);
};

#endif
