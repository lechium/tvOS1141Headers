/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBDescriptionCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBText, _SFPBImage, _SFPBURL, NSData;


@protocol _SFPBDescriptionCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,readonly) BOOL hasPunchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (nonatomic,readonly) BOOL hasPunchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (nonatomic,readonly) BOOL hasCanBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (nonatomic,readonly) BOOL hasHasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,readonly) BOOL hasHasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,readonly) BOOL hasType; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,readonly) BOOL hasSeparatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,readonly) BOOL hasBackgroundColor; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) _SFPBText * descriptionText; 
@property (nonatomic,readonly) BOOL hasDescriptionText; 
@property (nonatomic,copy) NSString * expandText; 
@property (nonatomic,readonly) BOOL hasExpandText; 
@property (nonatomic,retain) _SFPBImage * image; 
@property (nonatomic,readonly) BOOL hasImage; 
@property (assign,nonatomic) BOOL titleNoWrap; 
@property (nonatomic,readonly) BOOL hasTitleNoWrap; 
@property (assign,nonatomic) int titleWeight; 
@property (nonatomic,readonly) BOOL hasTitleWeight; 
@property (assign,nonatomic) int descriptionSize; 
@property (nonatomic,readonly) BOOL hasDescriptionSize; 
@property (assign,nonatomic) int descriptionWeight; 
@property (nonatomic,readonly) BOOL hasDescriptionWeight; 
@property (assign,nonatomic) BOOL descriptionExpand; 
@property (nonatomic,readonly) BOOL hasDescriptionExpand; 
@property (assign,nonatomic) int imageAlign; 
@property (nonatomic,readonly) BOOL hasImageAlign; 
@property (assign,nonatomic) int textAlign; 
@property (nonatomic,readonly) BOOL hasTextAlign; 
@property (nonatomic,copy) NSString * attributionText; 
@property (nonatomic,readonly) BOOL hasAttributionText; 
@property (nonatomic,retain) _SFPBURL * attributionURL; 
@property (nonatomic,readonly) BOOL hasAttributionURL; 
@property (nonatomic,retain) _SFPBImage * attributionGlyph; 
@property (nonatomic,readonly) BOOL hasAttributionGlyph; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(BOOL)hasType;
-(BOOL)hasDescriptionText;
-(_SFPBText *)descriptionText;
-(void)setDescriptionText:(id)arg1;
-(int)textAlign;
-(void)setTextAlign:(int)arg1;
-(void)setImage:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(void)setTitle:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSString *)title;
-(void)setType:(id)arg1;
-(NSString *)type;
-(_SFPBImage *)image;
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
-(void)setSubtitle:(id)arg1;
-(NSString *)subtitle;
-(BOOL)hasTitle;
-(BOOL)hasImage;
-(NSData *)jsonData;
-(NSArray *)punchoutOptions;
-(void)setPunchoutOptions:(id)arg1;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(id)arg1;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(NSString *)expandText;
-(void)setExpandText:(id)arg1;
-(BOOL)titleNoWrap;
-(void)setTitleNoWrap:(BOOL)arg1;
-(int)titleWeight;
-(void)setTitleWeight:(int)arg1;
-(int)descriptionSize;
-(void)setDescriptionSize:(int)arg1;
-(int)descriptionWeight;
-(void)setDescriptionWeight:(int)arg1;
-(BOOL)descriptionExpand;
-(void)setDescriptionExpand:(BOOL)arg1;
-(int)imageAlign;
-(void)setImageAlign:(int)arg1;
-(NSString *)attributionText;
-(void)setAttributionText:(id)arg1;
-(_SFPBURL *)attributionURL;
-(void)setAttributionURL:(id)arg1;
-(_SFPBImage *)attributionGlyph;
-(void)setAttributionGlyph:(id)arg1;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(BOOL)hasTitleNoWrap;
-(BOOL)hasDescriptionExpand;
-(BOOL)hasImageAlign;
-(BOOL)hasTextAlign;
-(BOOL)hasPunchoutPickerTitle;
-(BOOL)hasPunchoutPickerDismissText;
-(id)initWithJSON:(id)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(BOOL)hasTitleWeight;
-(BOOL)hasDescriptionSize;
-(BOOL)hasDescriptionWeight;
-(BOOL)hasExpandText;
-(BOOL)hasAttributionText;
-(BOOL)hasAttributionURL;
-(BOOL)hasAttributionGlyph;
-(BOOL)hasBackgroundColor;
-(BOOL)hasSubtitle;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBText, _SFPBImage, _SFPBURL, NSData;

@interface _SFPBDescriptionCardSection : PBCodable <_SFPBDescriptionCardSection, NSSecureCoding> {

