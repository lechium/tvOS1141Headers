/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWRMLinkPrefChange1 : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _count;
	unsigned _nCallActive;
	unsigned _nCallIdle;
	unsigned _nCellularGood;
	unsigned _nData;
	unsigned _nNegativeStatusUpdate;
	unsigned _nPositiveStatusUpdate;
	unsigned _nRunning;
	unsigned _nStationary;
	unsigned _nStatusUpdateDelayBin1;
	unsigned _nStatusUpdateDelayBin2;
	unsigned _nStatusUpdateDelayBin3;
	unsigned _nStatusUpdateDelayBin4;
	unsigned _nStatusUpdateDelayBin5;
	unsigned _nStatusUpdateDelayBin6;
	unsigned _nUnknownStatusUpdat;
	unsigned _nVehicular;
	unsigned _nVoice;
	unsigned _nWalking;
	unsigned _nWifiBadBcn;
	unsigned _nWifiBadLoad;
	unsigned _nWifiBadPER;
	unsigned _nWifiBadRSSI;
	unsigned _nWifiBadSNR;
	unsigned _nWifiBadTransportRTP;
	unsigned _nWifiBadTransportSymptom;
	unsigned _nWifiNotInit;
	unsigned _nWifiNotReady;
	SCD_Struct_AW26 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                                 //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL hasNCallIdle; 
