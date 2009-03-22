//
// Generated file, do not edit! Created by opp_msgc 4.0 from Messages.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Messages_m.h"

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




Register_Class(NlmeMsg);

NlmeMsg::NlmeMsg(const char *name, int kind) : cMessage(name,kind)
{
}

NlmeMsg::NlmeMsg(const NlmeMsg& other) : cMessage()
{
    setName(other.getName());
    operator=(other);
}

NlmeMsg::~NlmeMsg()
{
}

NlmeMsg& NlmeMsg::operator=(const NlmeMsg& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    return *this;
}

void NlmeMsg::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
}

void NlmeMsg::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
}

class NlmeMsgDescriptor : public cClassDescriptor
{
  public:
    NlmeMsgDescriptor();
    virtual ~NlmeMsgDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(NlmeMsgDescriptor);

NlmeMsgDescriptor::NlmeMsgDescriptor() : cClassDescriptor("NlmeMsg", "cMessage")
{
}

NlmeMsgDescriptor::~NlmeMsgDescriptor()
{
}

bool NlmeMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NlmeMsg *>(obj)!=NULL;
}

const char *NlmeMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NlmeMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int NlmeMsgDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *NlmeMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *NlmeMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *NlmeMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int NlmeMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NlmeMsg *pp = (NlmeMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool NlmeMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    NlmeMsg *pp = (NlmeMsg *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool NlmeMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NlmeMsg *pp = (NlmeMsg *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *NlmeMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *NlmeMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NlmeMsg *pp = (NlmeMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(NlmeNetworkFormation_request);

NlmeNetworkFormation_request::NlmeNetworkFormation_request(const char *name, int kind) : NlmeMsg(name,kind)
{
    this->ScanChannels_var = 0;
    this->ScanDuration_var = 0;
    this->BeaconOrder_var = 0;
    this->SuperframeOrder_var = 0;
    this->PANId_var = 0;
    this->BatteryLifeExtension_var = 0;
}

NlmeNetworkFormation_request::NlmeNetworkFormation_request(const NlmeNetworkFormation_request& other) : NlmeMsg()
{
    setName(other.getName());
    operator=(other);
}

NlmeNetworkFormation_request::~NlmeNetworkFormation_request()
{
}

NlmeNetworkFormation_request& NlmeNetworkFormation_request::operator=(const NlmeNetworkFormation_request& other)
{
    if (this==&other) return *this;
    NlmeMsg::operator=(other);
    this->ScanChannels_var = other.ScanChannels_var;
    this->ScanDuration_var = other.ScanDuration_var;
    this->BeaconOrder_var = other.BeaconOrder_var;
    this->SuperframeOrder_var = other.SuperframeOrder_var;
    this->PANId_var = other.PANId_var;
    this->BatteryLifeExtension_var = other.BatteryLifeExtension_var;
    return *this;
}

void NlmeNetworkFormation_request::parsimPack(cCommBuffer *b)
{
    NlmeMsg::parsimPack(b);
    doPacking(b,this->ScanChannels_var);
    doPacking(b,this->ScanDuration_var);
    doPacking(b,this->BeaconOrder_var);
    doPacking(b,this->SuperframeOrder_var);
    doPacking(b,this->PANId_var);
    doPacking(b,this->BatteryLifeExtension_var);
}

void NlmeNetworkFormation_request::parsimUnpack(cCommBuffer *b)
{
    NlmeMsg::parsimUnpack(b);
    doUnpacking(b,this->ScanChannels_var);
    doUnpacking(b,this->ScanDuration_var);
    doUnpacking(b,this->BeaconOrder_var);
    doUnpacking(b,this->SuperframeOrder_var);
    doUnpacking(b,this->PANId_var);
    doUnpacking(b,this->BatteryLifeExtension_var);
}

unsigned int NlmeNetworkFormation_request::getScanChannels() const
{
    return ScanChannels_var;
}

void NlmeNetworkFormation_request::setScanChannels(unsigned int ScanChannels_var)
{
    this->ScanChannels_var = ScanChannels_var;
}

unsigned char NlmeNetworkFormation_request::getScanDuration() const
{
    return ScanDuration_var;
}

void NlmeNetworkFormation_request::setScanDuration(unsigned char ScanDuration_var)
{
    this->ScanDuration_var = ScanDuration_var;
}

unsigned char NlmeNetworkFormation_request::getBeaconOrder() const
{
    return BeaconOrder_var;
}

void NlmeNetworkFormation_request::setBeaconOrder(unsigned char BeaconOrder_var)
{
    this->BeaconOrder_var = BeaconOrder_var;
}

unsigned char NlmeNetworkFormation_request::getSuperframeOrder() const
{
    return SuperframeOrder_var;
}

void NlmeNetworkFormation_request::setSuperframeOrder(unsigned char SuperframeOrder_var)
{
    this->SuperframeOrder_var = SuperframeOrder_var;
}

unsigned short NlmeNetworkFormation_request::getPANId() const
{
    return PANId_var;
}

void NlmeNetworkFormation_request::setPANId(unsigned short PANId_var)
{
    this->PANId_var = PANId_var;
}

unsigned char NlmeNetworkFormation_request::getBatteryLifeExtension() const
{
    return BatteryLifeExtension_var;
}

void NlmeNetworkFormation_request::setBatteryLifeExtension(unsigned char BatteryLifeExtension_var)
{
    this->BatteryLifeExtension_var = BatteryLifeExtension_var;
}

class NlmeNetworkFormation_requestDescriptor : public cClassDescriptor
{
  public:
    NlmeNetworkFormation_requestDescriptor();
    virtual ~NlmeNetworkFormation_requestDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(NlmeNetworkFormation_requestDescriptor);

NlmeNetworkFormation_requestDescriptor::NlmeNetworkFormation_requestDescriptor() : cClassDescriptor("NlmeNetworkFormation_request", "NlmeMsg")
{
}

NlmeNetworkFormation_requestDescriptor::~NlmeNetworkFormation_requestDescriptor()
{
}

bool NlmeNetworkFormation_requestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NlmeNetworkFormation_request *>(obj)!=NULL;
}

const char *NlmeNetworkFormation_requestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NlmeNetworkFormation_requestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int NlmeNetworkFormation_requestDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISEDITABLE;
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *NlmeNetworkFormation_requestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "ScanChannels";
        case 1: return "ScanDuration";
        case 2: return "BeaconOrder";
        case 3: return "SuperframeOrder";
        case 4: return "PANId";
        case 5: return "BatteryLifeExtension";
        default: return NULL;
    }
}

const char *NlmeNetworkFormation_requestDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned int";
        case 1: return "unsigned char";
        case 2: return "unsigned char";
        case 3: return "unsigned char";
        case 4: return "unsigned short";
        case 5: return "unsigned char";
        default: return NULL;
    }
}