	SCD_Struct_SF8 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _titleNoWrap;
	BOOL _descriptionExpand;
	int _separatorStyle;
	int _titleWeight;
	int _descriptionSize;
	int _descriptionWeight;
	int _imageAlign;
	int _textAlign;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	NSString* _title;
	NSString* _subtitle;
	_SFPBText* _descriptionText;
	NSString* _expandText;
	_SFPBImage* _image;
	NSString* _attributionText;
	_SFPBURL* _attributionURL;
	_SFPBImage* _attributionGlyph;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * punchoutOptions;                          //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                     //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasPunchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText;               //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (nonatomic,readonly) BOOL hasPunchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden;                                 //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (nonatomic,readonly) BOOL hasCanBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding;                               //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (nonatomic,readonly) BOOL hasHasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding;                            //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,readonly) BOOL hasHasBottomPadding; 
@property (nonatomic,copy) NSString * type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (assign,nonatomic) int separatorStyle;                               //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasSeparatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor;                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundColor; 
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,copy) NSString * subtitle;                                //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) _SFPBText * descriptionText;                      //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,readonly) BOOL hasDescriptionText; 
@property (nonatomic,copy) NSString * expandText;                              //@synthesize expandText=_expandText - In the implementation block
@property (nonatomic,readonly) BOOL hasExpandText; 
@property (nonatomic,retain) _SFPBImage * image;                               //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) BOOL hasImage; 
@property (assign,nonatomic) BOOL titleNoWrap;                                 //@synthesize titleNoWrap=_titleNoWrap - In the implementation block
@property (nonatomic,readonly) BOOL hasTitleNoWrap; 
@property (assign,nonatomic) int titleWeight;                                  //@synthesize titleWeight=_titleWeight - In the implementation block
@property (nonatomic,readonly) BOOL hasTitleWeight; 
@property (assign,nonatomic) int descriptionSize;                              //@synthesize descriptionSize=_descriptionSize - In the implementation block
@property (nonatomic,readonly) BOOL hasDescriptionSize; 
@property (assign,nonatomic) int descriptionWeight;                            //@synthesize descriptionWeight=_descriptionWeight - In the implementation block
@property (nonatomic,readonly) BOOL hasDescriptionWeight; 
@property (assign,nonatomic) BOOL descriptionExpand;                           //@synthesize descriptionExpand=_descriptionExpand - In the implementation block
@property (nonatomic,readonly) BOOL hasDescriptionExpand; 
@property (assign,nonatomic) int imageAlign;                                   //@synthesize imageAlign=_imageAlign - In the implementation block
@property (nonatomic,readonly) BOOL hasImageAlign; 
@property (assign,nonatomic) int textAlign;                                    //@synthesize textAlign=_textAlign - In the implementation block
@property (nonatomic,readonly) BOOL hasTextAlign; 
@property (nonatomic,copy) NSString * attributionText;                         //@synthesize attributionText=_attributionText - In the implementation block
@property (nonatomic,readonly) BOOL hasAttributionText; 
@property (nonatomic,retain) _SFPBURL * attributionURL;                        //@synthesize attributionURL=_attributionURL - In the implementation block
@property (nonatomic,readonly) BOOL hasAttributionURL; 
@property (nonatomic,retain) _SFPBImage * attributionGlyph;                    //@synthesize attributionGlyph=_attributionGlyph - In the implementation block
@property (nonatomic,readonly) BOOL hasAttributionGlyph; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasType;
-(BOOL)hasDescriptionText;
-(_SFPBText *)descriptionText;
-(void)setDescriptionText:(_SFPBText *)arg1 ;
-(int)textAlign;
-(void)setTextAlign:(int)arg1 ;
-(void)setImage:(_SFPBImage *)arg1 ;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(_SFPBColor *)backgroundColor;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(_SFPBImage *)image;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)separatorStyle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)dictionaryRepresentation;
-(BOOL)hasTitle;
-(BOOL)hasImage;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(NSArray *)punchoutOptions;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(NSString *)expandText;
-(void)setExpandText:(NSString *)arg1 ;
-(BOOL)titleNoWrap;
-(void)setTitleNoWrap:(BOOL)arg1 ;
-(int)titleWeight;
-(void)setTitleWeight:(int)arg1 ;
-(int)descriptionSize;
-(void)setDescriptionSize:(int)arg1 ;
-(int)descriptionWeight;
-(void)setDescriptionWeight:(int)arg1 ;
-(BOOL)descriptionExpand;
-(void)setDescriptionExpand:(BOOL)arg1 ;
-(int)imageAlign;
-(void)setImageAlign:(int)arg1 ;
-(NSString *)attributionText;
-(void)setAttributionText:(NSString *)arg1 ;
-(_SFPBURL *)attributionURL;
-(void)setAttributionURL:(_SFPBURL *)arg1 ;
-(_SFPBImage *)attributionGlyph;
-(void)setAttributionGlyph:(_SFPBImage *)arg1 ;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(BOOL)hasTitleNoWrap;
-(BOOL)hasDescriptionExpand;
-(BOOL)hasImageAlign;
-(BOOL)hasTextAlign;
-(BOOL)hasPunchoutPickerTitle;
-(BOOL)hasPunchoutPickerDismissText;
-(id)initWithJSON:(id)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTitleWeight;
-(BOOL)hasDescriptionSize;
-(BOOL)hasDescriptionWeight;
-(BOOL)hasExpandText;
-(BOOL)hasAttributionText;
-(BOOL)hasAttributionURL;
-(BOOL)hasAttributionGlyph;
-(BOOL)hasBackgroundColor;
-(BOOL)hasSubtitle;
@end

