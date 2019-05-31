/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKNotification.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, CKRecordID;

@interface CKQueryNotification : CKNotification <NSSecureCoding> {

	long long _queryNotificationReason;
	NSDictionary* _recordFields;
	CKRecordID* _recordID;
	long long _databaseScope;

}

@property (assign,nonatomic) long long queryNotificationReason;              //@synthesize queryNotificationReason=_queryNotificationReason - In the implementation block
@property (nonatomic,copy) NSDictionary * recordFields;                      //@synthesize recordFields=_recordFields - In the implementation block
@property (nonatomic,copy) CKRecordID * recordID;                            //@synthesize recordID=_recordID - In the implementation block
@property (assign,nonatomic) long long databaseScope;                        //@synthesize databaseScope=_databaseScope - In the implementation block
@property (nonatomic,readonly) BOOL isPublicDatabase; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithRemoteNotificationDictionary:(id)arg1 ;
-(void)setQueryNotificationReason:(long long)arg1 ;
-(void)setRecordFields:(NSDictionary *)arg1 ;
-(long long)queryNotificationReason;
-(NSDictionary *)recordFields;
-(BOOL)isPublicDatabase;
-(id)CKPropertiesDescription;
-(long long)databaseScope;
-(void)setDatabaseScope:(long long)arg1 ;
-(CKRecordID *)recordID;
-(void)setRecordID:(CKRecordID *)arg1 ;
@end