@property (assign,nonatomic) unsigned nCallIdle;                             //@synthesize nCallIdle=_nCallIdle - In the implementation block
@property (assign,nonatomic) BOOL hasNCallActive; 
@property (assign,nonatomic) unsigned nCallActive;                           //@synthesize nCallActive=_nCallActive - In the implementation block
@property (assign,nonatomic) BOOL hasNData; 
@property (assign,nonatomic) unsigned nData;                                 //@synthesize nData=_nData - In the implementation block
@property (assign,nonatomic) BOOL hasNVoice; 
@property (assign,nonatomic) unsigned nVoice;                                //@synthesize nVoice=_nVoice - In the implementation block
@property (assign,nonatomic) BOOL hasNStationary; 
@property (assign,nonatomic) unsigned nStationary;                           //@synthesize nStationary=_nStationary - In the implementation block
@property (assign,nonatomic) BOOL hasNWalking; 
@property (assign,nonatomic) unsigned nWalking;                              //@synthesize nWalking=_nWalking - In the implementation block
@property (assign,nonatomic) BOOL hasNRunning; 
@property (assign,nonatomic) unsigned nRunning;                              //@synthesize nRunning=_nRunning - In the implementation block
@property (assign,nonatomic) BOOL hasNVehicular; 
@property (assign,nonatomic) unsigned nVehicular;                            //@synthesize nVehicular=_nVehicular - In the implementation block
@property (assign,nonatomic) BOOL hasNWifiNotInit; 
@property (assign,nonatomic) unsigned nWifiNotInit;                          //@synthesize nWifiNotInit=_nWifiNotInit - In the implementation block
@property (assign,nonatomic) BOOL hasNWifiNotReady; 
@property (assign,nonatomic) unsigned nWifiNotReady;                         //@synthesize nWifiNotReady=_nWifiNotReady - In the implementation block
@property (assign,nonatomic) BOOL hasNWifiBadSNR; 
@property (assign,nonatomic) unsigned nWifiBadSNR;                           //@synthesize nWifiBadSNR=_nWifiBadSNR - In the implementation block
@property (assign,nonatomic) BOOL hasNWifiBadRSSI; 
@property (assign,nonatomic) unsigned nWifiBadRSSI;                          //@synthesize nWifiBadRSSI=_nWifiBadRSSI - In the implementation block
@property (assign,nonatomic) BOOL hasNWifiBadPER; 
@property (assign,nonatomic) unsigned nWifiBadPER;                           //@synthesize nWifiBadPER=_nWifiBadPER - In the implementation block
@property (assign,nonatomic) BOOL hasNWifiBadTransportSymptom; 
@property (assign,nonatomic) unsigned nWifiBadTransportSymptom;              //@synthesize nWifiBadTransportSymptom=_nWifiBadTransportSymptom - In the implementation block
@property (assign,nonatomic) BOOL hasNWifiBadTransportRTP; 
@property (assign,nonatomic) unsigned nWifiBadTransportRTP;                  //@synthesize nWifiBadTransportRTP=_nWifiBadTransportRTP - In the implementation block
@property (assign,nonatomic) BOOL hasNWifiBadLoad; 
@property (assign,nonatomic) unsigned nWifiBadLoad;                          //@synthesize nWifiBadLoad=_nWifiBadLoad - In the implementation block
@property (assign,nonatomic) BOOL hasNWifiBadBcn; 
@property (assign,nonatomic) unsigned nWifiBadBcn;                           //@synthesize nWifiBadBcn=_nWifiBadBcn - In the implementation block
@property (assign,nonatomic) BOOL hasNCellularGood; 
@property (assign,nonatomic) unsigned nCellularGood;                         //@synthesize nCellularGood=_nCellularGood - In the implementation block
@property (assign,nonatomic) BOOL hasNPositiveStatusUpdate; 
@property (assign,nonatomic) unsigned nPositiveStatusUpdate;                 //@synthesize nPositiveStatusUpdate=_nPositiveStatusUpdate - In the implementation block
@property (assign,nonatomic) BOOL hasNNegativeStatusUpdate; 
@property (assign,nonatomic) unsigned nNegativeStatusUpdate;                 //@synthesize nNegativeStatusUpdate=_nNegativeStatusUpdate - In the implementation block
@property (assign,nonatomic) BOOL hasNUnknownStatusUpdat; 
@property (assign,nonatomic) unsigned nUnknownStatusUpdat;                   //@synthesize nUnknownStatusUpdat=_nUnknownStatusUpdat - In the implementation block
@property (assign,nonatomic) BOOL hasNStatusUpdateDelayBin1; 
@property (assign,nonatomic) unsigned nStatusUpdateDelayBin1;                //@synthesize nStatusUpdateDelayBin1=_nStatusUpdateDelayBin1 - In the implementation block
@property (assign,nonatomic) BOOL hasNStatusUpdateDelayBin2; 
@property (assign,nonatomic) unsigned nStatusUpdateDelayBin2;                //@synthesize nStatusUpdateDelayBin2=_nStatusUpdateDelayBin2 - In the implementation block
@property (assign,nonatomic) BOOL hasNStatusUpdateDelayBin3; 
@property (assign,nonatomic) unsigned nStatusUpdateDelayBin3;                //@synthesize nStatusUpdateDelayBin3=_nStatusUpdateDelayBin3 - In the implementation block
@property (assign,nonatomic) BOOL hasNStatusUpdateDelayBin4; 
@property (assign,nonatomic) unsigned nStatusUpdateDelayBin4;                //@synthesize nStatusUpdateDelayBin4=_nStatusUpdateDelayBin4 - In the implementation block
@property (assign,nonatomic) BOOL hasNStatusUpdateDelayBin5; 
@property (assign,nonatomic) unsigned nStatusUpdateDelayBin5;                //@synthesize nStatusUpdateDelayBin5=_nStatusUpdateDelayBin5 - In the implementation block
@property (assign,nonatomic) BOOL hasNStatusUpdateDelayBin6; 
@property (assign,nonatomic) unsigned nStatusUpdateDelayBin6;                //@synthesize nStatusUpdateDelayBin6=_nStatusUpdateDelayBin6 - In the implementation block
-(void)setNCallIdle:(unsigned)arg1 ;
-(void)setHasNCallIdle:(BOOL)arg1 ;
-(BOOL)hasNCallIdle;
-(void)setNCallActive:(unsigned)arg1 ;
-(void)setHasNCallActive:(BOOL)arg1 ;
-(BOOL)hasNCallActive;
-(void)setNData:(unsigned)arg1 ;
-(void)setHasNData:(BOOL)arg1 ;
-(BOOL)hasNData;
-(void)setNVoice:(unsigned)arg1 ;
-(void)setHasNVoice:(BOOL)arg1 ;
-(BOOL)hasNVoice;
-(void)setNStationary:(unsigned)arg1 ;
-(void)setHasNStationary:(BOOL)arg1 ;
-(BOOL)hasNStationary;
-(void)setNWalking:(unsigned)arg1 ;
-(void)setHasNWalking:(BOOL)arg1 ;
-(BOOL)hasNWalking;
-(void)setNRunning:(unsigned)arg1 ;
-(void)setHasNRunning:(BOOL)arg1 ;
-(BOOL)hasNRunning;
-(void)setNVehicular:(unsigned)arg1 ;
-(void)setHasNVehicular:(BOOL)arg1 ;
-(BOOL)hasNVehicular;
-(void)setNWifiNotInit:(unsigned)arg1 ;
-(void)setHasNWifiNotInit:(BOOL)arg1 ;
-(BOOL)hasNWifiNotInit;
-(void)setNWifiNotReady:(unsigned)arg1 ;
-(void)setHasNWifiNotReady:(BOOL)arg1 ;
-(BOOL)hasNWifiNotReady;
-(void)setNWifiBadSNR:(unsigned)arg1 ;
-(void)setHasNWifiBadSNR:(BOOL)arg1 ;
-(BOOL)hasNWifiBadSNR;
-(void)setNWifiBadRSSI:(unsigned)arg1 ;
-(void)setHasNWifiBadRSSI:(BOOL)arg1 ;
-(BOOL)hasNWifiBadRSSI;
-(void)setNWifiBadPER:(unsigned)arg1 ;
-(void)setHasNWifiBadPER:(BOOL)arg1 ;
-(BOOL)hasNWifiBadPER;
-(void)setNWifiBadTransportSymptom:(unsigned)arg1 ;
-(void)setHasNWifiBadTransportSymptom:(BOOL)arg1 ;
-(BOOL)hasNWifiBadTransportSymptom;
-(void)setNWifiBadTransportRTP:(unsigned)arg1 ;
-(void)setHasNWifiBadTransportRTP:(BOOL)arg1 ;
-(BOOL)hasNWifiBadTransportRTP;
-(void)setNWifiBadLoad:(unsigned)arg1 ;
-(void)setHasNWifiBadLoad:(BOOL)arg1 ;
-(BOOL)hasNWifiBadLoad;
-(void)setNWifiBadBcn:(unsigned)arg1 ;
-(void)setHasNWifiBadBcn:(BOOL)arg1 ;
-(BOOL)hasNWifiBadBcn;
-(void)setNCellularGood:(unsigned)arg1 ;
-(void)setHasNCellularGood:(BOOL)arg1 ;
-(BOOL)hasNCellularGood;
-(void)setNPositiveStatusUpdate:(unsigned)arg1 ;
-(void)setHasNPositiveStatusUpdate:(BOOL)arg1 ;
-(BOOL)hasNPositiveStatusUpdate;
-(void)setNNegativeStatusUpdate:(unsigned)arg1 ;
-(void)setHasNNegativeStatusUpdate:(BOOL)arg1 ;
-(BOOL)hasNNegativeStatusUpdate;
-(void)setNUnknownStatusUpdat:(unsigned)arg1 ;
-(void)setHasNUnknownStatusUpdat:(BOOL)arg1 ;
-(BOOL)hasNUnknownStatusUpdat;
-(void)setNStatusUpdateDelayBin1:(unsigned)arg1 ;
-(void)setHasNStatusUpdateDelayBin1:(BOOL)arg1 ;
-(BOOL)hasNStatusUpdateDelayBin1;
-(void)setNStatusUpdateDelayBin2:(unsigned)arg1 ;
-(void)setHasNStatusUpdateDelayBin2:(BOOL)arg1 ;
-(BOOL)hasNStatusUpdateDelayBin2;
-(void)setNStatusUpdateDelayBin3:(unsigned)arg1 ;
-(void)setHasNStatusUpdateDelayBin3:(BOOL)arg1 ;
-(BOOL)hasNStatusUpdateDelayBin3;
-(void)setNStatusUpdateDelayBin4:(unsigned)arg1 ;
-(void)setHasNStatusUpdateDelayBin4:(BOOL)arg1 ;
-(BOOL)hasNStatusUpdateDelayBin4;
-(void)setNStatusUpdateDelayBin5:(unsigned)arg1 ;
-(void)setHasNStatusUpdateDelayBin5:(BOOL)arg1 ;
-(BOOL)hasNStatusUpdateDelayBin5;
-(void)setNStatusUpdateDelayBin6:(unsigned)arg1 ;
-(void)setHasNStatusUpdateDelayBin6:(BOOL)arg1 ;
-(BOOL)hasNStatusUpdateDelayBin6;
-(unsigned)nCallIdle;
-(unsigned)nCallActive;
-(unsigned)nData;
-(unsigned)nVoice;
-(unsigned)nStationary;
-(unsigned)nWalking;
-(unsigned)nRunning;
-(unsigned)nVehicular;
-(unsigned)nWifiNotInit;
-(unsigned)nWifiNotReady;
-(unsigned)nWifiBadSNR;
-(unsigned)nWifiBadRSSI;
-(unsigned)nWifiBadPER;
-(unsigned)nWifiBadTransportSymptom;
-(unsigned)nWifiBadTransportRTP;
-(unsigned)nWifiBadLoad;
-(unsigned)nWifiBadBcn;
-(unsigned)nCellularGood;
-(unsigned)nPositiveStatusUpdate;
-(unsigned)nNegativeStatusUpdate;
-(unsigned)nUnknownStatusUpdat;
-(unsigned)nStatusUpdateDelayBin1;
-(unsigned)nStatusUpdateDelayBin2;
-(unsigned)nStatusUpdateDelayBin3;
-(unsigned)nStatusUpdateDelayBin4;
-(unsigned)nStatusUpdateDelayBin5;
-(unsigned)nStatusUpdateDelayBin6;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(unsigned)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
@end
