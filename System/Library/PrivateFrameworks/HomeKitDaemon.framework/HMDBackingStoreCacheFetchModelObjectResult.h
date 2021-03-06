/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class CKRecord, HMDBackingStoreModelObject;

@interface HMDBackingStoreCacheFetchModelObjectResult : HMFObject {

	CKRecord* _record;
	HMDBackingStoreModelObject* _object;

}

@property (nonatomic,readonly) CKRecord * record;                                //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) HMDBackingStoreModelObject * object;              //@synthesize object=_object - In the implementation block
-(HMDBackingStoreModelObject *)object;
-(CKRecord *)record;
-(id)initWithRecord:(id)arg1 data:(id)arg2 encoding:(unsigned long long)arg3 error:(id*)arg4 ;
@end

