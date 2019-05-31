/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKRecordID, NSString;

@interface PKCloudDeletedRecord : NSObject <NSSecureCoding> {

	CKRecordID* _recordID;
	NSString* _recordType;

}

@property (nonatomic,readonly) CKRecordID * recordID;                   //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordType;              //@synthesize recordType=_recordType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithRecordID:(id)arg1 recordType:(id)arg2 ;
-(CKRecordID *)recordID;
-(NSString *)recordType;
@end