const char *NlmeNetworkFormation_requestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int NlmeNetworkFormation_requestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NlmeNetworkFormation_request *pp = (NlmeNetworkFormation_request *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool NlmeNetworkFormation_requestDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    NlmeNetworkFormation_request *pp = (NlmeNetworkFormation_request *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->getScanChannels(),resultbuf,bufsize); return true;
        case 1: ulong2string(pp->getScanDuration(),resultbuf,bufsize); return true;
        case 2: ulong2string(pp->getBeaconOrder(),resultbuf,bufsize); return true;
        case 3: ulong2string(pp->getSuperframeOrder(),resultbuf,bufsize); return true;
        case 4: ulong2string(pp->getPANId(),resultbuf,bufsize); return true;
        case 5: ulong2string(pp->getBatteryLifeExtension(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool NlmeNetworkFormation_requestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NlmeNetworkFormation_request *pp = (NlmeNetworkFormation_request *)object; (void)pp;
    switch (field) {
        case 0: pp->setScanChannels(string2ulong(value)); return true;
        case 1: pp->setScanDuration(string2ulong(value)); return true;
        case 2: pp->setBeaconOrder(string2ulong(value)); return true;
        case 3: pp->setSuperframeOrder(string2ulong(value)); return true;
        case 4: pp->setPANId(string2ulong(value)); return true;
        case 5: pp->setBatteryLifeExtension(string2ulong(value)); return true;
        default: return false;
    }
}

const char *NlmeNetworkFormation_requestDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *NlmeNetworkFormation_requestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NlmeNetworkFormation_request *pp = (NlmeNetworkFormation_request *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(NlmeNetworkFormation_confirm);

NlmeNetworkFormation_confirm::NlmeNetworkFormation_confirm(const char *name, int kind) : NlmeMsg(name,kind)
{
}

NlmeNetworkFormation_confirm::NlmeNetworkFormation_confirm(const NlmeNetworkFormation_confirm& other) : NlmeMsg()
{
    setName(other.getName());
    operator=(other);
}

NlmeNetworkFormation_confirm::~NlmeNetworkFormation_confirm()
{
}

NlmeNetworkFormation_confirm& NlmeNetworkFormation_confirm::operator=(const NlmeNetworkFormation_confirm& other)
{
    if (this==&other) return *this;
    NlmeMsg::operator=(other);
    return *this;
}

void NlmeNetworkFormation_confirm::parsimPack(cCommBuffer *b)
{
    NlmeMsg::parsimPack(b);
}

void NlmeNetworkFormation_confirm::parsimUnpack(cCommBuffer *b)
{
    NlmeMsg::parsimUnpack(b);
}

class NlmeNetworkFormation_confirmDescriptor : public cClassDescriptor
{
  public:
    NlmeNetworkFormation_confirmDescriptor();
    virtual ~NlmeNetworkFormation_confirmDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(NlmeNetworkFormation_confirmDescriptor);

NlmeNetworkFormation_confirmDescriptor::NlmeNetworkFormation_confirmDescriptor() : cClassDescriptor("NlmeNetworkFormation_confirm", "NlmeMsg")
{
}

NlmeNetworkFormation_confirmDescriptor::~NlmeNetworkFormation_confirmDescriptor()
{
}

bool NlmeNetworkFormation_confirmDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NlmeNetworkFormation_confirm *>(obj)!=NULL;
}

const char *NlmeNetworkFormation_confirmDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NlmeNetworkFormation_confirmDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int NlmeNetworkFormation_confirmDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *NlmeNetworkFormation_confirmDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *NlmeNetworkFormation_confirmDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *NlmeNetworkFormation_confirmDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int NlmeNetworkFormation_confirmDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NlmeNetworkFormation_confirm *pp = (NlmeNetworkFormation_confirm *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool NlmeNetworkFormation_confirmDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    NlmeNetworkFormation_confirm *pp = (NlmeNetworkFormation_confirm *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool NlmeNetworkFormation_confirmDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NlmeNetworkFormation_confirm *pp = (NlmeNetworkFormation_confirm *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *NlmeNetworkFormation_confirmDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *NlmeNetworkFormation_confirmDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NlmeNetworkFormation_confirm *pp = (NlmeNetworkFormation_confirm *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(NldeMsg);

NldeMsg::NldeMsg(const char *name, int kind) : cMessage(name,kind)
{
}

NldeMsg::NldeMsg(const NldeMsg& other) : cMessage()
{
    setName(other.getName());
    operator=(other);
}

NldeMsg::~NldeMsg()
{
}

NldeMsg& NldeMsg::operator=(const NldeMsg& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    return *this;
}

void NldeMsg::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
}

void NldeMsg::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
}

class NldeMsgDescriptor : public cClassDescriptor
{
  public:
    NldeMsgDescriptor();
    virtual ~NldeMsgDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(NldeMsgDescriptor);

NldeMsgDescriptor::NldeMsgDescriptor() : cClassDescriptor("NldeMsg", "cMessage")
{
}

NldeMsgDescriptor::~NldeMsgDescriptor()
{
}

bool NldeMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NldeMsg *>(obj)!=NULL;
}

const char *NldeMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NldeMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int NldeMsgDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *NldeMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *NldeMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *NldeMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int NldeMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NldeMsg *pp = (NldeMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool NldeMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    NldeMsg *pp = (NldeMsg *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool NldeMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NldeMsg *pp = (NldeMsg *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *NldeMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *NldeMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NldeMsg *pp = (NldeMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(MlmeMsg);

MlmeMsg::MlmeMsg(const char *name, int kind) : cMessage(name,kind)
{
}

MlmeMsg::MlmeMsg(const MlmeMsg& other) : cMessage()
{
    setName(other.getName());
    operator=(other);
}

MlmeMsg::~MlmeMsg()
{
}

MlmeMsg& MlmeMsg::operator=(const MlmeMsg& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    return *this;
}

void MlmeMsg::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
}

void MlmeMsg::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
}

class MlmeMsgDescriptor : public cClassDescriptor
{
  public:
    MlmeMsgDescriptor();
    virtual ~MlmeMsgDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(MlmeMsgDescriptor);

MlmeMsgDescriptor::MlmeMsgDescriptor() : cClassDescriptor("MlmeMsg", "cMessage")
{
}

MlmeMsgDescriptor::~MlmeMsgDescriptor()
{
}

bool MlmeMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MlmeMsg *>(obj)!=NULL;
}

const char *MlmeMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MlmeMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int MlmeMsgDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *MlmeMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *MlmeMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *MlmeMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int MlmeMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MlmeMsg *pp = (MlmeMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool MlmeMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    MlmeMsg *pp = (MlmeMsg *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool MlmeMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MlmeMsg *pp = (MlmeMsg *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *MlmeMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *MlmeMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MlmeMsg *pp = (MlmeMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

PANDescriptor::PANDescriptor()
{
    coordAddrMode = 0;
    coordPANId = 0;
    coordAddress = 0;
    logicalChannel = 0;
    channelPage = 0;
    superframeSpec = 0;
    GTSPermit = 0;
    linkQuality = 0;
    timeStamp = 0;
    securityFailure = 0;
    securityLevel = 0;
    keyIdMode = 0;
    for (unsigned int i=0; i<8; i++)
        keySource[i] = 0;
    kedyIndex = 0;
}

void doPacking(cCommBuffer *b, PANDescriptor& a)
{
    doPacking(b,a.coordAddrMode);
    doPacking(b,a.coordPANId);
    doPacking(b,a.coordAddress);
    doPacking(b,a.logicalChannel);
    doPacking(b,a.channelPage);
    doPacking(b,a.superframeSpec);
    doPacking(b,a.GTSPermit);
    doPacking(b,a.linkQuality);
    doPacking(b,a.timeStamp);
    doPacking(b,a.securityFailure);
    doPacking(b,a.securityLevel);
    doPacking(b,a.keyIdMode);
    doPacking(b,a.keySource,8);
    doPacking(b,a.kedyIndex);
}

void doUnpacking(cCommBuffer *b, PANDescriptor& a)
{
    doUnpacking(b,a.coordAddrMode);
    doUnpacking(b,a.coordPANId);
    doUnpacking(b,a.coordAddress);
    doUnpacking(b,a.logicalChannel);
    doUnpacking(b,a.channelPage);
    doUnpacking(b,a.superframeSpec);
    doUnpacking(b,a.GTSPermit);
    doUnpacking(b,a.linkQuality);
    doUnpacking(b,a.timeStamp);
    doUnpacking(b,a.securityFailure);
    doUnpacking(b,a.securityLevel);
    doUnpacking(b,a.keyIdMode);
    doUnpacking(b,a.keySource,8);
    doUnpacking(b,a.kedyIndex);
}

class PANDescriptorDescriptor : public cClassDescriptor
{
  public:
    PANDescriptorDescriptor();
    virtual ~PANDescriptorDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PANDescriptorDescriptor);

PANDescriptorDescriptor::PANDescriptorDescriptor() : cClassDescriptor("PANDescriptor", "")
{
}

PANDescriptorDescriptor::~PANDescriptorDescriptor()
{
}

bool PANDescriptorDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PANDescriptor *>(obj)!=NULL;
}

const char *PANDescriptorDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PANDescriptorDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 14+basedesc->getFieldCount(object) : 14;
}

unsigned int PANDescriptorDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISEDITABLE;
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISEDITABLE;
        case 6: return FD_ISEDITABLE;
        case 7: return FD_ISEDITABLE;
        case 8: return FD_ISEDITABLE;
        case 9: return FD_ISEDITABLE;
        case 10: return FD_ISEDITABLE;
        case 11: return FD_ISEDITABLE;
        case 12: return FD_ISARRAY | FD_ISEDITABLE;
        case 13: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *PANDescriptorDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "coordAddrMode";
        case 1: return "coordPANId";
        case 2: return "coordAddress";
        case 3: return "logicalChannel";
        case 4: return "channelPage";
        case 5: return "superframeSpec";
        case 6: return "GTSPermit";
        case 7: return "linkQuality";
        case 8: return "timeStamp";
        case 9: return "securityFailure";
        case 10: return "securityLevel";
        case 11: return "keyIdMode";
        case 12: return "keySource";
        case 13: return "kedyIndex";
        default: return NULL;
    }
}

const char *PANDescriptorDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned char";
        case 1: return "unsigned short";
        case 2: return "unsigned long";
        case 3: return "unsigned char";
        case 4: return "unsigned char";
        case 5: return "unsigned short";
        case 6: return "bool";
        case 7: return "unsigned char";
        case 8: return "unsigned int";
        case 9: return "unsigned char";
        case 10: return "unsigned char";
        case 11: return "unsigned char";
        case 12: return "unsigned char";
        case 13: return "unsigned char";
        default: return NULL;
    }
}

const char *PANDescriptorDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int PANDescriptorDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PANDescriptor *pp = (PANDescriptor *)object; (void)pp;
    switch (field) {
        case 12: return 8;
        default: return 0;
    }
}

bool PANDescriptorDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    PANDescriptor *pp = (PANDescriptor *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->coordAddrMode,resultbuf,bufsize); return true;
        case 1: ulong2string(pp->coordPANId,resultbuf,bufsize); return true;
        case 2: ulong2string(pp->coordAddress,resultbuf,bufsize); return true;
        case 3: ulong2string(pp->logicalChannel,resultbuf,bufsize); return true;
        case 4: ulong2string(pp->channelPage,resultbuf,bufsize); return true;
        case 5: ulong2string(pp->superframeSpec,resultbuf,bufsize); return true;
        case 6: bool2string(pp->GTSPermit,resultbuf,bufsize); return true;
        case 7: ulong2string(pp->linkQuality,resultbuf,bufsize); return true;
        case 8: ulong2string(pp->timeStamp,resultbuf,bufsize); return true;
        case 9: ulong2string(pp->securityFailure,resultbuf,bufsize); return true;
        case 10: ulong2string(pp->securityLevel,resultbuf,bufsize); return true;
        case 11: ulong2string(pp->keyIdMode,resultbuf,bufsize); return true;
        case 12: if (i>=8) return false;
                ulong2string(pp->keySource[i],resultbuf,bufsize); return true;
        case 13: ulong2string(pp->kedyIndex,resultbuf,bufsize); return true;
        default: return false;
    }
}

bool PANDescriptorDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PANDescriptor *pp = (PANDescriptor *)object; (void)pp;
    switch (field) {
        case 0: pp->coordAddrMode = string2ulong(value); return true;
        case 1: pp->coordPANId = string2ulong(value); return true;
        case 2: pp->coordAddress = string2ulong(value); return true;
        case 3: pp->logicalChannel = string2ulong(value); return true;
        case 4: pp->channelPage = string2ulong(value); return true;
        case 5: pp->superframeSpec = string2ulong(value); return true;
        case 6: pp->GTSPermit = string2bool(value); return true;
        case 7: pp->linkQuality = string2ulong(value); return true;
        case 8: pp->timeStamp = string2ulong(value); return true;
        case 9: pp->securityFailure = string2ulong(value); return true;
        case 10: pp->securityLevel = string2ulong(value); return true;
        case 11: pp->keyIdMode = string2ulong(value); return true;
        case 12: if (i>=8) return false;
                pp->keySource[i] = string2ulong(value); return true;
        case 13: pp->kedyIndex = string2ulong(value); return true;
        default: return false;
    }
}

const char *PANDescriptorDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *PANDescriptorDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PANDescriptor *pp = (PANDescriptor *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(MlmeScan_request);

MlmeScan_request::MlmeScan_request(const char *name, int kind) : MlmeMsg(name,kind)
{
    this->scanType_var = 0;
    this->scanChannels_var = 0;
    this->scanDuration_var = 0;
    this->channelPage_var = 0;
    this->securityLevel_var = 0;
    this->keyIdMode_var = 0;
    keySource_arraysize = 0;
    this->keySource_var = 0;
    this->kedyIndex_var = 0;
}

MlmeScan_request::MlmeScan_request(const MlmeScan_request& other) : MlmeMsg()
{
    setName(other.getName());
    keySource_arraysize = 0;
    this->keySource_var = 0;
    operator=(other);
}

MlmeScan_request::~MlmeScan_request()
{
    delete [] keySource_var;
}

MlmeScan_request& MlmeScan_request::operator=(const MlmeScan_request& other)
{
    if (this==&other) return *this;
    MlmeMsg::operator=(other);
    this->scanType_var = other.scanType_var;
    this->scanChannels_var = other.scanChannels_var;
    this->scanDuration_var = other.scanDuration_var;
    this->channelPage_var = other.channelPage_var;
    this->securityLevel_var = other.securityLevel_var;
    this->keyIdMode_var = other.keyIdMode_var;
    delete [] this->keySource_var;
    this->keySource_var = (other.keySource_arraysize==0) ? NULL : new unsigned char[other.keySource_arraysize];
    keySource_arraysize = other.keySource_arraysize;
    for (unsigned int i=0; i<keySource_arraysize; i++)
        this->keySource_var[i] = other.keySource_var[i];
    this->kedyIndex_var = other.kedyIndex_var;
    return *this;
}

void MlmeScan_request::parsimPack(cCommBuffer *b)
{
    MlmeMsg::parsimPack(b);
    doPacking(b,this->scanType_var);
    doPacking(b,this->scanChannels_var);
    doPacking(b,this->scanDuration_var);
    doPacking(b,this->channelPage_var);
    doPacking(b,this->securityLevel_var);
    doPacking(b,this->keyIdMode_var);
    b->pack(keySource_arraysize);
    doPacking(b,this->keySource_var,keySource_arraysize);
    doPacking(b,this->kedyIndex_var);
}

void MlmeScan_request::parsimUnpack(cCommBuffer *b)
{
    MlmeMsg::parsimUnpack(b);
    doUnpacking(b,this->scanType_var);
    doUnpacking(b,this->scanChannels_var);
    doUnpacking(b,this->scanDuration_var);
    doUnpacking(b,this->channelPage_var);
    doUnpacking(b,this->securityLevel_var);
    doUnpacking(b,this->keyIdMode_var);
    delete [] this->keySource_var;
    b->unpack(keySource_arraysize);
    if (keySource_arraysize==0) {
        this->keySource_var = 0;
    } else {
        this->keySource_var = new unsigned char[keySource_arraysize];
        doUnpacking(b,this->keySource_var,keySource_arraysize);
    }
    doUnpacking(b,this->kedyIndex_var);
}

unsigned char MlmeScan_request::getScanType() const
{
    return scanType_var;
}

void MlmeScan_request::setScanType(unsigned char scanType_var)
{
    this->scanType_var = scanType_var;
}

unsigned int MlmeScan_request::getScanChannels() const
{
    return scanChannels_var;
}

void MlmeScan_request::setScanChannels(unsigned int scanChannels_var)
{
    this->scanChannels_var = scanChannels_var;
}

unsigned char MlmeScan_request::getScanDuration() const
{
    return scanDuration_var;
}

void MlmeScan_request::setScanDuration(unsigned char scanDuration_var)
{
    this->scanDuration_var = scanDuration_var;
}

unsigned char MlmeScan_request::getChannelPage() const
{
    return channelPage_var;
}

void MlmeScan_request::setChannelPage(unsigned char channelPage_var)
{
    this->channelPage_var = channelPage_var;
}

unsigned char MlmeScan_request::getSecurityLevel() const
{
    return securityLevel_var;
}

void MlmeScan_request::setSecurityLevel(unsigned char securityLevel_var)
{
    this->securityLevel_var = securityLevel_var;
}

unsigned char MlmeScan_request::getKeyIdMode() const
{
    return keyIdMode_var;
}

void MlmeScan_request::setKeyIdMode(unsigned char keyIdMode_var)
{
    this->keyIdMode_var = keyIdMode_var;
}

void MlmeScan_request::setKeySourceArraySize(unsigned int size)
{
    unsigned char *keySource_var2 = (size==0) ? NULL : new unsigned char[size];
    unsigned int sz = keySource_arraysize < size ? keySource_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        keySource_var2[i] = this->keySource_var[i];
    for (unsigned int i=sz; i<size; i++)
        keySource_var2[i] = 0;
    keySource_arraysize = size;
    delete [] this->keySource_var;
    this->keySource_var = keySource_var2;
}

unsigned int MlmeScan_request::getKeySourceArraySize() const
{
    return keySource_arraysize;
}

unsigned char MlmeScan_request::getKeySource(unsigned int k) const
{
    if (k>=keySource_arraysize) throw cRuntimeError("Array of size %d indexed by %d", keySource_arraysize, k);
    return keySource_var[k];
}

void MlmeScan_request::setKeySource(unsigned int k, unsigned char keySource_var)
{
    if (k>=keySource_arraysize) throw cRuntimeError("Array of size %d indexed by %d", keySource_arraysize, k);
    this->keySource_var[k]=keySource_var;
}

unsigned char MlmeScan_request::getKedyIndex() const
{
    return kedyIndex_var;
}

void MlmeScan_request::setKedyIndex(unsigned char kedyIndex_var)
{
    this->kedyIndex_var = kedyIndex_var;
}

class MlmeScan_requestDescriptor : public cClassDescriptor
{
  public:
    MlmeScan_requestDescriptor();
    virtual ~MlmeScan_requestDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(MlmeScan_requestDescriptor);

MlmeScan_requestDescriptor::MlmeScan_requestDescriptor() : cClassDescriptor("MlmeScan_request", "MlmeMsg")
{
}

MlmeScan_requestDescriptor::~MlmeScan_requestDescriptor()
{
}

bool MlmeScan_requestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MlmeScan_request *>(obj)!=NULL;
}

const char *MlmeScan_requestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MlmeScan_requestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int MlmeScan_requestDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISEDITABLE;
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISEDITABLE;
        case 6: return FD_ISARRAY | FD_ISEDITABLE;
        case 7: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *MlmeScan_requestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "scanType";
        case 1: return "scanChannels";
        case 2: return "scanDuration";
        case 3: return "channelPage";
        case 4: return "securityLevel";
        case 5: return "keyIdMode";
        case 6: return "keySource";
        case 7: return "kedyIndex";
        default: return NULL;
    }
}

