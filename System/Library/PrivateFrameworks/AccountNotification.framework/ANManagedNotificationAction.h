/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, ANManagedAccountNotification;

@interface ANManagedNotificationAction : NSManagedObject

@property (nonatomic,retain) NSString * url; 
@property (nonatomic,retain) id options; 
@property (nonatomic,retain) NSNumber * isInternal; 
@property (nonatomic,retain) ANManagedAccountNotification * notificationToActivate; 
@property (nonatomic,retain) ANManagedAccountNotification * notificationToDismiss; 
@property (nonatomic,retain) ANManagedAccountNotification * notificationToClear; 
-(void)takeValuesFromNotificationAction:(id)arg1 ;
@end
