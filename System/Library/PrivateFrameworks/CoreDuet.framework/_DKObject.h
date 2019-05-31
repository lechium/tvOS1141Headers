/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKProtobufConverting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, _DKSource, NSString;

@interface _DKObject : NSObject <_DKProtobufConverting, NSSecureCoding> {

	NSUUID* _UUID;
	_DKSource* _source;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSUUID * UUID;                                   //@synthesize UUID=_UUID - In the implementation block
@property (retain) _DKSource * source;                              //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fromPBCodable:(id)arg1 ;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
+(id)fetchObjectWithUUID:(id)arg1 context:(id)arg2 ;
+(id)entityName;
-(id)init;
-(double)doubleValue;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(BOOL)boolValue;
-(long long)integerValue;
-(void)setSource:(_DKSource *)arg1 ;
-(NSUUID *)UUID;
-(id)stringValue;
-(_DKSource *)source;
-(void)setUUID:(NSUUID *)arg1 ;
-(id)toPBCodable;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(BOOL)copyBaseObjectInfoFromManagedObject:(id)arg1 cache:(id)arg2 ;
-(id)entityName;
-(long long)typeCode;
@end

