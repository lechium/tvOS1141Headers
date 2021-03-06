/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFAbstractCommand.h>
@class SFCommandValue, NSDictionary, NSData;


@protocol SFAbstractCommand <NSObject>
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) SFCommandValue * value; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(int)arg1;
-(int)type;
-(void)setValue:(id)arg1;
-(SFCommandValue *)value;
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFCommandValue, NSDictionary, NSData, NSString;

@interface SFAbstractCommand : NSObject <SFAbstractCommand, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	int _type;
	SFCommandValue* _value;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) SFCommandValue * value;                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(BOOL)hasType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(SFCommandValue *)arg1 ;
-(SFCommandValue *)value;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
@end

