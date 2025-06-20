#include<iostream>
#include "tinyxml2.h"

using namespace std;
using namespace tinyxml2;

int main()
{
  XMLDocument doc;
  XMLError result = doc.LoadFile("example.xml");

  if(result != XML_SUCCESS)
  {
    std::cerr << "Error in loading file\n";
    return -1;
  }

  auto p_root =  doc.RootElement();
  if(p_root)
  {
    const char* value = p_root->Attribute("version");
    if(value)
    {
      std::cout << "Version: " << value << std::endl;
    }
    
    auto p_child = p_root->FirstChildElement("setting");
    if(p_child)
    {
      const char* value2 = p_child->Attribute("value");
      if(value2)
      {
        cout << "setting value " << value2 << endl;
      }
    }
  }

  return 0;
}