const char *MlmeScan_requestDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned char";
        case 1: return "unsigned int";
        case 2: return "unsigned char";
        case 3: return "unsigned char";
        case 4: return "unsigned char";
        case 5: return "unsigned char";
        case 6: return "unsigned char";
        case 7: return "unsigned char";
        default: return NULL;
    }
}

const char *MlmeScan_requestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int MlmeScan_requestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MlmeScan_request *pp = (MlmeScan_request *)object; (void)pp;
    switch (field) {
        case 6: return pp->getKeySourceArraySize();
        default: return 0;
    }
}

bool MlmeScan_requestDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    MlmeScan_request *pp = (MlmeScan_request *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->getScanType(),resultbuf,bufsize); return true;
        case 1: ulong2string(pp->getScanChannels(),resultbuf,bufsize); return true;
        case 2: ulong2string(pp->getScanDuration(),resultbuf,bufsize); return true;
        case 3: ulong2string(pp->getChannelPage(),resultbuf,bufsize); return true;
        case 4: ulong2string(pp->getSecurityLevel(),resultbuf,bufsize); return true;
        case 5: ulong2string(pp->getKeyIdMode(),resultbuf,bufsize); return true;
        case 6: ulong2string(pp->getKeySource(i),resultbuf,bufsize); return true;
        case 7: ulong2string(pp->getKedyIndex(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool MlmeScan_requestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MlmeScan_request *pp = (MlmeScan_request *)object; (void)pp;
    switch (field) {
        case 0: pp->setScanType(string2ulong(value)); return true;
        case 1: pp->setScanChannels(string2ulong(value)); return true;
        case 2: pp->setScanDuration(string2ulong(value)); return true;
        case 3: pp->setChannelPage(string2ulong(value)); return true;
        case 4: pp->setSecurityLevel(string2ulong(value)); return true;
        case 5: pp->setKeyIdMode(string2ulong(value)); return true;
        case 6: pp->setKeySource(i,string2ulong(value)); return true;
        case 7: pp->setKedyIndex(string2ulong(value)); return true;
        default: return false;
    }
}

const char *MlmeScan_requestDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *MlmeScan_requestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MlmeScan_request *pp = (MlmeScan_request *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(MlmeScan_confirm);

MlmeScan_confirm::MlmeScan_confirm(const char *name, int kind) : MlmeMsg(name,kind)
{
    this->status_var = 0;
    this->scanType_var = 0;
    this->channelPage_var = 0;
    this->unscannedChannels_var = 0;
    this->resultListSize_var = 0;
    energyDetectList_arraysize = 0;
    this->energyDetectList_var = 0;
    panDescriptorList_arraysize = 0;
    this->panDescriptorList_var = 0;
}

MlmeScan_confirm::MlmeScan_confirm(const MlmeScan_confirm& other) : MlmeMsg()
{
    setName(other.getName());
    energyDetectList_arraysize = 0;
    this->energyDetectList_var = 0;
    panDescriptorList_arraysize = 0;
    this->panDescriptorList_var = 0;
    operator=(other);
}

MlmeScan_confirm::~MlmeScan_confirm()
{
    delete [] energyDetectList_var;
    delete [] panDescriptorList_var;
}

MlmeScan_confirm& MlmeScan_confirm::operator=(const MlmeScan_confirm& other)
{
    if (this==&other) return *this;
    MlmeMsg::operator=(other);
    this->status_var = other.status_var;
    this->scanType_var = other.scanType_var;
    this->channelPage_var = other.channelPage_var;
    this->unscannedChannels_var = other.unscannedChannels_var;
    this->resultListSize_var = other.resultListSize_var;
    delete [] this->energyDetectList_var;
    this->energyDetectList_var = (other.energyDetectList_arraysize==0) ? NULL : new unsigned char[other.energyDetectList_arraysize];
    energyDetectList_arraysize = other.energyDetectList_arraysize;
    for (unsigned int i=0; i<energyDetectList_arraysize; i++)
        this->energyDetectList_var[i] = other.energyDetectList_var[i];
    delete [] this->panDescriptorList_var;
    this->panDescriptorList_var = (other.panDescriptorList_arraysize==0) ? NULL : new PANDescriptor[other.panDescriptorList_arraysize];
    panDescriptorList_arraysize = other.panDescriptorList_arraysize;
    for (unsigned int i=0; i<panDescriptorList_arraysize; i++)
        this->panDescriptorList_var[i] = other.panDescriptorList_var[i];
    return *this;
}

void MlmeScan_confirm::parsimPack(cCommBuffer *b)
{
    MlmeMsg::parsimPack(b);
    doPacking(b,this->status_var);
    doPacking(b,this->scanType_var);
    doPacking(b,this->channelPage_var);
    doPacking(b,this->unscannedChannels_var);
    doPacking(b,this->resultListSize_var);
    b->pack(energyDetectList_arraysize);
    doPacking(b,this->energyDetectList_var,energyDetectList_arraysize);
    b->pack(panDescriptorList_arraysize);
    doPacking(b,this->panDescriptorList_var,panDescriptorList_arraysize);
}

void MlmeScan_confirm::parsimUnpack(cCommBuffer *b)
{
    MlmeMsg::parsimUnpack(b);
    doUnpacking(b,this->status_var);
    doUnpacking(b,this->scanType_var);
    doUnpacking(b,this->channelPage_var);
    doUnpacking(b,this->unscannedChannels_var);
    doUnpacking(b,this->resultListSize_var);
    delete [] this->energyDetectList_var;
    b->unpack(energyDetectList_arraysize);
    if (energyDetectList_arraysize==0) {
        this->energyDetectList_var = 0;
    } else {
        this->energyDetectList_var = new unsigned char[energyDetectList_arraysize];
        doUnpacking(b,this->energyDetectList_var,energyDetectList_arraysize);
    }
    delete [] this->panDescriptorList_var;
    b->unpack(panDescriptorList_arraysize);
    if (panDescriptorList_arraysize==0) {
        this->panDescriptorList_var = 0;
    } else {
        this->panDescriptorList_var = new PANDescriptor[panDescriptorList_arraysize];
        doUnpacking(b,this->panDescriptorList_var,panDescriptorList_arraysize);
    }
}

unsigned char MlmeScan_confirm::getStatus() const
{
    return status_var;
}

void MlmeScan_confirm::setStatus(unsigned char status_var)
{
    this->status_var = status_var;
}

unsigned char MlmeScan_confirm::getScanType() const
{
    return scanType_var;
}

void MlmeScan_confirm::setScanType(unsigned char scanType_var)
{
    this->scanType_var = scanType_var;
}

unsigned char MlmeScan_confirm::getChannelPage() const
{
    return channelPage_var;
}

void MlmeScan_confirm::setChannelPage(unsigned char channelPage_var)
{
    this->channelPage_var = channelPage_var;
}

unsigned int MlmeScan_confirm::getUnscannedChannels() const
{
    return unscannedChannels_var;
}

void MlmeScan_confirm::setUnscannedChannels(unsigned int unscannedChannels_var)
{
    this->unscannedChannels_var = unscannedChannels_var;
}

unsigned int MlmeScan_confirm::getResultListSize() const
{
    return resultListSize_var;
}

void MlmeScan_confirm::setResultListSize(unsigned int resultListSize_var)
{
    this->resultListSize_var = resultListSize_var;
}

void MlmeScan_confirm::setEnergyDetectListArraySize(unsigned int size)
{
    unsigned char *energyDetectList_var2 = (size==0) ? NULL : new unsigned char[size];
    unsigned int sz = energyDetectList_arraysize < size ? energyDetectList_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        energyDetectList_var2[i] = this->energyDetectList_var[i];
    for (unsigned int i=sz; i<size; i++)
        energyDetectList_var2[i] = 0;
    energyDetectList_arraysize = size;
    delete [] this->energyDetectList_var;
    this->energyDetectList_var = energyDetectList_var2;
}

unsigned int MlmeScan_confirm::getEnergyDetectListArraySize() const
{
    return energyDetectList_arraysize;
}

unsigned char MlmeScan_confirm::getEnergyDetectList(unsigned int k) const
{
    if (k>=energyDetectList_arraysize) throw cRuntimeError("Array of size %d indexed by %d", energyDetectList_arraysize, k);
    return energyDetectList_var[k];
}

void MlmeScan_confirm::setEnergyDetectList(unsigned int k, unsigned char energyDetectList_var)
{
    if (k>=energyDetectList_arraysize) throw cRuntimeError("Array of size %d indexed by %d", energyDetectList_arraysize, k);
    this->energyDetectList_var[k]=energyDetectList_var;
}

void MlmeScan_confirm::setPanDescriptorListArraySize(unsigned int size)
{
    PANDescriptor *panDescriptorList_var2 = (size==0) ? NULL : new PANDescriptor[size];
    unsigned int sz = panDescriptorList_arraysize < size ? panDescriptorList_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        panDescriptorList_var2[i] = this->panDescriptorList_var[i];
    panDescriptorList_arraysize = size;
    delete [] this->panDescriptorList_var;
    this->panDescriptorList_var = panDescriptorList_var2;
}

unsigned int MlmeScan_confirm::getPanDescriptorListArraySize() const
{
    return panDescriptorList_arraysize;
}

PANDescriptor& MlmeScan_confirm::getPanDescriptorList(unsigned int k)
{
    if (k>=panDescriptorList_arraysize) throw cRuntimeError("Array of size %d indexed by %d", panDescriptorList_arraysize, k);
    return panDescriptorList_var[k];
}

void MlmeScan_confirm::setPanDescriptorList(unsigned int k, const PANDescriptor& panDescriptorList_var)
{
    if (k>=panDescriptorList_arraysize) throw cRuntimeError("Array of size %d indexed by %d", panDescriptorList_arraysize, k);
    this->panDescriptorList_var[k]=panDescriptorList_var;
}

class MlmeScan_confirmDescriptor : public cClassDescriptor
{
  public:
    MlmeScan_confirmDescriptor();
    virtual ~MlmeScan_confirmDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(MlmeScan_confirmDescriptor);

MlmeScan_confirmDescriptor::MlmeScan_confirmDescriptor() : cClassDescriptor("MlmeScan_confirm", "MlmeMsg")
{
}

MlmeScan_confirmDescriptor::~MlmeScan_confirmDescriptor()
{
}

bool MlmeScan_confirmDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MlmeScan_confirm *>(obj)!=NULL;
}

const char *MlmeScan_confirmDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MlmeScan_confirmDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int MlmeScan_confirmDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISEDITABLE;
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISARRAY | FD_ISEDITABLE;
        case 6: return FD_ISARRAY | FD_ISCOMPOUND;
        default: return 0;
    }
}

