
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_PortableServer_POAPackage_WrongPolicy__
#define __org_omg_PortableServer_POAPackage_WrongPolicy__

#pragma interface

#include <org/omg/CORBA/UserException.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace PortableServer
      {
        namespace POAPackage
        {
            class WrongPolicy;
        }
      }
    }
  }
}

class org::omg::PortableServer::POAPackage::WrongPolicy : public ::org::omg::CORBA::UserException
{

public:
  WrongPolicy();
  WrongPolicy(::java::lang::String *);
private:
  static const jlong serialVersionUID = 1949765652955335195LL;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_PortableServer_POAPackage_WrongPolicy__