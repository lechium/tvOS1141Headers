/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface MLFeatureDescription : NSObject <NSCopying> {

	BOOL _optional;
	NSString* _name;
	long long _type;
	NSDictionary* _valueContraints;

}

@property (retain) NSDictionary * valueContraints;                           //@synthesize valueContraints=_valueContraints - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
@property (getter=isOptional,nonatomic,readonly) BOOL optional;              //@synthesize optional=_optional - In the implementation block
+(id)featureDescriptionWithName:(id)arg1 type:(long long)arg2 optional:(BOOL)arg3 constraints:(id)arg4 ;
-(id)description;
-(NSString *)name;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugQuickLookObject;
-(BOOL)isAllowedValue:(id)arg1 error:(id*)arg2 ;
-(id)initWithName:(id)arg1 type:(long long)arg2 optional:(BOOL)arg3 contraints:(id)arg4 ;
-(id)dictionaryConstraint;
-(BOOL)isAllowedValue:(id)arg1 ;
-(BOOL)allowsValuesWithDescription:(id)arg1 ;
-(NSDictionary *)valueContraints;
-(void)setValueContraints:(NSDictionary *)arg1 ;
-(id)imageConstraint;
-(BOOL)isOptional;
-(id)multiArrayConstraint;
@end

