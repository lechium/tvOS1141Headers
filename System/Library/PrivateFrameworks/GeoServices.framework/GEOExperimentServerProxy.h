/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOABAssignmentResponse;


@protocol GEOExperimentServerProxy <NSObject>
@property (assign,nonatomic,__weak) id<GEOExperimentServerProxyDelegate> delegate; 
@property (nonatomic,readonly) GEOABAssignmentResponse * experimentsInfo; 
@required
-(void)abAssignUUIDWithCompletionHandler:(/*^block*/id)arg1;
-(GEOABAssignmentResponse *)experimentsInfo;
-(void)forceUpdate;
-(void)refreshDatasetABStatus:(id)arg1;
-(void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
-(void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)arg1;
-(void)_debug_setBucketIdDictionaryRepresentation:(id)arg1;
-(void)_debug_fetchAllAvailableExperiments:(/*^block*/id)arg1;
-(id<GEOExperimentServerProxyDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)initWithDelegate:(id)arg1;

@end
