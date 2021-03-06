/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_tcp_connection;
@class NWEndpoint, NSArray, NSObject, NWParameters, NSString, NSDictionary, NSData, NWPath, NSError;

@interface NWTCPConnection : NSObject <NWPrettyDescription> {

	BOOL _viable;
	BOOL _hasBetterPath;
	long long _state;
	NWEndpoint* _endpoint;
	NSArray* _certificateChain;
	NSObject*<OS_tcp_connection> _internalConnection;
	id _delegate;
	NWParameters* _parameters;

}

@property (retain) NSArray * certificateChain;                                                 //@synthesize certificateChain=_certificateChain - In the implementation block
@property (nonatomic,retain) NWEndpoint * endpoint;                                            //@synthesize endpoint=_endpoint - In the implementation block
@property (retain) NSObject*<OS_tcp_connection> internalConnection;                            //@synthesize internalConnection=_internalConnection - In the implementation block
@property (assign,nonatomic) long long state;                                                  //@synthesize state=_state - In the implementation block
@property (assign,getter=isViable,nonatomic) BOOL viable;                                      //@synthesize viable=_viable - In the implementation block
@property (assign,nonatomic) BOOL hasBetterPath;                                               //@synthesize hasBetterPath=_hasBetterPath - In the implementation block
@property (__weak) id delegate;                                                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NWParameters * parameters;                                      //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy,readonly) NSString * privateDescription; 
@property (nonatomic,readonly) BOOL TFOSucceeded; 
@property (nonatomic,readonly) BOOL isMultipath; 
@property (nonatomic,readonly) unsigned long long multipathSubflowCount; 
@property (nonatomic,readonly) unsigned long long multipathConnectedSubflowCount; 
@property (nonatomic,readonly) int multipathPrimarySubflowInterfaceIndex; 
@property (nonatomic,readonly) NSDictionary * multipathSubflowSwitchCounts; 
@property (nonatomic,readonly) NSDictionary * TCPInfo; 
@property (nonatomic,readonly) NSData * metadata; 
@property (nonatomic,readonly) NWPath * connectedPath; 
@property (nonatomic,readonly) NWEndpoint * localAddress; 
@property (nonatomic,readonly) NWEndpoint * remoteAddress; 
@property (nonatomic,readonly) NSData * txtRecord; 
@property (nonatomic,readonly) NSError * error; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)stringFromNWTCPConnectionState:(long long)arg1 ;
-(NSData *)metadata;
-(NSError *)error;
-(void)cancel;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NWParameters *)parameters;
-(NWEndpoint *)endpoint;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(id)initWithAcceptedInternalConnection:(id)arg1 ;
-(id)initWithUpgradeForConnection:(id)arg1 ;
-(NSData *)txtRecord;
-(void)readLength:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)readToPattern:(id)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 timeout:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeClose;
-(void)cleanupPreviousTLSIdentity;
-(SecTrustRef)createTrustEvaluationFromCertificateChain:(id)arg1 peerHostname:(id)arg2 ;
-(int)setRequiredPropertiesOnContext:(nw_tls_contextRef)arg1 fromTrust:(SecTrustRef)arg2 ;
-(void)handlePeerCertificateTrustEvaluationWithContext:(nw_tls_contextRef)arg1 resumptionHandler:(/*^block*/id)arg2 ;
-(int)setRequiredPropertiesOnContext:(nw_tls_contextRef)arg1 fromIdentity:(SecIdentityRef)arg2 certificateChain:(id)arg3 ;
-(void)handlePrepareTLSContext:(nw_tls_contextRef)arg1 ;
-(void)handleIdentityRequestWithContext:(nw_tls_contextRef)arg1 resumptionHandler:(/*^block*/id)arg2 ;
-(void)setupEventHandler;
-(BOOL)fillOutTCPConnectionInfo:(tcp_connection_info*)arg1 ;
-(BOOL)isViable;
-(void)setViable:(BOOL)arg1 ;
-(BOOL)hasBetterPath;
-(void)setHasBetterPath:(BOOL)arg1 ;
-(void)setCertificateChain:(NSArray *)arg1 ;
-(NSObject*<OS_tcp_connection>)internalConnection;
-(void)setInternalConnection:(NSObject*<OS_tcp_connection>)arg1 ;
-(NSString *)privateDescription;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3 ;
-(NSDictionary *)TCPInfo;
-(BOOL)isMultipath;
-(unsigned long long)multipathSubflowCount;
-(unsigned long long)multipathConnectedSubflowCount;
-(int)multipathPrimarySubflowInterfaceIndex;
-(NSDictionary *)multipathSubflowSwitchCounts;
-(BOOL)TFOSucceeded;
-(void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)write:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NWPath *)connectedPath;
-(NSArray *)certificateChain;
-(BOOL)startInternal;
-(NWEndpoint *)remoteAddress;
-(NWEndpoint *)localAddress;
-(void)setEndpoint:(NWEndpoint *)arg1 ;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
@end

