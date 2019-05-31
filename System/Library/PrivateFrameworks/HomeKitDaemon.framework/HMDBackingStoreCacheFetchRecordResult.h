/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDBackingStoreCacheShareGroup, HMDBackingStoreCacheGroup, NSData, CKRecord, NSUUID;

@interface HMDBackingStoreCacheFetchRecordResult : HMFObject {

	HMDBackingStoreCacheShareGroup* _share;
	HMDBackingStoreCacheGroup* _group;
	NSData* _data;
	CKRecord* _record;
	unsigned long long _encoding;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) HMDBackingStoreCacheShareGroup * share;              //@synthesize share=_share - In the implementation block
@property (nonatomic,readonly) HMDBackingStoreCacheGroup * group;                   //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) NSData * data;                                       //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) CKRecord * record;                                   //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) unsigned long long encoding;                         //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                       //@synthesize uuid=_uuid - In the implementation block
-(id)description;
-(NSData *)data;
-(HMDBackingStoreCacheGroup *)group;
-(NSUUID *)uuid;
-(CKRecord *)record;
-(HMDBackingStoreCacheShareGroup *)share;
-(unsigned long long)encoding;
-(id)initWithGroup:(id)arg1 share:(id)arg2 record:(id)arg3 data:(id)arg4 encoding:(unsigned long long)arg5 uuid:(id)arg6 ;
@end

