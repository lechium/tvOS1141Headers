/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOClientNetworkTransactionMetrics : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _connectEnd;
	double _connectStart;
	double _domainLookupEnd;
	double _domainLookupStart;
	double _fetchStart;
	double _requestEnd;
	double _requestStart;
	double _responseEnd;
	double _responseStart;
	double _secureConnectEnd;
	double _secureConnectStart;
	int _protocolName;
	int _resourceFetchType;
	BOOL _proxyConnection;
	BOOL _reusedConnection;
	SCD_Struct_GE84 _has;

}

@property (assign,nonatomic) BOOL hasFetchStart; 
@property (assign,nonatomic) double fetchStart;                              //@synthesize fetchStart=_fetchStart - In the implementation block
@property (assign,nonatomic) BOOL hasDomainLookupStart; 
@property (assign,nonatomic) double domainLookupStart;                       //@synthesize domainLookupStart=_domainLookupStart - In the implementation block
@property (assign,nonatomic) BOOL hasDomainLookupEnd; 
@property (assign,nonatomic) double domainLookupEnd;                         //@synthesize domainLookupEnd=_domainLookupEnd - In the implementation block
@property (assign,nonatomic) BOOL hasConnectStart; 
@property (assign,nonatomic) double connectStart;                            //@synthesize connectStart=_connectStart - In the implementation block
@property (assign,nonatomic) BOOL hasSecureConnectStart; 
@property (assign,nonatomic) double secureConnectStart;                      //@synthesize secureConnectStart=_secureConnectStart - In the implementation block
@property (assign,nonatomic) BOOL hasSecureConnectEnd; 
@property (assign,nonatomic) double secureConnectEnd;                        //@synthesize secureConnectEnd=_secureConnectEnd - In the implementation block
@property (assign,nonatomic) BOOL hasConnectEnd; 
@property (assign,nonatomic) double connectEnd;                              //@synthesize connectEnd=_connectEnd - In the implementation block
@property (assign,nonatomic) BOOL hasRequestStart; 
@property (assign,nonatomic) double requestStart;                            //@synthesize requestStart=_requestStart - In the implementation block
@property (assign,nonatomic) BOOL hasRequestEnd; 
@property (assign,nonatomic) double requestEnd;                              //@synthesize requestEnd=_requestEnd - In the implementation block
@property (assign,nonatomic) BOOL hasResponseStart; 
@property (assign,nonatomic) double responseStart;                           //@synthesize responseStart=_responseStart - In the implementation block
@property (assign,nonatomic) BOOL hasResponseEnd; 
@property (assign,nonatomic) double responseEnd;                             //@synthesize responseEnd=_responseEnd - In the implementation block
@property (assign,nonatomic) BOOL hasProtocolName; 
@property (assign,nonatomic) int protocolName;                               //@synthesize protocolName=_protocolName - In the implementation block
@property (assign,nonatomic) BOOL hasProxyConnection; 
@property (assign,nonatomic) BOOL proxyConnection;                           //@synthesize proxyConnection=_proxyConnection - In the implementation block
@property (assign,nonatomic) BOOL hasReusedConnection; 
@property (assign,nonatomic) BOOL reusedConnection;                          //@synthesize reusedConnection=_reusedConnection - In the implementation block
@property (assign,nonatomic) BOOL hasResourceFetchType; 
@property (assign,nonatomic) int resourceFetchType;                          //@synthesize resourceFetchType=_resourceFetchType - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setResourceFetchType:(int)arg1 ;
-(int)resourceFetchType;
-(void)setProtocolName:(int)arg1 ;
-(void)setReusedConnection:(BOOL)arg1 ;
-(BOOL)reusedConnection;
-(void)setProxyConnection:(BOOL)arg1 ;
-(BOOL)proxyConnection;
-(void)setSecureConnectEnd:(double)arg1 ;
-(double)secureConnectEnd;
-(void)setSecureConnectStart:(double)arg1 ;
-(double)secureConnectStart;
-(void)setConnectEnd:(double)arg1 ;
-(double)connectEnd;
-(void)setConnectStart:(double)arg1 ;
-(double)connectStart;
-(void)setDomainLookupEnd:(double)arg1 ;
-(double)domainLookupEnd;
-(void)setDomainLookupStart:(double)arg1 ;
-(double)domainLookupStart;
-(void)setFetchStart:(double)arg1 ;
-(double)fetchStart;
-(void)setRequestEnd:(double)arg1 ;
-(double)requestEnd;
-(void)setRequestStart:(double)arg1 ;
-(double)requestStart;
-(void)setHasRequestStart:(BOOL)arg1 ;
-(BOOL)hasRequestStart;
-(void)setHasRequestEnd:(BOOL)arg1 ;
-(BOOL)hasRequestEnd;
-(int)protocolName;
-(void)setHasFetchStart:(BOOL)arg1 ;
-(BOOL)hasFetchStart;
-(void)setHasDomainLookupStart:(BOOL)arg1 ;
-(BOOL)hasDomainLookupStart;
-(void)setHasDomainLookupEnd:(BOOL)arg1 ;
-(BOOL)hasDomainLookupEnd;
-(void)setHasConnectStart:(BOOL)arg1 ;
-(BOOL)hasConnectStart;
-(void)setHasSecureConnectStart:(BOOL)arg1 ;
-(BOOL)hasSecureConnectStart;
-(void)setHasSecureConnectEnd:(BOOL)arg1 ;
-(BOOL)hasSecureConnectEnd;
-(void)setHasConnectEnd:(BOOL)arg1 ;
-(BOOL)hasConnectEnd;
-(void)setResponseStart:(double)arg1 ;
-(void)setHasResponseStart:(BOOL)arg1 ;
-(BOOL)hasResponseStart;
-(void)setResponseEnd:(double)arg1 ;
-(void)setHasResponseEnd:(BOOL)arg1 ;
-(BOOL)hasResponseEnd;
-(void)setHasProtocolName:(BOOL)arg1 ;
-(BOOL)hasProtocolName;
-(id)protocolNameAsString:(int)arg1 ;
-(int)StringAsProtocolName:(id)arg1 ;
-(void)setHasProxyConnection:(BOOL)arg1 ;
-(BOOL)hasProxyConnection;
-(void)setHasReusedConnection:(BOOL)arg1 ;
-(BOOL)hasReusedConnection;
-(void)setHasResourceFetchType:(BOOL)arg1 ;
-(BOOL)hasResourceFetchType;
-(id)resourceFetchTypeAsString:(int)arg1 ;
-(int)StringAsResourceFetchType:(id)arg1 ;
-(double)responseStart;
-(double)responseEnd;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

