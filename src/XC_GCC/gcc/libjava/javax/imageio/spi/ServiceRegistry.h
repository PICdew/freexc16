
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_imageio_spi_ServiceRegistry__
#define __javax_imageio_spi_ServiceRegistry__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace imageio
    {
      namespace spi
      {
          class ServiceRegistry;
          class ServiceRegistry$Filter;
      }
    }
  }
}

class javax::imageio::spi::ServiceRegistry : public ::java::lang::Object
{

public:
  ServiceRegistry(::java::util::Iterator *);
  static ::java::util::Iterator * lookupProviders(::java::lang::Class *, ::java::lang::ClassLoader *);
  static ::java::util::Iterator * lookupProviders(::java::lang::Class *);
  virtual ::java::util::Iterator * getCategories();
private:
  jboolean registerServiceProvider(::java::lang::Object *, jint);
public:
  virtual jboolean registerServiceProvider(::java::lang::Object *, ::java::lang::Class *);
  virtual void registerServiceProvider(::java::lang::Object *);
  virtual void registerServiceProviders(::java::util::Iterator *);
private:
  jboolean deregisterServiceProvider(::java::lang::Object *, jint);
public:
  virtual jboolean deregisterServiceProvider(::java::lang::Object *, ::java::lang::Class *);
  virtual void deregisterServiceProvider(::java::lang::Object *);
  virtual void deregisterAll(::java::lang::Class *);
  virtual void deregisterAll();
  virtual void finalize();
  virtual jboolean contains(::java::lang::Object *);
private:
  jint getCategoryID(::java::lang::Class *);
public:
  virtual ::java::util::Iterator * getServiceProviders(::java::lang::Class *, jboolean);
  virtual ::java::util::Iterator * getServiceProviders(::java::lang::Class *, ::javax::imageio::spi::ServiceRegistry$Filter *, jboolean);
  virtual ::java::lang::Object * getServiceProviderByClass(::java::lang::Class *);
  virtual jboolean setOrdering(::java::lang::Class *, ::java::lang::Object *, ::java::lang::Object *);
  virtual jboolean unsetOrdering(::java::lang::Class *, ::java::lang::Object *, ::java::lang::Object *);
private:
  jboolean addConstraint(jint, ::java::lang::Object *, ::java::lang::Object *);
  jboolean removeConstraint(jint, ::java::lang::Object *, ::java::lang::Object *);
public: // actually package-private
  JArray< ::java::lang::Class * > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) categories;
private:
  JArray< ::java::util::LinkedList * > * providers;
  JArray< ::java::util::IdentityHashMap * > * constraints;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_imageio_spi_ServiceRegistry__
