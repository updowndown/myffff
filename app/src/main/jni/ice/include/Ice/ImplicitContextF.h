// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `ImplicitContextF.ice'

#ifndef __Ice_ImplicitContextF_h__
#define __Ice_ImplicitContextF_h__

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

class ImplicitContext;
ICE_API bool operator==(const ImplicitContext&, const ImplicitContext&);
ICE_API bool operator!=(const ImplicitContext&, const ImplicitContext&);
ICE_API bool operator<(const ImplicitContext&, const ImplicitContext&);
ICE_API bool operator<=(const ImplicitContext&, const ImplicitContext&);
ICE_API bool operator>(const ImplicitContext&, const ImplicitContext&);
ICE_API bool operator>=(const ImplicitContext&, const ImplicitContext&);

}

namespace IceInternal
{

ICE_API void incRef(::Ice::ImplicitContext*);
ICE_API void decRef(::Ice::ImplicitContext*);

}

namespace Ice
{

typedef ::IceInternal::Handle< ::Ice::ImplicitContext> ImplicitContextPtr;

}

namespace Ice
{

}

#endif
