/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSNumber, NSString, UNNotificationSound, NSDictionary;

@interface UNNotificationContent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSArray* _attachments;
	NSNumber* _badge;
	NSString* _body;
	NSString* _categoryIdentifier;
	NSString* _darwinNotificationName;
	NSString* _darwinSnoozedNotificationName;
	NSString* _defaultActionTitle;
	BOOL _fromSnooze;
	BOOL _hasDefautAction;
	NSString* _launchImageName;
	NSArray* _peopleIdentifiers;
	BOOL _shouldAddToNotificationsList;
	BOOL _shouldAlwaysAlertWhileAppIsForeground;
	BOOL _shouldLockDevice;
	BOOL _shouldPauseMedia;
	BOOL _snoozeable;
	UNNotificationSound* _sound;
	NSString* _subtitle;
	NSString* _threadIdentifier;
	NSString* _title;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSArray * peopleIdentifiers;                           //@synthesize peopleIdentifiers=_peopleIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL hasDefaultAction;                                      //@synthesize hasDefautAction=_hasDefautAction - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultActionTitle;                         //@synthesize defaultActionTitle=_defaultActionTitle - In the implementation block
@property (nonatomic,readonly) BOOL shouldAddToNotificationsList;                          //@synthesize shouldAddToNotificationsList=_shouldAddToNotificationsList - In the implementation block
@property (nonatomic,readonly) BOOL shouldAlwaysAlertWhileAppIsForeground;                 //@synthesize shouldAlwaysAlertWhileAppIsForeground=_shouldAlwaysAlertWhileAppIsForeground - In the implementation block
@property (nonatomic,readonly) BOOL shouldLockDevice;                                      //@synthesize shouldLockDevice=_shouldLockDevice - In the implementation block
@property (nonatomic,readonly) BOOL shouldPauseMedia;                                      //@synthesize shouldPauseMedia=_shouldPauseMedia - In the implementation block
@property (getter=isSnoozeable,nonatomic,readonly) BOOL snoozeable;                        //@synthesize snoozeable=_snoozeable - In the implementation block
@property (getter=isFromSnooze,nonatomic,readonly) BOOL fromSnooze;                        //@synthesize fromSnooze=_fromSnooze - In the implementation block
@property (nonatomic,copy,readonly) NSString * darwinNotificationName;                     //@synthesize darwinNotificationName=_darwinNotificationName - In the implementation block
@property (nonatomic,copy,readonly) NSString * darwinSnoozedNotificationName;              //@synthesize darwinSnoozedNotificationName=_darwinSnoozedNotificationName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * attachments;                                 //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * badge;                                      //@synthesize badge=_badge - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                                       //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * categoryIdentifier;                         //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * launchImageName;                            //@synthesize launchImageName=_launchImageName - In the implementation block
@property (nonatomic,copy,readonly) UNNotificationSound * sound;                           //@synthesize sound=_sound - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * threadIdentifier;                           //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                               //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_initWithAttachments:(id)arg1 badge:(id)arg2 body:(id)arg3 categoryIdentifier:(id)arg4 darwinNotificationName:(id)arg5 darwinSnoozedNotificationName:(id)arg6 fromSnooze:(BOOL)arg7 hasDefaultAction:(BOOL)arg8 defaultActionTitle:(id)arg9 launchImageName:(id)arg10 peopleIdentifiers:(id)arg11 shouldAddToNotificationsList:(BOOL)arg12 shouldAlwaysAlertWhileAppIsForeground:(BOOL)arg13 shouldLockDevice:(BOOL)arg14 shouldPauseMedia:(BOOL)arg15 snoozeable:(BOOL)arg16 sound:(id)arg17 subtitle:(id)arg18 threadIdentifier:(id)arg19 title:(id)arg20 userInfo:(id)arg21 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)userInfo;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)body;
-(NSString *)subtitle;
-(BOOL)isFromSnooze;
-(NSString *)threadIdentifier;
-(UNNotificationSound *)sound;
-(NSString *)launchImageName;
-(NSString *)categoryIdentifier;
-(BOOL)isSnoozeable;
-(NSNumber *)badge;
-(NSString *)darwinNotificationName;
-(BOOL)shouldAlwaysAlertWhileAppIsForeground;
-(BOOL)hasDefaultAction;
-(NSString *)defaultActionTitle;
-(BOOL)shouldLockDevice;
-(BOOL)shouldPauseMedia;
-(NSString *)darwinSnoozedNotificationName;
-(BOOL)shouldAddToNotificationsList;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)attachments;
-(NSArray *)peopleIdentifiers;
@end