const char *MlmeScan_confirmDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "status";
        case 1: return "scanType";
        case 2: return "channelPage";
        case 3: return "unscannedChannels";
        case 4: return "resultListSize";
        case 5: return "energyDetectList";
        case 6: return "panDescriptorList";
        default: return NULL;
    }
}

const char *MlmeScan_confirmDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned char";
        case 1: return "unsigned char";
        case 2: return "unsigned char";
        case 3: return "unsigned int";
        case 4: return "unsigned int";
        case 5: return "unsigned char";
        case 6: return "PANDescriptor";
        default: return NULL;
    }
}

const char *MlmeScan_confirmDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "MacEnum";
            return NULL;
        default: return NULL;
    }
}

int MlmeScan_confirmDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MlmeScan_confirm *pp = (MlmeScan_confirm *)object; (void)pp;
    switch (field) {
        case 5: return pp->getEnergyDetectListArraySize();
        case 6: return pp->getPanDescriptorListArraySize();
        default: return 0;
    }
}

bool MlmeScan_confirmDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    MlmeScan_confirm *pp = (MlmeScan_confirm *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->getStatus(),resultbuf,bufsize); return true;
        case 1: ulong2string(pp->getScanType(),resultbuf,bufsize); return true;
        case 2: ulong2string(pp->getChannelPage(),resultbuf,bufsize); return true;
        case 3: ulong2string(pp->getUnscannedChannels(),resultbuf,bufsize); return true;
        case 4: ulong2string(pp->getResultListSize(),resultbuf,bufsize); return true;
        case 5: ulong2string(pp->getEnergyDetectList(i),resultbuf,bufsize); return true;
        case 6: {std::stringstream out; out << pp->getPanDescriptorList(i); opp_strprettytrunc(resultbuf,out.str().c_str(),bufsize-1); return true;}
        default: return false;
    }
}

bool MlmeScan_confirmDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MlmeScan_confirm *pp = (MlmeScan_confirm *)object; (void)pp;
    switch (field) {
        case 0: pp->setStatus(string2ulong(value)); return true;
        case 1: pp->setScanType(string2ulong(value)); return true;
        case 2: pp->setChannelPage(string2ulong(value)); return true;
        case 3: pp->setUnscannedChannels(string2ulong(value)); return true;
        case 4: pp->setResultListSize(string2ulong(value)); return true;
        case 5: pp->setEnergyDetectList(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *MlmeScan_confirmDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 6: return "PANDescriptor"; break;
        default: return NULL;
    }
}

void *MlmeScan_confirmDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MlmeScan_confirm *pp = (MlmeScan_confirm *)object; (void)pp;
    switch (field) {
        case 6: return (void *)(&pp->getPanDescriptorList(i)); break;
        default: return NULL;
    }
}

Register_Class(McpsMsg);

McpsMsg::McpsMsg(const char *name, int kind) : cPacket(name,kind)
{
}

McpsMsg::McpsMsg(const McpsMsg& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

McpsMsg::~McpsMsg()
{
}

McpsMsg& McpsMsg::operator=(const McpsMsg& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    return *this;
}

void McpsMsg::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
}

void McpsMsg::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
}

class McpsMsgDescriptor : public cClassDescriptor
{
  public:
    McpsMsgDescriptor();
    virtual ~McpsMsgDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(McpsMsgDescriptor);

McpsMsgDescriptor::McpsMsgDescriptor() : cClassDescriptor("McpsMsg", "cPacket")
{
}

McpsMsgDescriptor::~McpsMsgDescriptor()
{
}

bool McpsMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<McpsMsg *>(obj)!=NULL;
}

const char *McpsMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int McpsMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int McpsMsgDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *McpsMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *McpsMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *McpsMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int McpsMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    McpsMsg *pp = (McpsMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool McpsMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    McpsMsg *pp = (McpsMsg *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool McpsMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    McpsMsg *pp = (McpsMsg *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *McpsMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *McpsMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    McpsMsg *pp = (McpsMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(MacCommand);

MacCommand::MacCommand(const char *name, int kind) : McpsMsg(name,kind)
{
    this->commandType_var = 0;
    commandPayload_arraysize = 0;
    this->commandPayload_var = 0;
}

MacCommand::MacCommand(const MacCommand& other) : McpsMsg()
{
    setName(other.getName());
    commandPayload_arraysize = 0;
    this->commandPayload_var = 0;
    operator=(other);
}

MacCommand::~MacCommand()
{
    delete [] commandPayload_var;
}

MacCommand& MacCommand::operator=(const MacCommand& other)
{
    if (this==&other) return *this;
    McpsMsg::operator=(other);
    this->commandType_var = other.commandType_var;
    delete [] this->commandPayload_var;
    this->commandPayload_var = (other.commandPayload_arraysize==0) ? NULL : new unsigned char[other.commandPayload_arraysize];
    commandPayload_arraysize = other.commandPayload_arraysize;
    for (unsigned int i=0; i<commandPayload_arraysize; i++)
        this->commandPayload_var[i] = other.commandPayload_var[i];
    return *this;
}

void MacCommand::parsimPack(cCommBuffer *b)
{
    McpsMsg::parsimPack(b);
    doPacking(b,this->commandType_var);
    b->pack(commandPayload_arraysize);
    doPacking(b,this->commandPayload_var,commandPayload_arraysize);
}

void MacCommand::parsimUnpack(cCommBuffer *b)
{
    McpsMsg::parsimUnpack(b);
    doUnpacking(b,this->commandType_var);
    delete [] this->commandPayload_var;
    b->unpack(commandPayload_arraysize);
    if (commandPayload_arraysize==0) {
        this->commandPayload_var = 0;
    } else {
        this->commandPayload_var = new unsigned char[commandPayload_arraysize];
        doUnpacking(b,this->commandPayload_var,commandPayload_arraysize);
    }
}

unsigned char MacCommand::getCommandType() const
{
    return commandType_var;
}

void MacCommand::setCommandType(unsigned char commandType_var)
{
    this->commandType_var = commandType_var;
}

void MacCommand::setCommandPayloadArraySize(unsigned int size)
{
    unsigned char *commandPayload_var2 = (size==0) ? NULL : new unsigned char[size];
    unsigned int sz = commandPayload_arraysize < size ? commandPayload_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        commandPayload_var2[i] = this->commandPayload_var[i];
    for (unsigned int i=sz; i<size; i++)
        commandPayload_var2[i] = 0;
    commandPayload_arraysize = size;
    delete [] this->commandPayload_var;
    this->commandPayload_var = commandPayload_var2;
}

unsigned int MacCommand::getCommandPayloadArraySize() const
{
    return commandPayload_arraysize;
}

unsigned char MacCommand::getCommandPayload(unsigned int k) const
{
    if (k>=commandPayload_arraysize) throw cRuntimeError("Array of size %d indexed by %d", commandPayload_arraysize, k);
    return commandPayload_var[k];
}

void MacCommand::setCommandPayload(unsigned int k, unsigned char commandPayload_var)
{
    if (k>=commandPayload_arraysize) throw cRuntimeError("Array of size %d indexed by %d", commandPayload_arraysize, k);
    this->commandPayload_var[k]=commandPayload_var;
}

class MacCommandDescriptor : public cClassDescriptor
{
  public:
    MacCommandDescriptor();
    virtual ~MacCommandDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(MacCommandDescriptor);

MacCommandDescriptor::MacCommandDescriptor() : cClassDescriptor("MacCommand", "McpsMsg")
{
}

MacCommandDescriptor::~MacCommandDescriptor()
{
}

bool MacCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MacCommand *>(obj)!=NULL;
}

const char *MacCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MacCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int MacCommandDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISARRAY | FD_ISEDITABLE;
        default: return 0;
    }
}

const char *MacCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "commandType";
        case 1: return "commandPayload";
        default: return NULL;
    }
}

