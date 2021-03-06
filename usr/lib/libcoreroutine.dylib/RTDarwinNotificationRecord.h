/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface RTDarwinNotificationRecord : NSObject {

	NSString* _notificationName;
	NSNumber* _registrationToken;
	/*^block*/id _handler;

}

@property (nonatomic,copy) NSString * notificationName;               //@synthesize notificationName=_notificationName - In the implementation block
@property (nonatomic,copy) NSNumber * registrationToken;              //@synthesize registrationToken=_registrationToken - In the implementation block
@property (nonatomic,copy) id handler;                                //@synthesize handler=_handler - In the implementation block
-(id)init;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(id)initWithNotificationName:(id)arg1 registrationToken:(id)arg2 handler:(/*^block*/id)arg3 ;
-(NSString *)notificationName;
-(void)setNotificationName:(NSString *)arg1 ;
-(NSNumber *)registrationToken;
-(void)setRegistrationToken:(NSNumber *)arg1 ;
@end

