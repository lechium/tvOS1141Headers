/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMGestureManager : NSObject {

	id _internal;

}

@property (copy) id gestureHandler; 
+(BOOL)isGestureServiceEnabled;
+(BOOL)isGestureServiceAvailable;
+(void)setGestureServiceEnabled:(BOOL)arg1 ;
-(id)gestureHandler;
-(id)init;
-(void)dealloc;
-(void)setGestureHandler:(id)arg1 ;
-(id)initWithPriority:(int)arg1 ;
@end

