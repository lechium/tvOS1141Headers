/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileRequester.h>
#import <libobjc.A.dylib/GEOSimpleTileRequesterSubclass.h>
#import <libobjc.A.dylib/GEOSimpleTileRequesterOperationDelegate.h>

@protocol OS_os_activity, OS_voucher, OS_dispatch_queue;
@class GEOTileRequestBalancer, NSMutableArray, NSObject, GEODataSession, NSString;

@interface GEOSimpleTileRequester : GEOTileRequester <GEOSimpleTileRequesterSubclass, GEOSimpleTileRequesterOperationDelegate> {

	GEOTileRequestBalancer* _balancer;
	NSMutableArray* _running;
	NSMutableArray* _errors;
	NSObject*<OS_os_activity> _activity;
	NSObject*<OS_voucher> _voucher;
	NSObject*<OS_dispatch_queue> _workQueue;
	GEODataSession* _dataSession;
	unsigned _qos;
	GEOOnce_s _didStart;
	GEOOnce_s _didCallDelegate;
	BOOL _cancelled;
	BOOL _subclassImplementsTileEdition;
	BOOL _hasRemainingTileKeys;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_os_activity> activity;                  //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) GEOTileRequestBalancer * balancer;                   //@synthesize balancer=_balancer - In the implementation block
@property (nonatomic,retain) GEODataSession * dataSession;                          //@synthesize dataSession=_dataSession - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
+(unsigned char)eTagType;
-(id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 ;
-(void)_updateRunningCountAndCheckIfDone;
-(void)_didStartOperationsForAllTileKeys;
-(void)_checkIfDone;
-(void)_notifyDelegateDone:(/*^block*/id)arg1 ;
-(id)_createOperationsForTileKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 ;
-(void)createRequest:(id*)arg1 localizationRequest:(id*)arg2 forKey:(const GEOTileKey*)arg3 ;
-(void)_startOperation:(id)arg1 ;
-(id)newRequestWithType:(int)arg1 URL:(id)arg2 xpcRequest:(id)arg3 entityTag:(id)arg4 cachedData:(id)arg5 allowedRequestMode:(char)arg6 requestCounterTicket:(id)arg7 ;
-(void)_cancelAllRunningOperations;
-(void)cancelKey:(const GEOTileKey*)arg1 ;
-(void)_cancelKey:(GEOTileKey)arg1 ;
-(void)reprioritizeKey:(const GEOTileKey*)arg1 newPriority:(unsigned)arg2 ;
-(void)_reprioritizeKey:(GEOTileKey)arg1 newPriority:(unsigned)arg2 ;
-(void)_addRunningOperation:(id)arg1 ;
-(BOOL)_removeRunningOperation:(id)arg1 ;
-(BOOL)_isRunningOperation:(id)arg1 ;
-(id)removeOperationsForKey:(const GEOTileKey*)arg1 ;
-(id)operationsForKey:(const GEOTileKey*)arg1 ;
-(GEODataSession *)dataSession;
-(void)setDataSession:(GEODataSession *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(GEOTileRequestBalancer *)balancer;
-(BOOL)allowsCookies;
-(id)localizationURLForTileKey:(const GEOTileKey*)arg1 ;
-(id)urlForTileKey:(const GEOTileKey*)arg1 ;
-(id)editionHeader;
-(unsigned)tileEditionForKey:(const GEOTileKey*)arg1 ;
-(int)checksumMethodForIncomingTileDataWithKey:(GEOTileKey*)arg1 ;
-(id)newXPCDataRequestForTileKey:(const GEOTileKey*)arg1 ;
-(id)mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2 ;
-(BOOL)tileDataIsCacheableForTileKey:(const GEOTileKey*)arg1 ;
-(void)operationFinished:(id)arg1 ;
-(void)operationFailed:(id)arg1 error:(id)arg2 ;
-(id)verifyDataIntegrity:(id)arg1 checksumMethod:(int)arg2 ;
-(id)createOperationsForTileKey:(GEOTileKey)arg1 priority:(unsigned)arg2 ;
-(void)startOperations:(id)arg1 ;
-(void)didStartOperationsForAllTileKeys;
-(id)mergeBaseTileEtag:(id)arg1 withLocalizationTileEtag:(id)arg2 ;
-(void)_operationFinished:(id)arg1 ;
-(void)_operationFailed:(id)arg1 error:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(BOOL)isRunning;
-(void)start;
-(void)_cleanup;
-(void)_cancel;
-(NSObject*<OS_os_activity>)activity;
@end

