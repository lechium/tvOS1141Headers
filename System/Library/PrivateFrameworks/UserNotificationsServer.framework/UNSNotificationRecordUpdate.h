/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UNSNotificationRecord;

@interface UNSNotificationRecordUpdate : NSObject {

	UNSNotificationRecord* _notificationRecord;

}

@property (nonatomic,readonly) UNSNotificationRecord * notificationRecord;              //@synthesize notificationRecord=_notificationRecord - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(UNSNotificationRecord *)notificationRecord;
-(id)_initWithNotificationRecord:(id)arg1 ;
@end
