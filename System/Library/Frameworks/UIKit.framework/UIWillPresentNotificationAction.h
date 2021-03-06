/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@protocol OS_dispatch_semaphore;
@class NSObject, UNNotification;

@interface UIWillPresentNotificationAction : BSAction {

	NSObject*<OS_dispatch_semaphore> _decodeSemaphore;
	UNNotification* _cachedNotification;
	BOOL _cachedDeliverable;

}

@property (nonatomic,retain,readonly) UNNotification * notification; 
@property (nonatomic,readonly) BOOL isDeliverable; 
@property (nonatomic,readonly) BOOL isLocal; 
@property (nonatomic,readonly) BOOL isRemote; 
-(long long)UIActionType;
-(BOOL)isLocal;
-(UNNotification *)notification;
-(BOOL)isRemote;
-(id)_trigger;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)initWithNotification:(id)arg1 deliverable:(BOOL)arg2 timeout:(double)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)_blockingWaitForDecodeSemaphore;
-(id)initWithNotification:(id)arg1 timeout:(double)arg2 withHandler:(/*^block*/id)arg3 ;
-(BOOL)isDeliverable;
@end

