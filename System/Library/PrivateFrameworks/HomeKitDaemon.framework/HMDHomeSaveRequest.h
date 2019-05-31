/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:08 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDHome, NSString, NSDictionary, HMDBackingStoreModelObject;

@interface HMDHomeSaveRequest : HMFObject {

	BOOL _incrementGeneration;
	HMDHome* _home;
	NSString* _reason;
	NSDictionary* _information;
	unsigned long long _saveOptions;
	HMDBackingStoreModelObject* _objectChange;

}

@property (nonatomic,readonly) HMDHome * home;                                         //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSString * reason;                                      //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSDictionary * information;                             //@synthesize information=_information - In the implementation block
@property (nonatomic,readonly) unsigned long long saveOptions;                         //@synthesize saveOptions=_saveOptions - In the implementation block
@property (nonatomic,readonly) HMDBackingStoreModelObject * objectChange;              //@synthesize objectChange=_objectChange - In the implementation block
@property (nonatomic,readonly) BOOL incrementGeneration;                               //@synthesize incrementGeneration=_incrementGeneration - In the implementation block
-(HMDHome *)home;
-(NSString *)reason;
-(id)initWithHome:(id)arg1 reason:(id)arg2 information:(id)arg3 postSyncNotification:(BOOL)arg4 objectChange:(id)arg5 ;
-(HMDBackingStoreModelObject *)objectChange;
-(id)initWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(BOOL)arg3 ;
-(id)initWithReason:(id)arg1 information:(id)arg2 saveOptions:(unsigned long long)arg3 ;
-(void)_updateSaveOptions:(BOOL)arg1 reason:(id)arg2 ;
-(NSDictionary *)information;
-(unsigned long long)saveOptions;
-(BOOL)incrementGeneration;
@end

