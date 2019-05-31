/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFColor.h>
@class NSDictionary, NSData;


@protocol SFColor <NSObject>
@property (assign,nonatomic) double redComponent; 
@property (assign,nonatomic) double greenComponent; 
@property (assign,nonatomic) double blueComponent; 
@property (assign,nonatomic) double alphaComponent; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(double)alphaComponent;
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;
-(void)setAlphaComponent:(double)arg1;
-(double)redComponent;
-(void)setRedComponent:(double)arg1;
-(double)greenComponent;
-(void)setGreenComponent:(double)arg1;
-(double)blueComponent;
-(void)setBlueComponent:(double)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSData, NSString;

@interface SFColor : NSObject <SFColor, NSSecureCoding, NSCopying> {

	SCD_Struct_SF4 _has;
	double _redComponent;
	double _greenComponent;
	double _blueComponent;
	double _alphaComponent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double redComponent;                                    //@synthesize redComponent=_redComponent - In the implementation block
@property (assign,nonatomic) double greenComponent;                                  //@synthesize greenComponent=_greenComponent - In the implementation block
@property (assign,nonatomic) double blueComponent;                                   //@synthesize blueComponent=_blueComponent - In the implementation block
@property (assign,nonatomic) double alphaComponent;                                  //@synthesize alphaComponent=_alphaComponent - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)alphaComponent;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(void)setAlphaComponent:(double)arg1 ;
-(BOOL)hasRedComponent;
-(BOOL)hasGreenComponent;
-(BOOL)hasBlueComponent;
-(BOOL)hasAlphaComponent;
-(double)redComponent;
-(void)setRedComponent:(double)arg1 ;
-(double)greenComponent;
-(void)setGreenComponent:(double)arg1 ;
-(double)blueComponent;
-(void)setBlueComponent:(double)arg1 ;
@end

