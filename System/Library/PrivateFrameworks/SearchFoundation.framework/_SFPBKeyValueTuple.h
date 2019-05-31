/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBKeyValueTuple.h>
@class NSString, NSData;


@protocol _SFPBKeyValueTuple <NSObject>
@property (nonatomic,copy) NSString * key; 
@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(BOOL)hasValue;
-(NSString *)key;
-(id)initWithDictionary:(id)arg1;
-(void)setValue:(id)arg1;
-(NSString *)value;
-(void)setKey:(id)arg1;
-(BOOL)hasKey;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBKeyValueTuple : PBCodable <_SFPBKeyValueTuple, NSSecureCoding> {

	NSString* _key;
	NSString* _value;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * key;                          //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,copy) NSString * value;                        //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasValue;
-(NSString *)key;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)hasKey;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
@end