const char *MacCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned char";
        case 1: return "unsigned char";
        default: return NULL;
    }
}

const char *MacCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int MacCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MacCommand *pp = (MacCommand *)object; (void)pp;
    switch (field) {
        case 1: return pp->getCommandPayloadArraySize();
        default: return 0;
    }
}

bool MacCommandDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    MacCommand *pp = (MacCommand *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->getCommandType(),resultbuf,bufsize); return true;
        case 1: ulong2string(pp->getCommandPayload(i),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool MacCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MacCommand *pp = (MacCommand *)object; (void)pp;
    switch (field) {
        case 0: pp->setCommandType(string2ulong(value)); return true;
        case 1: pp->setCommandPayload(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *MacCommandDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *MacCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MacCommand *pp = (MacCommand *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(MacBeacon);

MacBeacon::MacBeacon(const char *name, int kind) : McpsMsg(name,kind)
{
}

MacBeacon::MacBeacon(const MacBeacon& other) : McpsMsg()
{
    setName(other.getName());
    operator=(other);
}

MacBeacon::~MacBeacon()
{
}

MacBeacon& MacBeacon::operator=(const MacBeacon& other)
{
    if (this==&other) return *this;
    McpsMsg::operator=(other);
    return *this;
}

void MacBeacon::parsimPack(cCommBuffer *b)
{
    McpsMsg::parsimPack(b);
}

void MacBeacon::parsimUnpack(cCommBuffer *b)
{
    McpsMsg::parsimUnpack(b);
}

class MacBeaconDescriptor : public cClassDescriptor
{
  public:
    MacBeaconDescriptor();
    virtual ~MacBeaconDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(MacBeaconDescriptor);

MacBeaconDescriptor::MacBeaconDescriptor() : cClassDescriptor("MacBeacon", "McpsMsg")
{
}

MacBeaconDescriptor::~MacBeaconDescriptor()
{
}

bool MacBeaconDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MacBeacon *>(obj)!=NULL;
}

const char *MacBeaconDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MacBeaconDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int MacBeaconDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *MacBeaconDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *MacBeaconDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *MacBeaconDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int MacBeaconDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MacBeacon *pp = (MacBeacon *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool MacBeaconDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    MacBeacon *pp = (MacBeacon *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool MacBeaconDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MacBeacon *pp = (MacBeacon *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *MacBeaconDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *MacBeaconDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MacBeacon *pp = (MacBeacon *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PlmeMsg);

PlmeMsg::PlmeMsg(const char *name, int kind) : cMessage(name,kind)
{
}

PlmeMsg::PlmeMsg(const PlmeMsg& other) : cMessage()
{
    setName(other.getName());
    operator=(other);
}

PlmeMsg::~PlmeMsg()
{
}

PlmeMsg& PlmeMsg::operator=(const PlmeMsg& other)
{
    if (this==&other) return *this;
    cMessage::operator=(other);
    return *this;
}

void PlmeMsg::parsimPack(cCommBuffer *b)
{
    cMessage::parsimPack(b);
}

void PlmeMsg::parsimUnpack(cCommBuffer *b)
{
    cMessage::parsimUnpack(b);
}

class PlmeMsgDescriptor : public cClassDescriptor
{
  public:
    PlmeMsgDescriptor();
    virtual ~PlmeMsgDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PlmeMsgDescriptor);

PlmeMsgDescriptor::PlmeMsgDescriptor() : cClassDescriptor("PlmeMsg", "cMessage")
{
}

PlmeMsgDescriptor::~PlmeMsgDescriptor()
{
}

bool PlmeMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PlmeMsg *>(obj)!=NULL;
}

const char *PlmeMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PlmeMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int PlmeMsgDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *PlmeMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *PlmeMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *PlmeMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int PlmeMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PlmeMsg *pp = (PlmeMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool PlmeMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    PlmeMsg *pp = (PlmeMsg *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool PlmeMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PlmeMsg *pp = (PlmeMsg *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *PlmeMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *PlmeMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PlmeMsg *pp = (PlmeMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PlmeSetTrxState_request);

PlmeSetTrxState_request::PlmeSetTrxState_request(const char *name, int kind) : PlmeMsg(name,kind)
{
    this->state_var = 0;
}

PlmeSetTrxState_request::PlmeSetTrxState_request(const PlmeSetTrxState_request& other) : PlmeMsg()
{
    setName(other.getName());
    operator=(other);
}

PlmeSetTrxState_request::~PlmeSetTrxState_request()
{
}

PlmeSetTrxState_request& PlmeSetTrxState_request::operator=(const PlmeSetTrxState_request& other)
{
    if (this==&other) return *this;
    PlmeMsg::operator=(other);
    this->state_var = other.state_var;
    return *this;
}

void PlmeSetTrxState_request::parsimPack(cCommBuffer *b)
{
    PlmeMsg::parsimPack(b);
    doPacking(b,this->state_var);
}

void PlmeSetTrxState_request::parsimUnpack(cCommBuffer *b)
{
    PlmeMsg::parsimUnpack(b);
    doUnpacking(b,this->state_var);
}

unsigned char PlmeSetTrxState_request::getState() const
{
    return state_var;
}

void PlmeSetTrxState_request::setState(unsigned char state_var)
{
    this->state_var = state_var;
}

class PlmeSetTrxState_requestDescriptor : public cClassDescriptor
{
  public:
    PlmeSetTrxState_requestDescriptor();
    virtual ~PlmeSetTrxState_requestDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PlmeSetTrxState_requestDescriptor);

PlmeSetTrxState_requestDescriptor::PlmeSetTrxState_requestDescriptor() : cClassDescriptor("PlmeSetTrxState_request", "PlmeMsg")
{
}

PlmeSetTrxState_requestDescriptor::~PlmeSetTrxState_requestDescriptor()
{
}

bool PlmeSetTrxState_requestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PlmeSetTrxState_request *>(obj)!=NULL;
}

const char *PlmeSetTrxState_requestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PlmeSetTrxState_requestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PlmeSetTrxState_requestDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *PlmeSetTrxState_requestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "state";
        default: return NULL;
    }
}

const char *PlmeSetTrxState_requestDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned char";
        default: return NULL;
    }
}

const char *PlmeSetTrxState_requestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "PhyEnum";
            return NULL;
        default: return NULL;
    }
}

int PlmeSetTrxState_requestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PlmeSetTrxState_request *pp = (PlmeSetTrxState_request *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool PlmeSetTrxState_requestDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    PlmeSetTrxState_request *pp = (PlmeSetTrxState_request *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->getState(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool PlmeSetTrxState_requestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PlmeSetTrxState_request *pp = (PlmeSetTrxState_request *)object; (void)pp;
    switch (field) {
        case 0: pp->setState(string2ulong(value)); return true;
        default: return false;
    }
}

const char *PlmeSetTrxState_requestDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *PlmeSetTrxState_requestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PlmeSetTrxState_request *pp = (PlmeSetTrxState_request *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PlmeSetTrxState_confirm);

PlmeSetTrxState_confirm::PlmeSetTrxState_confirm(const char *name, int kind) : PlmeMsg(name,kind)
{
    this->status_var = 0;
}

PlmeSetTrxState_confirm::PlmeSetTrxState_confirm(const PlmeSetTrxState_confirm& other) : PlmeMsg()
{
    setName(other.getName());
    operator=(other);
}

PlmeSetTrxState_confirm::~PlmeSetTrxState_confirm()
{
}

PlmeSetTrxState_confirm& PlmeSetTrxState_confirm::operator=(const PlmeSetTrxState_confirm& other)
{
    if (this==&other) return *this;
    PlmeMsg::operator=(other);
    this->status_var = other.status_var;
    return *this;
}

void PlmeSetTrxState_confirm::parsimPack(cCommBuffer *b)
{
    PlmeMsg::parsimPack(b);
    doPacking(b,this->status_var);
}

void PlmeSetTrxState_confirm::parsimUnpack(cCommBuffer *b)
{
    PlmeMsg::parsimUnpack(b);
    doUnpacking(b,this->status_var);
}

unsigned char PlmeSetTrxState_confirm::getStatus() const
{
    return status_var;
}

void PlmeSetTrxState_confirm::setStatus(unsigned char status_var)
{
    this->status_var = status_var;
}

class PlmeSetTrxState_confirmDescriptor : public cClassDescriptor
{
  public:
    PlmeSetTrxState_confirmDescriptor();
    virtual ~PlmeSetTrxState_confirmDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PlmeSetTrxState_confirmDescriptor);

PlmeSetTrxState_confirmDescriptor::PlmeSetTrxState_confirmDescriptor() : cClassDescriptor("PlmeSetTrxState_confirm", "PlmeMsg")
{
}

PlmeSetTrxState_confirmDescriptor::~PlmeSetTrxState_confirmDescriptor()
{
}

bool PlmeSetTrxState_confirmDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PlmeSetTrxState_confirm *>(obj)!=NULL;
}

const char *PlmeSetTrxState_confirmDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PlmeSetTrxState_confirmDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PlmeSetTrxState_confirmDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *PlmeSetTrxState_confirmDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "status";
        default: return NULL;
    }
}

const char *PlmeSetTrxState_confirmDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned char";
        default: return NULL;
    }
}

const char *PlmeSetTrxState_confirmDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "PhyEnum";
            return NULL;
        default: return NULL;
    }
}

