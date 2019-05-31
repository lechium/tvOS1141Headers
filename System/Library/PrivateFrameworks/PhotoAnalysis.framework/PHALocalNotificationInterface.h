/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PHALocalNotificationInterface : NSObject {

	BOOL _isNotificationRegistered;

}

@property (assign) BOOL isNotificationRegistered;              //@synthesize isNotificationRegistered=_isNotificationRegistered - In the implementation block
+(id)localNotificationInterface;
-(id)init;
-(void)fireLocalNotificationWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isNotificationRegistered;
-(void)setIsNotificationRegistered:(BOOL)arg1 ;
@end

