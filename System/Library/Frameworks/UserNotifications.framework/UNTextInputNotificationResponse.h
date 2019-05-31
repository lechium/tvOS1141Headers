/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UNNotificationResponse.h>

@class NSString;

@interface UNTextInputNotificationResponse : UNNotificationResponse {

	NSString* _userText;

}

@property (nonatomic,copy,readonly) NSString * userText;              //@synthesize userText=_userText - In the implementation block
+(id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 actionOptions:(unsigned long long)arg3 ;
+(id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 actionOptions:(unsigned long long)arg3 userText:(id)arg4 ;
+(BOOL)supportsSecureCoding;
+(id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3 ;
-(id)_initWithNotification:(id)arg1 actionIdentifier:(id)arg2 actionOptions:(unsigned long long)arg3 userText:(id)arg4 ;
-(NSString *)userText;
-(id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2 userText:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

