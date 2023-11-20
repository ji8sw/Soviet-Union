#include <Windows.h>
#include <iostream>
#include "vector"

std::wstring ToWideString(std::string Input) { // https://github.com/ji8sw/JSimple
    std::vector<wchar_t> buf(Input.size());
    std::use_facet<std::ctype<wchar_t>>(std::locale()).widen(Input.data(),
        Input.data() + Input.size(),
        buf.data());
    return std::wstring(buf.data(), buf.size());
}

int main(int argc, char* argv[])
{   
    std::wstring Title = std::wstring(ToWideString("Soviet Virus"));
    LPCWSTR WideTitle = Title.c_str();

    std::wstring Description = std::wstring(ToWideString("Hallo usar, it is tiem to brang back the sovat yoonyon, press ok to brang back the svoat yoonyon."));
    LPCWSTR WideDescription = Description.c_str();

    MessageBox(NULL, WideDescription, WideTitle, MB_OK | MB_ICONINFORMATION);

    while (true)
    {
        long long* ptr = new long long;

        continue;
    }
}