/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NWEndpoint, NWPath, NWDatagramConnection, NWParameters, NSString;

@interface NWUDPSession : NSObject {

	BOOL _viable;
	BOOL _hasBetterPath;
	long long _state;
	NWEndpoint* _endpoint;
	NWEndpoint* _resolvedEndpoint;
	NWPath* _currentPath;
	NWDatagramConnection* _connection;
	unsigned long long _maxReadDatagrams;
	/*^block*/id _readHandler;
	unsigned long long _internalMTU;
	NWParameters* _parameters;

}

@property (retain) NWDatagramConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (assign) unsigned long long maxReadDatagrams;                               //@synthesize maxReadDatagrams=_maxReadDatagrams - In the implementation block
@property (copy) id readHandler;                                                      //@synthesize readHandler=_readHandler - In the implementation block
@property (nonatomic,retain) NWEndpoint * resolvedEndpoint;                           //@synthesize resolvedEndpoint=_resolvedEndpoint - In the implementation block
@property (nonatomic,retain) NWPath * currentPath;                                    //@synthesize currentPath=_currentPath - In the implementation block
@property (assign,getter=isViable,nonatomic) BOOL viable;                             //@synthesize viable=_viable - In the implementation block
@property (assign,nonatomic) BOOL hasBetterPath;                                      //@synthesize hasBetterPath=_hasBetterPath - In the implementation block
@property (assign,nonatomic) long long state;                                         //@synthesize state=_state - In the implementation block
@property (assign) unsigned long long internalMTU;                                    //@synthesize internalMTU=_internalMTU - In the implementation block
@property (readonly) NWParameters * parameters;                                       //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NSString * localPort; 
@property (nonatomic,copy,readonly) NSString * privateDescription; 
@property (readonly) NWEndpoint * endpoint;                                           //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumDatagramLength; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NWParameters *)parameters;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NWPath *)currentPath;
-(void)setCurrentPath:(NWPath *)arg1 ;
-(NWDatagramConnection *)connection;
-(void)setConnection:(NWDatagramConnection *)arg1 ;
-(NWEndpoint *)endpoint;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(void)setupEventHandler;
-(BOOL)isViable;
-(void)setViable:(BOOL)arg1 ;
-(BOOL)hasBetterPath;
-(void)setHasBetterPath:(BOOL)arg1 ;
-(id)initWithConnectedSocket:(int)arg1 ;
-(id)initWithUpgradeForSession:(id)arg1 ;
-(void)tryNextResolvedEndpoint;
-(unsigned long long)maximumDatagramLength;
-(void)readInternal;
-(void)writeMultipleDatagrams:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)localPort;
-(NWEndpoint *)resolvedEndpoint;
-(void)setResolvedEndpoint:(NWEndpoint *)arg1 ;
-(unsigned long long)maxReadDatagrams;
-(void)setMaxReadDatagrams:(unsigned long long)arg1 ;
-(unsigned long long)internalMTU;
-(void)setInternalMTU:(unsigned long long)arg1 ;
-(NSString *)privateDescription;
-(void)setReadHandler:(/*^block*/id)arg1 maxDatagrams:(unsigned long long)arg2 ;
-(void)writeDatagram:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setReadHandler:(id)arg1 ;
-(id)readHandler;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
@end

