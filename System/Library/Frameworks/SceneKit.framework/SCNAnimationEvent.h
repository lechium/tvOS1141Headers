/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCNAnimationEvent : NSObject {

	double _eventTime;
	/*^block*/id _eventBlock;

}
+(id)animationEventWithKeyTime:(double)arg1 block:(/*^block*/id)arg2 ;
-(double)time;
-(void)setTime:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setEventBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)eventBlock;
@end

