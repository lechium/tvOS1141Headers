/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBAbstractCommand.h>
@class _SFPBCommandValue, NSData;


@protocol _SFPBAbstractCommand <NSObject>
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) _SFPBCommandValue * value; 
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(BOOL)hasType;
-(BOOL)hasValue;
-(id)initWithDictionary:(id)arg1;
-(void)setType:(int)arg1;
-(int)type;
-(void)setValue:(id)arg1;
-(_SFPBCommandValue *)value;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBCommandValue, NSData, NSString;

@interface _SFPBAbstractCommand : PBCodable <_SFPBAbstractCommand, NSSecureCoding> {

	SCD_Struct_SF2 _has;
	int _type;
	_SFPBCommandValue* _value;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) _SFPBCommandValue * value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasType;
-(BOOL)hasValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setValue:(_SFPBCommandValue *)arg1 ;
-(_SFPBCommandValue *)value;
-(id)dictionaryRepresentation;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
@end

