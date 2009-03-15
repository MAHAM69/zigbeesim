#ifndef __PHYPIB_H__
#define __PHYPIB_H__

#include <omnetpp.h>
#include "BasicModule.h"
#include "typedef.h"
#include "Messages_m.h"
#include "BBItems.h"
#include <string>
#include <sstream>

class PhyPib: public BasicModule {
public:
	virtual void initialize(int);
	virtual void handleMessage(cMessage *msg);
protected:
	/** @brief gate id*/
	/*@{*/
	int plmeOut;
	int plmeIn;
	/*@}*/
	/** PHY PIB constants */
	unsigned char aMaxPHYPacketSize;
	unsigned char aTurnAroundTime;
	/** PHY PIB attributes */
	unsigned char phyCurrentChannel;
	unsigned int* phyChannelsSupported;
	unsigned char phyTransmitPower;
	unsigned char phyCCAMode;
	unsigned char phyCurrentPage;
	unsigned int phyMaxFrameDuration;
	unsigned char phySHRDuration;
	float phySymbolsPerOctet;
	/** @brief Sets the level of comments to the EV output */
	CommentsLevel commentsLevel;
	virtual void handleSelfMsg(cMessage*);
	virtual void handlePlmeMsg(cMessage*);
	virtual void sendPlme(cMessage*);
	virtual void resetPhyPibValues();
	virtual void comment(CommentsLevel level, std::string s) {
		if ((level & commentsLevel) > NOTHING) {
			/** @todo align logName substrings for routers and endDevices */
			std::cout << logName() << "." << getName() << "\t" << s << endl;
		}
	}
	virtual void commentMsgSending(cMessage *msg) {
		std::stringstream commentStream;
		commentStream << "Sending " << msg->getName();
		comment(MESSAGE, commentStream.str());
	}
	virtual void commentMsgReceived(cMessage *msg) {
		std::stringstream commentStream;
		commentStream << "Received " << msg->getName();
		comment(MESSAGE, commentStream.str());
	}
public:
	PhyEnum setPIBAttribute(PhyPibIdentifier, unsigned int*);
	unsigned char getMaxPHYPacketSize() const {
		return aMaxPHYPacketSize;
	}
	void setMaxPHYPacketSize(unsigned char aMaxPHYPacketSize) {
		this->aMaxPHYPacketSize = aMaxPHYPacketSize;
	}
	unsigned char getTurnAroundTime() const {
		return aTurnAroundTime;
	}
	void setTurnAroundTime(unsigned char aTurnAroundTime) {
		this->aTurnAroundTime = aTurnAroundTime;
	}
	unsigned char getPhyCurrentChannel() const {
		return phyCurrentChannel;
	}
	void setPhyCurrentChannel(unsigned char phyCurrentChannel) {
		this->phyCurrentChannel = phyCurrentChannel;
	}
	unsigned int *getPhyChannelsSupported() const {
		return phyChannelsSupported;
	}
	/** @todo This array setter may lead to mem holes*/
	void setPhyChannelsSupported(unsigned int* phyChannelsSupported) {
		delete (this->phyChannelsSupported);
		this->phyChannelsSupported = phyChannelsSupported;
	}
	unsigned char getPhyTransmitPower() const {
		return phyTransmitPower;
	}
	void setPhyTransmitPower(unsigned char phyTransmitPower) {
		this->phyTransmitPower = phyTransmitPower;
	}
	unsigned char getPhyCCAMode() const {
		return phyCCAMode;
	}
	void setPhyCCAMode(unsigned char phyCCAMode) {
		this->phyCCAMode = phyCCAMode;
	}
	unsigned char getPhyCurrentPage() const {
		return phyCurrentPage;
	}
	void setPhyCurrentPage(unsigned char phyCurrentPage) {
		this->phyCurrentPage = phyCurrentPage;
	}
	unsigned int getPhyMaxFrameDuration() const {
		return phyMaxFrameDuration;
	}
	void setPhyMaxFrameDuration(unsigned int phyMaxFrameDuration) {
		this->phyMaxFrameDuration = phyMaxFrameDuration;
	}
	unsigned char getPhySHRDuration() const {
		return phySHRDuration;
	}
	void setPhySHRDuration(unsigned char phySHRDuration) {
		this->phySHRDuration = phySHRDuration;
	}
	float getPhySymbolsPerOctet() const {
		return phySymbolsPerOctet;
	}
	void setPhySymbolsPerOctet(float phySymbolsPerOctet) {
		this->phySymbolsPerOctet = phySymbolsPerOctet;
	}
};

#endif
