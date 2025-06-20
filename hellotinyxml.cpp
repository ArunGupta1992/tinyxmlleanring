#include<iostream>
#include "tinyxml2.h"

using namespace std;
using namespace tinyxml2;

int main()
{
  XMLDocument doc;
  doc.Parse("<root><name>Hello XML</name></root>");
  auto p_root = doc.FirstChildElement("root");
  cout << p_root->Name() << endl;

  auto p_name = p_root->FirstChildElement("name");
  cout << p_name->GetText() << endl;
  return 0;
}