/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFText.h>
#import <libobjc.A.dylib/SFFormattedText.h>
@class SFImage, NSDictionary, NSData;


@protocol SFFormattedText <SFText>
@property (nonatomic,retain) SFImage * glyph; 
@property (assign,nonatomic) BOOL isEmphasized; 
@property (assign,nonatomic) BOOL isBold; 
@property (assign,nonatomic) int textColor; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setTextColor:(int)arg1;
-(int)textColor;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)isBold;
-(NSData *)jsonData;
-(BOOL)isEmphasized;
-(void)setIsEmphasized:(BOOL)arg1;
-(void)setIsBold:(BOOL)arg1;
-(void)setGlyph:(id)arg1;
-(SFImage *)glyph;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFImage, NSDictionary, NSData, NSString;

@interface SFFormattedText : SFText <SFFormattedText, NSSecureCoding, NSCopying> {

	SCD_Struct_SF3 _has;
	BOOL _isEmphasized;
	BOOL _isBold;
	int _textColor;
	SFImage* _glyph;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * text; 
@property (assign,nonatomic) unsigned long long maxLines; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,retain) SFImage * glyph;                                        //@synthesize glyph=_glyph - In the implementation block
@property (assign,nonatomic) BOOL isEmphasized;                                      //@synthesize isEmphasized=_isEmphasized - In the implementation block
@property (assign,nonatomic) BOOL isBold;                                            //@synthesize isBold=_isBold - In the implementation block
@property (assign,nonatomic) int textColor;                                          //@synthesize textColor=_textColor - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTextColor:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)textColor;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)isBold;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(BOOL)isEmphasized;
-(void)setIsEmphasized:(BOOL)arg1 ;
-(void)setIsBold:(BOOL)arg1 ;
-(BOOL)hasIsEmphasized;
-(BOOL)hasIsBold;
-(BOOL)hasTextColor;
-(void)setGlyph:(SFImage *)arg1 ;
-(SFImage *)glyph;
@end