int PlmeSetTrxState_confirmDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PlmeSetTrxState_confirm *pp = (PlmeSetTrxState_confirm *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool PlmeSetTrxState_confirmDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    PlmeSetTrxState_confirm *pp = (PlmeSetTrxState_confirm *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->getStatus(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool PlmeSetTrxState_confirmDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PlmeSetTrxState_confirm *pp = (PlmeSetTrxState_confirm *)object; (void)pp;
    switch (field) {
        case 0: pp->setStatus(string2ulong(value)); return true;
        default: return false;
    }
}

const char *PlmeSetTrxState_confirmDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *PlmeSetTrxState_confirmDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PlmeSetTrxState_confirm *pp = (PlmeSetTrxState_confirm *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PlmeSet_request);

PlmeSet_request::PlmeSet_request(const char *name, int kind) : PlmeMsg(name,kind)
{
    this->PIBAttribute_var = 0;
    PIBAttributeValue_arraysize = 0;
    this->PIBAttributeValue_var = 0;
}

PlmeSet_request::PlmeSet_request(const PlmeSet_request& other) : PlmeMsg()
{
    setName(other.getName());
    PIBAttributeValue_arraysize = 0;
    this->PIBAttributeValue_var = 0;
    operator=(other);
}

PlmeSet_request::~PlmeSet_request()
{
    delete [] PIBAttributeValue_var;
}

PlmeSet_request& PlmeSet_request::operator=(const PlmeSet_request& other)
{
    if (this==&other) return *this;
    PlmeMsg::operator=(other);
    this->PIBAttribute_var = other.PIBAttribute_var;
    delete [] this->PIBAttributeValue_var;
    this->PIBAttributeValue_var = (other.PIBAttributeValue_arraysize==0) ? NULL : new unsigned int[other.PIBAttributeValue_arraysize];
    PIBAttributeValue_arraysize = other.PIBAttributeValue_arraysize;
    for (unsigned int i=0; i<PIBAttributeValue_arraysize; i++)
        this->PIBAttributeValue_var[i] = other.PIBAttributeValue_var[i];
    return *this;
}

void PlmeSet_request::parsimPack(cCommBuffer *b)
{
    PlmeMsg::parsimPack(b);
    doPacking(b,this->PIBAttribute_var);
    b->pack(PIBAttributeValue_arraysize);
    doPacking(b,this->PIBAttributeValue_var,PIBAttributeValue_arraysize);
}

void PlmeSet_request::parsimUnpack(cCommBuffer *b)
{
    PlmeMsg::parsimUnpack(b);
    doUnpacking(b,this->PIBAttribute_var);
    delete [] this->PIBAttributeValue_var;
    b->unpack(PIBAttributeValue_arraysize);
    if (PIBAttributeValue_arraysize==0) {
        this->PIBAttributeValue_var = 0;
    } else {
        this->PIBAttributeValue_var = new unsigned int[PIBAttributeValue_arraysize];
        doUnpacking(b,this->PIBAttributeValue_var,PIBAttributeValue_arraysize);
    }
}

unsigned char PlmeSet_request::getPIBAttribute() const
{
    return PIBAttribute_var;
}

void PlmeSet_request::setPIBAttribute(unsigned char PIBAttribute_var)
{
    this->PIBAttribute_var = PIBAttribute_var;
}

void PlmeSet_request::setPIBAttributeValueArraySize(unsigned int size)
{
    unsigned int *PIBAttributeValue_var2 = (size==0) ? NULL : new unsigned int[size];
    unsigned int sz = PIBAttributeValue_arraysize < size ? PIBAttributeValue_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        PIBAttributeValue_var2[i] = this->PIBAttributeValue_var[i];
    for (unsigned int i=sz; i<size; i++)
        PIBAttributeValue_var2[i] = 0;
    PIBAttributeValue_arraysize = size;
    delete [] this->PIBAttributeValue_var;
    this->PIBAttributeValue_var = PIBAttributeValue_var2;
}

unsigned int PlmeSet_request::getPIBAttributeValueArraySize() const
{
    return PIBAttributeValue_arraysize;
}

unsigned int PlmeSet_request::getPIBAttributeValue(unsigned int k) const
{
    if (k>=PIBAttributeValue_arraysize) throw cRuntimeError("Array of size %d indexed by %d", PIBAttributeValue_arraysize, k);
    return PIBAttributeValue_var[k];
}

void PlmeSet_request::setPIBAttributeValue(unsigned int k, unsigned int PIBAttributeValue_var)
{
    if (k>=PIBAttributeValue_arraysize) throw cRuntimeError("Array of size %d indexed by %d", PIBAttributeValue_arraysize, k);
    this->PIBAttributeValue_var[k]=PIBAttributeValue_var;
}

class PlmeSet_requestDescriptor : public cClassDescriptor
{
  public:
    PlmeSet_requestDescriptor();
    virtual ~PlmeSet_requestDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PlmeSet_requestDescriptor);

PlmeSet_requestDescriptor::PlmeSet_requestDescriptor() : cClassDescriptor("PlmeSet_request", "PlmeMsg")
{
}

PlmeSet_requestDescriptor::~PlmeSet_requestDescriptor()
{
}

bool PlmeSet_requestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PlmeSet_request *>(obj)!=NULL;
}

const char *PlmeSet_requestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PlmeSet_requestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PlmeSet_requestDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISARRAY | FD_ISEDITABLE;
        default: return 0;
    }
}

const char *PlmeSet_requestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "PIBAttribute";
        case 1: return "PIBAttributeValue";
        default: return NULL;
    }
}

const char *PlmeSet_requestDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned char";
        case 1: return "unsigned int";
        default: return NULL;
    }
}

const char *PlmeSet_requestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int PlmeSet_requestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PlmeSet_request *pp = (PlmeSet_request *)object; (void)pp;
    switch (field) {
        case 1: return pp->getPIBAttributeValueArraySize();
        default: return 0;
    }
}

bool PlmeSet_requestDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    PlmeSet_request *pp = (PlmeSet_request *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->getPIBAttribute(),resultbuf,bufsize); return true;
        case 1: ulong2string(pp->getPIBAttributeValue(i),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool PlmeSet_requestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PlmeSet_request *pp = (PlmeSet_request *)object; (void)pp;
    switch (field) {
        case 0: pp->setPIBAttribute(string2ulong(value)); return true;
        case 1: pp->setPIBAttributeValue(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *PlmeSet_requestDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *PlmeSet_requestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PlmeSet_request *pp = (PlmeSet_request *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PlmeSet_confirm);

PlmeSet_confirm::PlmeSet_confirm(const char *name, int kind) : PlmeMsg(name,kind)
{
    this->status_var = 0;
    this->PIBAttribute_var = 0;
}

PlmeSet_confirm::PlmeSet_confirm(const PlmeSet_confirm& other) : PlmeMsg()
{
    setName(other.getName());
    operator=(other);
}

PlmeSet_confirm::~PlmeSet_confirm()
{
}

PlmeSet_confirm& PlmeSet_confirm::operator=(const PlmeSet_confirm& other)
{
    if (this==&other) return *this;
    PlmeMsg::operator=(other);
    this->status_var = other.status_var;
    this->PIBAttribute_var = other.PIBAttribute_var;
    return *this;
}

void PlmeSet_confirm::parsimPack(cCommBuffer *b)
{
    PlmeMsg::parsimPack(b);
    doPacking(b,this->status_var);
    doPacking(b,this->PIBAttribute_var);
}

void PlmeSet_confirm::parsimUnpack(cCommBuffer *b)
{
    PlmeMsg::parsimUnpack(b);
    doUnpacking(b,this->status_var);
    doUnpacking(b,this->PIBAttribute_var);
}

unsigned char PlmeSet_confirm::getStatus() const
{
    return status_var;
}

void PlmeSet_confirm::setStatus(unsigned char status_var)
{
    this->status_var = status_var;
}

unsigned char PlmeSet_confirm::getPIBAttribute() const
{
    return PIBAttribute_var;
}

void PlmeSet_confirm::setPIBAttribute(unsigned char PIBAttribute_var)
{
    this->PIBAttribute_var = PIBAttribute_var;
}

class PlmeSet_confirmDescriptor : public cClassDescriptor
{
  public:
    PlmeSet_confirmDescriptor();
    virtual ~PlmeSet_confirmDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PlmeSet_confirmDescriptor);

PlmeSet_confirmDescriptor::PlmeSet_confirmDescriptor() : cClassDescriptor("PlmeSet_confirm", "PlmeMsg")
{
}

PlmeSet_confirmDescriptor::~PlmeSet_confirmDescriptor()
{
}

bool PlmeSet_confirmDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PlmeSet_confirm *>(obj)!=NULL;
}

const char *PlmeSet_confirmDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PlmeSet_confirmDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PlmeSet_confirmDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *PlmeSet_confirmDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "status";
        case 1: return "PIBAttribute";
        default: return NULL;
    }
}

const char *PlmeSet_confirmDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned char";
        case 1: return "unsigned char";
        default: return NULL;
    }
}

const char *PlmeSet_confirmDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int PlmeSet_confirmDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PlmeSet_confirm *pp = (PlmeSet_confirm *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool PlmeSet_confirmDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    PlmeSet_confirm *pp = (PlmeSet_confirm *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->getStatus(),resultbuf,bufsize); return true;
        case 1: ulong2string(pp->getPIBAttribute(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool PlmeSet_confirmDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PlmeSet_confirm *pp = (PlmeSet_confirm *)object; (void)pp;
    switch (field) {
        case 0: pp->setStatus(string2ulong(value)); return true;
        case 1: pp->setPIBAttribute(string2ulong(value)); return true;
        default: return false;
    }
}

const char *PlmeSet_confirmDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *PlmeSet_confirmDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PlmeSet_confirm *pp = (PlmeSet_confirm *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PlmeEd_request);

PlmeEd_request::PlmeEd_request(const char *name, int kind) : PlmeMsg(name,kind)
{
}

PlmeEd_request::PlmeEd_request(const PlmeEd_request& other) : PlmeMsg()
{
    setName(other.getName());
    operator=(other);
}

PlmeEd_request::~PlmeEd_request()
{
}

PlmeEd_request& PlmeEd_request::operator=(const PlmeEd_request& other)
{
    if (this==&other) return *this;
    PlmeMsg::operator=(other);
    return *this;
}

void PlmeEd_request::parsimPack(cCommBuffer *b)
{
    PlmeMsg::parsimPack(b);
}

void PlmeEd_request::parsimUnpack(cCommBuffer *b)
{
    PlmeMsg::parsimUnpack(b);
}

class PlmeEd_requestDescriptor : public cClassDescriptor
{
  public:
    PlmeEd_requestDescriptor();
    virtual ~PlmeEd_requestDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PlmeEd_requestDescriptor);

PlmeEd_requestDescriptor::PlmeEd_requestDescriptor() : cClassDescriptor("PlmeEd_request", "PlmeMsg")
{
}

PlmeEd_requestDescriptor::~PlmeEd_requestDescriptor()
{
}

bool PlmeEd_requestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PlmeEd_request *>(obj)!=NULL;
}

const char *PlmeEd_requestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PlmeEd_requestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int PlmeEd_requestDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *PlmeEd_requestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *PlmeEd_requestDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *PlmeEd_requestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int PlmeEd_requestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PlmeEd_request *pp = (PlmeEd_request *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool PlmeEd_requestDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    PlmeEd_request *pp = (PlmeEd_request *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool PlmeEd_requestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PlmeEd_request *pp = (PlmeEd_request *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *PlmeEd_requestDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *PlmeEd_requestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PlmeEd_request *pp = (PlmeEd_request *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PlmeEd_confirm);

PlmeEd_confirm::PlmeEd_confirm(const char *name, int kind) : PlmeMsg(name,kind)
{
    this->status_var = 0;
    this->energyLevel_var = 0;
}

PlmeEd_confirm::PlmeEd_confirm(const PlmeEd_confirm& other) : PlmeMsg()
{
    setName(other.getName());
    operator=(other);
}

PlmeEd_confirm::~PlmeEd_confirm()
{
}

PlmeEd_confirm& PlmeEd_confirm::operator=(const PlmeEd_confirm& other)
{
    if (this==&other) return *this;
    PlmeMsg::operator=(other);
    this->status_var = other.status_var;
    this->energyLevel_var = other.energyLevel_var;
    return *this;
}

void PlmeEd_confirm::parsimPack(cCommBuffer *b)
{
    PlmeMsg::parsimPack(b);
    doPacking(b,this->status_var);
    doPacking(b,this->energyLevel_var);
}

void PlmeEd_confirm::parsimUnpack(cCommBuffer *b)
{
    PlmeMsg::parsimUnpack(b);
    doUnpacking(b,this->status_var);
    doUnpacking(b,this->energyLevel_var);
}

unsigned char PlmeEd_confirm::getStatus() const
{
    return status_var;
}

void PlmeEd_confirm::setStatus(unsigned char status_var)
{
    this->status_var = status_var;
}

unsigned char PlmeEd_confirm::getEnergyLevel() const
{
    return energyLevel_var;
}

void PlmeEd_confirm::setEnergyLevel(unsigned char energyLevel_var)
{
    this->energyLevel_var = energyLevel_var;
}

class PlmeEd_confirmDescriptor : public cClassDescriptor
{
  public:
    PlmeEd_confirmDescriptor();
    virtual ~PlmeEd_confirmDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PlmeEd_confirmDescriptor);

PlmeEd_confirmDescriptor::PlmeEd_confirmDescriptor() : cClassDescriptor("PlmeEd_confirm", "PlmeMsg")
{
}

PlmeEd_confirmDescriptor::~PlmeEd_confirmDescriptor()
{
}

bool PlmeEd_confirmDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PlmeEd_confirm *>(obj)!=NULL;
}

const char *PlmeEd_confirmDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PlmeEd_confirmDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PlmeEd_confirmDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *PlmeEd_confirmDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "status";
        case 1: return "energyLevel";
        default: return NULL;
    }
}

const char *PlmeEd_confirmDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned char";
        case 1: return "unsigned char";
        default: return NULL;
    }
}

