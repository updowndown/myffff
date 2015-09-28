// **********************************************************************
//
// Copyright (c) 2003-2007 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.2.1
// Generated from file `Stats.ice'

#include <Ice/Stats.h>
#include <IceUtil/Iterator.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/DisableWarnings.h>

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

static const ::std::string __Ice__Stats__bytesSent_name = "bytesSent";

static const ::std::string __Ice__Stats__bytesReceived_name = "bytesReceived";

void
IceInternal::incRef(::Ice::Stats* p)
{
    p->__incRef();
}

void
IceInternal::decRef(::Ice::Stats* p)
{
    p->__decRef();
}

bool
Ice::operator==(const ::Ice::Stats& l, const ::Ice::Stats& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) == static_cast<const ::Ice::LocalObject&>(r);
}

bool
Ice::operator!=(const ::Ice::Stats& l, const ::Ice::Stats& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) != static_cast<const ::Ice::LocalObject&>(r);
}

bool
Ice::operator<(const ::Ice::Stats& l, const ::Ice::Stats& r)
{
    return static_cast<const ::Ice::LocalObject&>(l) < static_cast<const ::Ice::LocalObject&>(r);
}

bool
Ice::operator<=(const ::Ice::Stats& l, const ::Ice::Stats& r)
{
    return l < r || l == r;
}

bool
Ice::operator>(const ::Ice::Stats& l, const ::Ice::Stats& r)
{
    return !(l < r) && !(l == r);
}

bool
Ice::operator>=(const ::Ice::Stats& l, const ::Ice::Stats& r)
{
    return !(l < r);
}