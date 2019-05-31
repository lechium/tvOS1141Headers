/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMActivityManager : NSObject {

	id _internal;

}

@property (copy) id activityHandler; 
@property (getter=isActivityAvailable,nonatomic,readonly) BOOL activityAvailable; 
-(long long)overrideOscarSideband:(BOOL)arg1 withState:(long long)arg2 ;
-(long long)simulateMotionState:(BOOL)arg1 withState:(long long)arg2 ;
-(id)activityHandler;
-(id)init;
-(void)dealloc;
-(void)setActivityHandler:(id)arg1 ;
-(BOOL)isActivityAvailable;
@end