const char *PlmeEd_confirmDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int PlmeEd_confirmDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PlmeEd_confirm *pp = (PlmeEd_confirm *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool PlmeEd_confirmDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    PlmeEd_confirm *pp = (PlmeEd_confirm *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->getStatus(),resultbuf,bufsize); return true;
        case 1: ulong2string(pp->getEnergyLevel(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool PlmeEd_confirmDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PlmeEd_confirm *pp = (PlmeEd_confirm *)object; (void)pp;
    switch (field) {
        case 0: pp->setStatus(string2ulong(value)); return true;
        case 1: pp->setEnergyLevel(string2ulong(value)); return true;
        default: return false;
    }
}

const char *PlmeEd_confirmDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *PlmeEd_confirmDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PlmeEd_confirm *pp = (PlmeEd_confirm *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PdMsg);

PdMsg::PdMsg(const char *name, int kind) : cPacket(name,kind)
{
    this->frameType_var = 0;
    this->securityEnabled_var = 0;
    this->framePending_var = 0;
    this->ackRequest_var = 0;
    this->panIdCompression_var = 0;
    this->destinationAddressingMode_var = 0;
    this->frameVersion_var = 0;
    this->sourceAddressingMode_var = 0;
    this->sequenceNumber_var = 0;
    this->destinationPanIdentifier_var = 0;
    this->destinationAddress_var = 0;
    this->sourcePanIdentifier_var = 0;
    this->sourceAddress_var = 0;
    auxiliarySecurityHeader_arraysize = 0;
    this->auxiliarySecurityHeader_var = 0;
    this->fcs_var = 0;
}

PdMsg::PdMsg(const PdMsg& other) : cPacket()
{
    setName(other.getName());
    auxiliarySecurityHeader_arraysize = 0;
    this->auxiliarySecurityHeader_var = 0;
    operator=(other);
}

PdMsg::~PdMsg()
{
    delete [] auxiliarySecurityHeader_var;
}

PdMsg& PdMsg::operator=(const PdMsg& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    this->frameType_var = other.frameType_var;
    this->securityEnabled_var = other.securityEnabled_var;
    this->framePending_var = other.framePending_var;
    this->ackRequest_var = other.ackRequest_var;
    this->panIdCompression_var = other.panIdCompression_var;
    this->destinationAddressingMode_var = other.destinationAddressingMode_var;
    this->frameVersion_var = other.frameVersion_var;
    this->sourceAddressingMode_var = other.sourceAddressingMode_var;
    this->sequenceNumber_var = other.sequenceNumber_var;
    this->destinationPanIdentifier_var = other.destinationPanIdentifier_var;
    this->destinationAddress_var = other.destinationAddress_var;
    this->sourcePanIdentifier_var = other.sourcePanIdentifier_var;
    this->sourceAddress_var = other.sourceAddress_var;
    delete [] this->auxiliarySecurityHeader_var;
    this->auxiliarySecurityHeader_var = (other.auxiliarySecurityHeader_arraysize==0) ? NULL : new unsigned char[other.auxiliarySecurityHeader_arraysize];
    auxiliarySecurityHeader_arraysize = other.auxiliarySecurityHeader_arraysize;
    for (unsigned int i=0; i<auxiliarySecurityHeader_arraysize; i++)
        this->auxiliarySecurityHeader_var[i] = other.auxiliarySecurityHeader_var[i];
    this->fcs_var = other.fcs_var;
    return *this;
}

void PdMsg::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->frameType_var);
    doPacking(b,this->securityEnabled_var);
    doPacking(b,this->framePending_var);
    doPacking(b,this->ackRequest_var);
    doPacking(b,this->panIdCompression_var);
    doPacking(b,this->destinationAddressingMode_var);
    doPacking(b,this->frameVersion_var);
    doPacking(b,this->sourceAddressingMode_var);
    doPacking(b,this->sequenceNumber_var);
    doPacking(b,this->destinationPanIdentifier_var);
    doPacking(b,this->destinationAddress_var);
    doPacking(b,this->sourcePanIdentifier_var);
    doPacking(b,this->sourceAddress_var);
    b->pack(auxiliarySecurityHeader_arraysize);
    doPacking(b,this->auxiliarySecurityHeader_var,auxiliarySecurityHeader_arraysize);
    doPacking(b,this->fcs_var);
}

void PdMsg::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->frameType_var);
    doUnpacking(b,this->securityEnabled_var);
    doUnpacking(b,this->framePending_var);
    doUnpacking(b,this->ackRequest_var);
    doUnpacking(b,this->panIdCompression_var);
    doUnpacking(b,this->destinationAddressingMode_var);
    doUnpacking(b,this->frameVersion_var);
    doUnpacking(b,this->sourceAddressingMode_var);
    doUnpacking(b,this->sequenceNumber_var);
    doUnpacking(b,this->destinationPanIdentifier_var);
    doUnpacking(b,this->destinationAddress_var);
    doUnpacking(b,this->sourcePanIdentifier_var);
    doUnpacking(b,this->sourceAddress_var);
    delete [] this->auxiliarySecurityHeader_var;
    b->unpack(auxiliarySecurityHeader_arraysize);
    if (auxiliarySecurityHeader_arraysize==0) {
        this->auxiliarySecurityHeader_var = 0;
    } else {
        this->auxiliarySecurityHeader_var = new unsigned char[auxiliarySecurityHeader_arraysize];
        doUnpacking(b,this->auxiliarySecurityHeader_var,auxiliarySecurityHeader_arraysize);
    }
    doUnpacking(b,this->fcs_var);
}

unsigned char PdMsg::getFrameType() const
{
    return frameType_var;
}

void PdMsg::setFrameType(unsigned char frameType_var)
{
    this->frameType_var = frameType_var;
}

bool PdMsg::getSecurityEnabled() const
{
    return securityEnabled_var;
}

void PdMsg::setSecurityEnabled(bool securityEnabled_var)
{
    this->securityEnabled_var = securityEnabled_var;
}

bool PdMsg::getFramePending() const
{
    return framePending_var;
}

void PdMsg::setFramePending(bool framePending_var)
{
    this->framePending_var = framePending_var;
}

bool PdMsg::getAckRequest() const
{
    return ackRequest_var;
}

void PdMsg::setAckRequest(bool ackRequest_var)
{
    this->ackRequest_var = ackRequest_var;
}

bool PdMsg::getPanIdCompression() const
{
    return panIdCompression_var;
}

void PdMsg::setPanIdCompression(bool panIdCompression_var)
{
    this->panIdCompression_var = panIdCompression_var;
}

char PdMsg::getDestinationAddressingMode() const
{
    return destinationAddressingMode_var;
}

void PdMsg::setDestinationAddressingMode(char destinationAddressingMode_var)
{
    this->destinationAddressingMode_var = destinationAddressingMode_var;
}

char PdMsg::getFrameVersion() const
{
    return frameVersion_var;
}

void PdMsg::setFrameVersion(char frameVersion_var)
{
    this->frameVersion_var = frameVersion_var;
}

char PdMsg::getSourceAddressingMode() const
{
    return sourceAddressingMode_var;
}

void PdMsg::setSourceAddressingMode(char sourceAddressingMode_var)
{
    this->sourceAddressingMode_var = sourceAddressingMode_var;
}

unsigned char PdMsg::getSequenceNumber() const
{
    return sequenceNumber_var;
}

void PdMsg::setSequenceNumber(unsigned char sequenceNumber_var)
{
    this->sequenceNumber_var = sequenceNumber_var;
}

unsigned short PdMsg::getDestinationPanIdentifier() const
{
    return destinationPanIdentifier_var;
}

void PdMsg::setDestinationPanIdentifier(unsigned short destinationPanIdentifier_var)
{
    this->destinationPanIdentifier_var = destinationPanIdentifier_var;
}

unsigned long PdMsg::getDestinationAddress() const
{
    return destinationAddress_var;
}

void PdMsg::setDestinationAddress(unsigned long destinationAddress_var)
{
    this->destinationAddress_var = destinationAddress_var;
}

unsigned short PdMsg::getSourcePanIdentifier() const
{
    return sourcePanIdentifier_var;
}

void PdMsg::setSourcePanIdentifier(unsigned short sourcePanIdentifier_var)
{
    this->sourcePanIdentifier_var = sourcePanIdentifier_var;
}

unsigned long PdMsg::getSourceAddress() const
{
    return sourceAddress_var;
}

void PdMsg::setSourceAddress(unsigned long sourceAddress_var)
{
    this->sourceAddress_var = sourceAddress_var;
}

void PdMsg::setAuxiliarySecurityHeaderArraySize(unsigned int size)
{
    unsigned char *auxiliarySecurityHeader_var2 = (size==0) ? NULL : new unsigned char[size];
    unsigned int sz = auxiliarySecurityHeader_arraysize < size ? auxiliarySecurityHeader_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        auxiliarySecurityHeader_var2[i] = this->auxiliarySecurityHeader_var[i];
    for (unsigned int i=sz; i<size; i++)
        auxiliarySecurityHeader_var2[i] = 0;
    auxiliarySecurityHeader_arraysize = size;
    delete [] this->auxiliarySecurityHeader_var;
    this->auxiliarySecurityHeader_var = auxiliarySecurityHeader_var2;
}

unsigned int PdMsg::getAuxiliarySecurityHeaderArraySize() const
{
    return auxiliarySecurityHeader_arraysize;
}

unsigned char PdMsg::getAuxiliarySecurityHeader(unsigned int k) const
{
    if (k>=auxiliarySecurityHeader_arraysize) throw cRuntimeError("Array of size %d indexed by %d", auxiliarySecurityHeader_arraysize, k);
    return auxiliarySecurityHeader_var[k];
}

void PdMsg::setAuxiliarySecurityHeader(unsigned int k, unsigned char auxiliarySecurityHeader_var)
{
    if (k>=auxiliarySecurityHeader_arraysize) throw cRuntimeError("Array of size %d indexed by %d", auxiliarySecurityHeader_arraysize, k);
    this->auxiliarySecurityHeader_var[k]=auxiliarySecurityHeader_var;
}

unsigned short PdMsg::getFcs() const
{
    return fcs_var;
}

void PdMsg::setFcs(unsigned short fcs_var)
{
    this->fcs_var = fcs_var;
}

class PdMsgDescriptor : public cClassDescriptor
{
  public:
    PdMsgDescriptor();
    virtual ~PdMsgDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PdMsgDescriptor);

