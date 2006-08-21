/*
 * Dibbler - a portable DHCPv6
 *
 * authors: Adrien CLERC, Bahattin DEMIRPLAK, Ga�tant ELEOUET
 *          Micka�l GU�RIN, Lionel GUILMIN, Laur�line PROVOST
 *          from ENSEEIHT, Toulouse, France
 *
 * released under GNU GPL v2 licence
 *
 * $Id: DNSUpdate.h,v 1.4 2006-08-21 22:16:17 thomson Exp $
 *
 */

#ifdef WIN32
#include <winsock2.h>
#endif

#include "poslib.h"

/* return values of method run*/

enum DnsUpdateResult {
    DNSUPDATE_SUCCESS=0,
    DNSUPDATE_ERROR=1,
    DNSUPDATE_CONNFAIL=2,
    DNSUPDATE_SRVNOTAUTH=3,
    DNSUPDATE_SKIP=4
};

class DNSUpdate {
    
private:
    DnsMessage *message;
    _addr server;
    char* hostname;
    char* hostip;
    domainname* zoneroot;
    char* ttl;
    int numberOfRecords;
    
    void createSOAMsg();
    void addinMsg_newPTR();
    void addinMsg_newAAAA();
    void addinMsg_delOldRR();
    void deleteRecordFromRRSet(string type);
    bool DnsRR_avail(DnsMessage *msg, DnsRR& RemoteDnsRR);
    DnsRR* get_oldDnsRR();
    void sendMsg();
    
 public:
    DNSUpdate(char* dns_address, char*zonename, char* hostname, char* hostip, char* ttl, 
	      int numberOfRecords);
    ~DNSUpdate();
    DnsUpdateResult run();
};
