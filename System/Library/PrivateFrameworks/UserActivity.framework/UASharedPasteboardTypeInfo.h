/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserActivity/UserActivity-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID, NSNumber, NSFileHandle;

@interface UASharedPasteboardTypeInfo : NSObject <NSSecureCoding, NSCopying> {

	NSString* _type;
	NSUUID* _uuid;
	NSNumber* _offset;
	long long _size;
	NSFileHandle* _dataFile;
	NSNumber* _index;

}

@property (copy) NSString * type;                        //@synthesize type=_type - In the implementation block
@property (copy) NSUUID * uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (copy) NSNumber * offset;                      //@synthesize offset=_offset - In the implementation block
@property (assign) long long size;                       //@synthesize size=_size - In the implementation block
@property (retain) NSFileHandle * dataFile;              //@synthesize dataFile=_dataFile - In the implementation block
@property (copy) NSNumber * index;                       //@synthesize index=_index - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)size;
-(void)setSize:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIndex:(NSNumber *)arg1 ;
-(NSNumber *)index;
-(void)setOffset:(NSNumber *)arg1 ;
-(NSNumber *)offset;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setDataFile:(NSFileHandle *)arg1 ;
-(NSFileHandle *)dataFile;
@end

