/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKModifySubscriptionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _subscriptionsToSave;
	NSArray* _subscriptionIDsToDelete;

}

@property (nonatomic,retain) NSArray * subscriptionsToSave;                  //@synthesize subscriptionsToSave=_subscriptionsToSave - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionIDsToDelete;              //@synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)subscriptionsToSave;
-(NSArray *)subscriptionIDsToDelete;
-(void)setSubscriptionsToSave:(NSArray *)arg1 ;
-(void)setSubscriptionIDsToDelete:(NSArray *)arg1 ;
@end

