/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber, NSData, NSDate;

@interface HAPKeychainItem : HMFObject {

	BOOL _syncable;
	BOOL _invisible;
	NSString* _accessGroup;
	NSNumber* _type;
	NSString* _label;
	NSString* _itemDescription;
	NSString* _account;
	NSData* _valueData;
	void* _platformReference;
	NSData* _genericData;
	NSString* _viewHint;
	NSDate* _creationDate;

}

@property (nonatomic,retain) NSString * accessGroup;                           //@synthesize accessGroup=_accessGroup - In the implementation block
@property (nonatomic,retain) NSNumber * type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * label;                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * itemDescription;                       //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,retain) NSString * account;                               //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSData * valueData;                               //@synthesize valueData=_valueData - In the implementation block
@property (assign,getter=isSyncable,nonatomic) BOOL syncable;                  //@synthesize syncable=_syncable - In the implementation block
@property (getter=isInvisible,nonatomic,readonly) BOOL invisible;              //@synthesize invisible=_invisible - In the implementation block
@property (assign,nonatomic) void* platformReference;                          //@synthesize platformReference=_platformReference - In the implementation block
@property (nonatomic,retain) NSData * genericData;                             //@synthesize genericData=_genericData - In the implementation block
@property (nonatomic,retain) NSString * viewHint;                              //@synthesize viewHint=_viewHint - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                            //@synthesize creationDate=_creationDate - In the implementation block
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(void)dealloc;
-(id)description;
-(void)setType:(NSNumber *)arg1 ;
-(NSNumber *)type;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)accessGroup;
-(void)setAccessGroup:(NSString *)arg1 ;
-(NSString *)itemDescription;
-(void)setItemDescription:(NSString *)arg1 ;
-(BOOL)isInvisible;
-(BOOL)isSyncable;
-(NSString *)viewHint;
-(id)initWithQueryResult:(CFDictionaryRef)arg1 shouldIncludeData:(BOOL)arg2 ;
-(NSData *)valueData;
-(void)setValueData:(NSData *)arg1 ;
-(void)setSyncable:(BOOL)arg1 ;
-(void*)platformReference;
-(void)setPlatformReference:(void*)arg1 ;
-(NSData *)genericData;
-(void)setGenericData:(NSData *)arg1 ;
-(void)setViewHint:(NSString *)arg1 ;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
@end

