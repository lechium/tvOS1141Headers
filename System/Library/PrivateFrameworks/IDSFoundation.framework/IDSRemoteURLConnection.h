/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSURLRequest, NSString, NSObject;

@interface IDSRemoteURLConnection : NSObject {

	NSURLRequest* _request;
	NSString* _bundleIdentifierForDataUsage;
	/*^block*/id _block;
	NSObject*<OS_xpc_object> _connection;
	BOOL _cancelled;
	BOOL _loading;
	BOOL _forceCellularIfPossible;
	BOOL _alwaysForceCellular;
	int _retries;
	BOOL _requireIDSHost;
	BOOL _shouldUsePipelining;
	int _concurrentConnections;
	BOOL _disableKeepAlive;
	int _keepAliveWifi;
	int _keepAliveCell;
	BOOL _shouldReturnTimingData;

}

@property (assign) BOOL requireIDSHost;                                  //@synthesize requireIDSHost=_requireIDSHost - In the implementation block
@property (assign) BOOL forceCellularIfPossible;                         //@synthesize forceCellularIfPossible=_forceCellularIfPossible - In the implementation block
@property (assign) BOOL alwaysForceCellular;                             //@synthesize alwaysForceCellular=_alwaysForceCellular - In the implementation block
@property (retain) NSString * bundleIdentifierForDataUsage;              //@synthesize bundleIdentifierForDataUsage=_bundleIdentifierForDataUsage - In the implementation block
@property (assign) BOOL shouldUsePipelining;                             //@synthesize shouldUsePipelining=_shouldUsePipelining - In the implementation block
@property (assign) int concurrentConnections;                            //@synthesize concurrentConnections=_concurrentConnections - In the implementation block
@property (assign) BOOL disableKeepAlive;                                //@synthesize disableKeepAlive=_disableKeepAlive - In the implementation block
@property (assign) int keepAliveWifi;                                    //@synthesize keepAliveWifi=_keepAliveWifi - In the implementation block
@property (assign) int keepAliveCell;                                    //@synthesize keepAliveCell=_keepAliveCell - In the implementation block
@property (assign) BOOL shouldReturnTimingData;                          //@synthesize shouldReturnTimingData=_shouldReturnTimingData - In the implementation block
@property (retain) NSURLRequest * request;                               //@synthesize request=_request - In the implementation block
@property (copy) id block;                                               //@synthesize block=_block - In the implementation block
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)cancel;
-(void)dealloc;
-(NSURLRequest *)request;
-(BOOL)_disconnect;
-(void)load;
-(id)initWithURLRequest:(id)arg1 completionBlockWithTimingData:(/*^block*/id)arg2 ;
-(void)setRequireIDSHost:(BOOL)arg1 ;
-(void)_disconnected;
-(BOOL)_connect;
-(NSString *)bundleIdentifierForDataUsage;
-(BOOL)forceCellularIfPossible;
-(BOOL)alwaysForceCellular;
-(BOOL)requireIDSHost;
-(BOOL)shouldUsePipelining;
-(int)concurrentConnections;
-(BOOL)disableKeepAlive;
-(int)keepAliveWifi;
-(int)keepAliveCell;
-(BOOL)shouldReturnTimingData;
-(void)setForceCellularIfPossible:(BOOL)arg1 ;
-(void)setBundleIdentifierForDataUsage:(NSString *)arg1 ;
-(void)setShouldUsePipelining:(BOOL)arg1 ;
-(void)setConcurrentConnections:(int)arg1 ;
-(void)setDisableKeepAlive:(BOOL)arg1 ;
-(void)setKeepAliveWifi:(int)arg1 ;
-(void)setKeepAliveCell:(int)arg1 ;
-(void)setShouldReturnTimingData:(BOOL)arg1 ;
-(void)setAlwaysForceCellular:(BOOL)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)block;
-(id)initWithURLRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

