/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface HMDNotificationRegistry : HMFObject <NSSecureCoding> {

	NSMutableDictionary* _notificationRegistry;

}

@property (nonatomic,retain) NSMutableDictionary * notificationRegistry;              //@synthesize notificationRegistry=_notificationRegistry - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyForCharacteristic:(id)arg1 ;
+(id)keyForProperty:(id)arg1 mediaProfile:(id)arg2 ;
+(BOOL)doesKey:(id)arg1 matchMediaProfile:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(NSMutableDictionary *)notificationRegistry;
-(void)setNotificationRegistry:(NSMutableDictionary *)arg1 ;
-(void)deregisterUsers:(id)arg1 forHome:(id)arg2 ;
-(id)usersRegisteredForNotificationsForCharacteristics:(id)arg1 ;
-(void)auditUsersForNotifications:(id)arg1 forHome:(id)arg2 ;
-(BOOL)enableNotificationForCharacteristics:(id)arg1 forUser:(id)arg2 ;
-(BOOL)disableNotificationForCharacteristics:(id)arg1 forUser:(id)arg2 characteristicsToDisableEvents:(id*)arg3 ;
-(BOOL)enableNotificationForProperties:(id)arg1 forUser:(id)arg2 ;
-(BOOL)disableNotificationForProperties:(id)arg1 forUser:(id)arg2 ;
-(id)allCharacteristicIdentifiers;
-(BOOL)removeRegistrationsForMediaProfile:(id)arg1 ;
-(id)filterCharacteristics:(id)arg1 forUser:(id)arg2 ;
-(id)usersRegisteredForNotificationsForProperties:(id)arg1 ;
-(id)filterProperties:(id)arg1 forUser:(id)arg2 ;
-(void)disableNotification:(id)arg1 user:(id)arg2 ignoreLockReq:(BOOL)arg3 home:(id)arg4 ;
@end
