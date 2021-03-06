/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXMFeatureTracker, AXMTimer;

@interface _AXMFeatureTrackerContainer : NSObject {

	AXMFeatureTracker* _tracker;
	AXMTimer* _activeTimer;

}

@property (nonatomic,retain) AXMFeatureTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,retain) AXMTimer * activeTimer;                   //@synthesize activeTimer=_activeTimer - In the implementation block
-(id)initWithFeature:(id)arg1 queue:(id)arg2 ;
-(AXMFeatureTracker *)tracker;
-(void)setTracker:(AXMFeatureTracker *)arg1 ;
-(AXMTimer *)activeTimer;
-(void)setActiveTimer:(AXMTimer *)arg1 ;
@end

