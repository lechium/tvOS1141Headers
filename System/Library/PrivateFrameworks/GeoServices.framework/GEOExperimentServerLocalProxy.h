/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/GEOExperimentServerProxy.h>

@protocol GEOExperimentServerProxyDelegate;
@class GEOABAssignmentResponse, NSLock, GEOABAssignmentRequest, NSString;

@interface GEOExperimentServerLocalProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOExperimentServerProxy> {

	id<GEOExperimentServerProxyDelegate> _delegate;
	GEOABAssignmentResponse* _experimentsInfo;
	NSLock* _experimentsInfoLock;
	GEOABAssignmentRequest* _currentRequest;
	NSLock* _currentRequestLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<GEOExperimentServerProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) GEOABAssignmentResponse * experimentsInfo; 
-(void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3 ;
-(void)abAssignUUIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(GEOABAssignmentResponse *)experimentsInfo;
-(void)forceUpdate;
-(void)refreshDatasetABStatus:(id)arg1 ;
-(void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3 ;
-(void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)arg1 ;
-(void)_debug_setBucketIdDictionaryRepresentation:(id)arg1 ;
-(void)_debug_fetchAllAvailableExperiments:(/*^block*/id)arg1 ;
-(void)_setupRefreshActivity;
-(void)_executeRefreshWithinTime:(double)arg1 ;
-(void)_invalidateTileCache:(BOOL)arg1 placesCache:(BOOL)arg2 ;
-(BOOL)_removeOldExperimentsInfoIfNecessary;
-(void)_updateIfNecessary;
-(void)_writeExperimentInfoToDisk:(id)arg1 ;
-(void)_loadExperimentsConfiguration:(/*^block*/id)arg1 ;
-(void)_deleteExperimentInfoFromDisk;
-(id<GEOExperimentServerProxyDelegate>)delegate;
-(void)setDelegate:(id<GEOExperimentServerProxyDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
@end

