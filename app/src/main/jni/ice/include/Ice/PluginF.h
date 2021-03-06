// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `PluginF.ice'

#ifndef __Ice_PluginF_h__
#define __Ice_PluginF_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 302
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

#ifndef ICE_API
#   ifdef ICE_API_EXPORTS
#       define ICE_API ICE_DECLSPEC_EXPORT
#   else
#       define ICE_API ICE_DECLSPEC_IMPORT
#   endif
#endif

namespace Ice
{

class Plugin;
ICE_API bool operator==(const Plugin&, const Plugin&);
ICE_API bool operator!=(const Plugin&, const Plugin&);
ICE_API bool operator<(const Plugin&, const Plugin&);
ICE_API bool operator<=(const Plugin&, const Plugin&);
ICE_API bool operator>(const Plugin&, const Plugin&);
ICE_API bool operator>=(const Plugin&, const Plugin&);

class PluginManager;
ICE_API bool operator==(const PluginManager&, const PluginManager&);
ICE_API bool operator!=(const PluginManager&, const PluginManager&);
ICE_API bool operator<(const PluginManager&, const PluginManager&);
ICE_API bool operator<=(const PluginManager&, const PluginManager&);
ICE_API bool operator>(const PluginManager&, const PluginManager&);
ICE_API bool operator>=(const PluginManager&, const PluginManager&);

}

namespace IceInternal
{

ICE_API void incRef(::Ice::Plugin*);
ICE_API void decRef(::Ice::Plugin*);

ICE_API void incRef(::Ice::PluginManager*);
ICE_API void decRef(::Ice::PluginManager*);

}

namespace Ice
{

typedef ::IceInternal::Handle< ::Ice::Plugin> PluginPtr;

typedef ::IceInternal::Handle< ::Ice::PluginManager> PluginManagerPtr;

}

namespace Ice
{

}

#endif
