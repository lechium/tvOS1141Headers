/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKModifyBadgeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	unsigned long long _badgeValue;

}

@property (assign,nonatomic) unsigned long long badgeValue;              //@synthesize badgeValue=_badgeValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBadgeValue:(unsigned long long)arg1 ;
-(unsigned long long)badgeValue;
@end
