/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBFormattedText.h>
@class _SFPBText, _SFPBImage, NSData;


@protocol _SFPBFormattedText <NSObject>
@property (nonatomic,retain) _SFPBText * text; 
@property (nonatomic,readonly) BOOL hasText; 
@property (nonatomic,retain) _SFPBImage * glyph; 
@property (nonatomic,readonly) BOOL hasGlyph; 
@property (assign,nonatomic) BOOL isEmphasized; 
@property (nonatomic,readonly) BOOL hasIsEmphasized; 
@property (assign,nonatomic) BOOL isBold; 
@property (nonatomic,readonly) BOOL hasIsBold; 
@property (assign,nonatomic) int textColor; 
@property (nonatomic,readonly) BOOL hasTextColor; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(_SFPBText *)text;
-(void)setText:(id)arg1;
-(void)setTextColor:(int)arg1;
-(BOOL)hasText;
-(int)textColor;
-(BOOL)isBold;
-(NSData *)jsonData;
-(BOOL)isEmphasized;
-(void)setIsEmphasized:(BOOL)arg1;
-(void)setIsBold:(BOOL)arg1;
-(BOOL)hasIsEmphasized;
-(BOOL)hasIsBold;
-(id)initWithJSON:(id)arg1;
-(BOOL)hasGlyph;
-(BOOL)hasTextColor;
-(void)setGlyph:(id)arg1;
-(_SFPBImage *)glyph;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _SFPBText, _SFPBImage, NSData, NSString;

@interface _SFPBFormattedText : PBCodable <_SFPBFormattedText, NSSecureCoding> {

	SCD_Struct_SF3 _has;
	BOOL _isEmphasized;
	BOOL _isBold;
	int _textColor;
	_SFPBText* _text;
	_SFPBImage* _glyph;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _SFPBText * text;                      //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) BOOL hasText; 
@property (nonatomic,retain) _SFPBImage * glyph;                    //@synthesize glyph=_glyph - In the implementation block
@property (nonatomic,readonly) BOOL hasGlyph; 
@property (assign,nonatomic) BOOL isEmphasized;                     //@synthesize isEmphasized=_isEmphasized - In the implementation block
@property (nonatomic,readonly) BOOL hasIsEmphasized; 
@property (assign,nonatomic) BOOL isBold;                           //@synthesize isBold=_isBold - In the implementation block
@property (nonatomic,readonly) BOOL hasIsBold; 
@property (assign,nonatomic) int textColor;                         //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) BOOL hasTextColor; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(_SFPBText *)text;
-(void)setText:(_SFPBText *)arg1 ;
-(void)setTextColor:(int)arg1 ;
-(BOOL)hasText;
-(int)textColor;
-(id)dictionaryRepresentation;
-(BOOL)isBold;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(BOOL)isEmphasized;
-(void)setIsEmphasized:(BOOL)arg1 ;
-(void)setIsBold:(BOOL)arg1 ;
-(BOOL)hasIsEmphasized;
-(BOOL)hasIsBold;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasGlyph;
-(BOOL)hasTextColor;
-(void)setGlyph:(_SFPBImage *)arg1 ;
-(_SFPBImage *)glyph;
@end