PdMsgDescriptor::PdMsgDescriptor() : cClassDescriptor("PdMsg", "cPacket")
{
}

PdMsgDescriptor::~PdMsgDescriptor()
{
}

bool PdMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PdMsg *>(obj)!=NULL;
}

const char *PdMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PdMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 15+basedesc->getFieldCount(object) : 15;
}

unsigned int PdMsgDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        case 1: return FD_ISEDITABLE;
        case 2: return FD_ISEDITABLE;
        case 3: return FD_ISEDITABLE;
        case 4: return FD_ISEDITABLE;
        case 5: return FD_ISEDITABLE;
        case 6: return FD_ISEDITABLE;
        case 7: return FD_ISEDITABLE;
        case 8: return FD_ISEDITABLE;
        case 9: return FD_ISEDITABLE;
        case 10: return FD_ISEDITABLE;
        case 11: return FD_ISEDITABLE;
        case 12: return FD_ISEDITABLE;
        case 13: return FD_ISARRAY | FD_ISEDITABLE;
        case 14: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *PdMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "frameType";
        case 1: return "securityEnabled";
        case 2: return "framePending";
        case 3: return "ackRequest";
        case 4: return "panIdCompression";
        case 5: return "destinationAddressingMode";
        case 6: return "frameVersion";
        case 7: return "sourceAddressingMode";
        case 8: return "sequenceNumber";
        case 9: return "destinationPanIdentifier";
        case 10: return "destinationAddress";
        case 11: return "sourcePanIdentifier";
        case 12: return "sourceAddress";
        case 13: return "auxiliarySecurityHeader";
        case 14: return "fcs";
        default: return NULL;
    }
}

const char *PdMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned char";
        case 1: return "bool";
        case 2: return "bool";
        case 3: return "bool";
        case 4: return "bool";
        case 5: return "char";
        case 6: return "char";
        case 7: return "char";
        case 8: return "unsigned char";
        case 9: return "unsigned short";
        case 10: return "unsigned long";
        case 11: return "unsigned short";
        case 12: return "unsigned long";
        case 13: return "unsigned char";
        case 14: return "unsigned short";
        default: return NULL;
    }
}

const char *PdMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int PdMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PdMsg *pp = (PdMsg *)object; (void)pp;
    switch (field) {
        case 13: return pp->getAuxiliarySecurityHeaderArraySize();
        default: return 0;
    }
}

bool PdMsgDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    PdMsg *pp = (PdMsg *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->getFrameType(),resultbuf,bufsize); return true;
        case 1: bool2string(pp->getSecurityEnabled(),resultbuf,bufsize); return true;
        case 2: bool2string(pp->getFramePending(),resultbuf,bufsize); return true;
        case 3: bool2string(pp->getAckRequest(),resultbuf,bufsize); return true;
        case 4: bool2string(pp->getPanIdCompression(),resultbuf,bufsize); return true;
        case 5: long2string(pp->getDestinationAddressingMode(),resultbuf,bufsize); return true;
        case 6: long2string(pp->getFrameVersion(),resultbuf,bufsize); return true;
        case 7: long2string(pp->getSourceAddressingMode(),resultbuf,bufsize); return true;
        case 8: ulong2string(pp->getSequenceNumber(),resultbuf,bufsize); return true;
        case 9: ulong2string(pp->getDestinationPanIdentifier(),resultbuf,bufsize); return true;
        case 10: ulong2string(pp->getDestinationAddress(),resultbuf,bufsize); return true;
        case 11: ulong2string(pp->getSourcePanIdentifier(),resultbuf,bufsize); return true;
        case 12: ulong2string(pp->getSourceAddress(),resultbuf,bufsize); return true;
        case 13: ulong2string(pp->getAuxiliarySecurityHeader(i),resultbuf,bufsize); return true;
        case 14: ulong2string(pp->getFcs(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool PdMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PdMsg *pp = (PdMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setFrameType(string2ulong(value)); return true;
        case 1: pp->setSecurityEnabled(string2bool(value)); return true;
        case 2: pp->setFramePending(string2bool(value)); return true;
        case 3: pp->setAckRequest(string2bool(value)); return true;
        case 4: pp->setPanIdCompression(string2bool(value)); return true;
        case 5: pp->setDestinationAddressingMode(string2long(value)); return true;
        case 6: pp->setFrameVersion(string2long(value)); return true;
        case 7: pp->setSourceAddressingMode(string2long(value)); return true;
        case 8: pp->setSequenceNumber(string2ulong(value)); return true;
        case 9: pp->setDestinationPanIdentifier(string2ulong(value)); return true;
        case 10: pp->setDestinationAddress(string2ulong(value)); return true;
        case 11: pp->setSourcePanIdentifier(string2ulong(value)); return true;
        case 12: pp->setSourceAddress(string2ulong(value)); return true;
        case 13: pp->setAuxiliarySecurityHeader(i,string2ulong(value)); return true;
        case 14: pp->setFcs(string2ulong(value)); return true;
        default: return false;
    }
}

const char *PdMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *PdMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PdMsg *pp = (PdMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PdData_request);

PdData_request::PdData_request(const char *name, int kind) : PdMsg(name,kind)
{
    this->psduLength_var = 0;
}

PdData_request::PdData_request(const PdData_request& other) : PdMsg()
{
    setName(other.getName());
    operator=(other);
}

PdData_request::~PdData_request()
{
}

PdData_request& PdData_request::operator=(const PdData_request& other)
{
    if (this==&other) return *this;
    PdMsg::operator=(other);
    this->psduLength_var = other.psduLength_var;
    return *this;
}

void PdData_request::parsimPack(cCommBuffer *b)
{
    PdMsg::parsimPack(b);
    doPacking(b,this->psduLength_var);
}

void PdData_request::parsimUnpack(cCommBuffer *b)
{
    PdMsg::parsimUnpack(b);
    doUnpacking(b,this->psduLength_var);
}

unsigned int PdData_request::getPsduLength() const
{
    return psduLength_var;
}

void PdData_request::setPsduLength(unsigned int psduLength_var)
{
    this->psduLength_var = psduLength_var;
}

class PdData_requestDescriptor : public cClassDescriptor
{
  public:
    PdData_requestDescriptor();
    virtual ~PdData_requestDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PdData_requestDescriptor);

PdData_requestDescriptor::PdData_requestDescriptor() : cClassDescriptor("PdData_request", "PdMsg")
{
}

PdData_requestDescriptor::~PdData_requestDescriptor()
{
}

bool PdData_requestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PdData_request *>(obj)!=NULL;
}

const char *PdData_requestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PdData_requestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PdData_requestDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *PdData_requestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "psduLength";
        default: return NULL;
    }
}

const char *PdData_requestDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned int";
        default: return NULL;
    }
}

const char *PdData_requestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int PdData_requestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PdData_request *pp = (PdData_request *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool PdData_requestDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    PdData_request *pp = (PdData_request *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->getPsduLength(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool PdData_requestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PdData_request *pp = (PdData_request *)object; (void)pp;
    switch (field) {
        case 0: pp->setPsduLength(string2ulong(value)); return true;
        default: return false;
    }
}

const char *PdData_requestDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *PdData_requestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PdData_request *pp = (PdData_request *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PdData_confirm);

PdData_confirm::PdData_confirm(const char *name, int kind) : PdMsg(name,kind)
{
    this->status_var = 0;
}

PdData_confirm::PdData_confirm(const PdData_confirm& other) : PdMsg()
{
    setName(other.getName());
    operator=(other);
}

PdData_confirm::~PdData_confirm()
{
}

PdData_confirm& PdData_confirm::operator=(const PdData_confirm& other)
{
    if (this==&other) return *this;
    PdMsg::operator=(other);
    this->status_var = other.status_var;
    return *this;
}

void PdData_confirm::parsimPack(cCommBuffer *b)
{
    PdMsg::parsimPack(b);
    doPacking(b,this->status_var);
}

void PdData_confirm::parsimUnpack(cCommBuffer *b)
{
    PdMsg::parsimUnpack(b);
    doUnpacking(b,this->status_var);
}

unsigned char PdData_confirm::getStatus() const
{
    return status_var;
}

void PdData_confirm::setStatus(unsigned char status_var)
{
    this->status_var = status_var;
}

class PdData_confirmDescriptor : public cClassDescriptor
{
  public:
    PdData_confirmDescriptor();
    virtual ~PdData_confirmDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(PdData_confirmDescriptor);

PdData_confirmDescriptor::PdData_confirmDescriptor() : cClassDescriptor("PdData_confirm", "PdMsg")
{
}

PdData_confirmDescriptor::~PdData_confirmDescriptor()
{
}

bool PdData_confirmDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PdData_confirm *>(obj)!=NULL;
}

const char *PdData_confirmDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PdData_confirmDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PdData_confirmDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return FD_ISEDITABLE;
        default: return 0;
    }
}

const char *PdData_confirmDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "status";
        default: return NULL;
    }
}

const char *PdData_confirmDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return "unsigned char";
        default: return NULL;
    }
}

const char *PdData_confirmDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "PhyEnum";
            return NULL;
        default: return NULL;
    }
}

int PdData_confirmDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PdData_confirm *pp = (PdData_confirm *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool PdData_confirmDescriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    PdData_confirm *pp = (PdData_confirm *)object; (void)pp;
    switch (field) {
        case 0: ulong2string(pp->getStatus(),resultbuf,bufsize); return true;
        default: return false;
    }
}

bool PdData_confirmDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PdData_confirm *pp = (PdData_confirm *)object; (void)pp;
    switch (field) {
        case 0: pp->setStatus(string2ulong(value)); return true;
        default: return false;
    }
}

const char *PdData_confirmDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *PdData_confirmDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PdData_confirm *pp = (PdData_confirm *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Frame802154);

Frame802154::Frame802154(const char *name, int kind) : cPacket(name,kind)
{
}

Frame802154::Frame802154(const Frame802154& other) : cPacket()
{
    setName(other.getName());
    operator=(other);
}

Frame802154::~Frame802154()
{
}

Frame802154& Frame802154::operator=(const Frame802154& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    return *this;
}

void Frame802154::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
}

void Frame802154::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
}

class Frame802154Descriptor : public cClassDescriptor
{
  public:
    Frame802154Descriptor();
    virtual ~Frame802154Descriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual bool getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(Frame802154Descriptor);

Frame802154Descriptor::Frame802154Descriptor() : cClassDescriptor("Frame802154", "cPacket")
{
}

Frame802154Descriptor::~Frame802154Descriptor()
{
}

bool Frame802154Descriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Frame802154 *>(obj)!=NULL;
}

const char *Frame802154Descriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Frame802154Descriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Frame802154Descriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return 0;
    }
}

const char *Frame802154Descriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *Frame802154Descriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

const char *Frame802154Descriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int Frame802154Descriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Frame802154 *pp = (Frame802154 *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

bool Frame802154Descriptor::getFieldAsString(void *object, int field, int i, char *resultbuf, int bufsize) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i,resultbuf,bufsize);
        field -= basedesc->getFieldCount(object);
    }
    Frame802154 *pp = (Frame802154 *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

bool Frame802154Descriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Frame802154 *pp = (Frame802154 *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Frame802154Descriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

void *Frame802154Descriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Frame802154 *pp = (Frame802154 *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


