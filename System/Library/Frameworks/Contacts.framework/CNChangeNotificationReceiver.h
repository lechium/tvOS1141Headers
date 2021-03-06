/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNChangeNotificationReceiver <NSObject>
@property (assign,nonatomic) BOOL forwardsSelfGeneratedDistributedSaveNotifications; 
@property (assign,nonatomic) double externalNotificationCoalescingDelay; 
@required
-(double)externalNotificationCoalescingDelay;
-(void)receiveNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 userInfo:(id)arg4 isFromExternalProcess:(BOOL)arg5;
-(void)receiveExternalNotificationName:(id)arg1;
-(BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
-(void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)arg1;
-(void)setExternalNotificationCoalescingDelay:(double)arg1;

@end

