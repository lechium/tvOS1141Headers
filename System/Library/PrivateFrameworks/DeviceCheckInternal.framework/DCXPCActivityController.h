/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DCXPCActivityController : NSObject
+(id)sharedInstance;
-(void)start;
-(void)_registerActivityWithInterval:(double)arg1 ;
-(void)_performMetadataRefreshForActivity:(id)arg1 ;
-(id)_activityCriteriaWithFrequency:(double)arg1 ;
-(void)updateActivityScheduleWithAsset:(id)arg1 ;
@end

