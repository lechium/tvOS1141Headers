/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface UIViewPropertyAnimatorTrackingState : NSObject {

	BOOL _startPaused;
	BOOL _scrubsLinearly;
	BOOL _userInteractionEnabled;
	BOOL _optimizationsEnabled;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) NSUUID * uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL startPaused;                         //@synthesize startPaused=_startPaused - In the implementation block
@property (assign,nonatomic) BOOL scrubsLinearly;                      //@synthesize scrubsLinearly=_scrubsLinearly - In the implementation block
@property (assign,nonatomic) BOOL userInteractionEnabled;              //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (assign,nonatomic) BOOL optimizationsEnabled;                //@synthesize optimizationsEnabled=_optimizationsEnabled - In the implementation block
-(id)init;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(NSUUID *)uuid;
-(BOOL)startPaused;
-(void)setStartPaused:(BOOL)arg1 ;
-(BOOL)scrubsLinearly;
-(void)setScrubsLinearly:(BOOL)arg1 ;
-(BOOL)userInteractionEnabled;
-(BOOL)optimizationsEnabled;
-(void)setOptimizationsEnabled:(BOOL)arg1 ;
@end

