/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKSubscription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordZoneID, NSString;

@interface CKRecordZoneSubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (nonatomic,copy,readonly) CKRecordZoneID * zoneID; 
@property (nonatomic,copy) NSString * recordType; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithZoneID:(id)arg1 ;
-(id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2 ;
@end
