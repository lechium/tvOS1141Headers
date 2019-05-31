/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDBackingStoreCacheShareGroup, HMDBackingStoreCacheGroup, NSString, NSUUID;

@interface HMDBackingStoreCacheFetchRecordMappingResult : HMFObject {

	HMDBackingStoreCacheShareGroup* _share;
	HMDBackingStoreCacheGroup* _group;
	NSString* _recordName;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) HMDBackingStoreCacheShareGroup * share;              //@synthesize share=_share - In the implementation block
@property (nonatomic,readonly) HMDBackingStoreCacheGroup * group;                   //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) NSString * recordName;                               //@synthesize recordName=_recordName - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                       //@synthesize uuid=_uuid - In the implementation block
-(id)description;
-(HMDBackingStoreCacheGroup *)group;
-(NSUUID *)uuid;
-(HMDBackingStoreCacheShareGroup *)share;
-(NSString *)recordName;
-(id)initWithGroup:(id)arg1 share:(id)arg2 recordName:(id)arg3 uuid:(id)arg4 ;
@end

