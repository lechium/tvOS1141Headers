/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>

@class NSArray;

@interface CKMarkNotificationsReadOperationInfo : CKOperationInfo {

	NSArray* _notificationIDs;

}

@property (nonatomic,retain) NSArray * notificationIDs;              //@synthesize notificationIDs=_notificationIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)notificationIDs;
-(void)setNotificationIDs:(NSArray *)arg1 ;
@end

