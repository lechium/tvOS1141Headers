/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBDetailedRowCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBImage, _SFPBRichText, _SFPBFormattedText, _SFPBActionItem, _SFPBButton, NSData;


@protocol _SFPBDetailedRowCardSection <NSObject>
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
@property (nonatomic,retain) _SFPBImage * thumbnail; 
@property (nonatomic,readonly) BOOL hasThumbnail; 
@property (assign,nonatomic) BOOL preventThumbnailImageScaling; 
@property (nonatomic,readonly) BOOL hasPreventThumbnailImageScaling; 
@property (nonatomic,retain) _SFPBRichText * title; 
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) _SFPBFormattedText * secondaryTitle; 
@property (nonatomic,readonly) BOOL hasSecondaryTitle; 
@property (nonatomic,retain) _SFPBImage * secondaryTitleImage; 
@property (nonatomic,readonly) BOOL hasSecondaryTitleImage; 
@property (assign,nonatomic) BOOL isSecondaryTitleDetached; 
@property (nonatomic,readonly) BOOL hasIsSecondaryTitleDetached; 
@property (nonatomic,copy) NSArray * descriptions; 
@property (nonatomic,retain) _SFPBRichText * footnote; 
@property (nonatomic,readonly) BOOL hasFootnote; 
@property (nonatomic,retain) _SFPBFormattedText * trailingTopText; 
@property (nonatomic,readonly) BOOL hasTrailingTopText; 
@property (nonatomic,retain) _SFPBFormattedText * trailingMiddleText; 
@property (nonatomic,readonly) BOOL hasTrailingMiddleText; 
@property (nonatomic,retain) _SFPBFormattedText * trailingBottomText; 
@property (nonatomic,readonly) BOOL hasTrailingBottomText; 
@property (nonatomic,retain) _SFPBActionItem * action; 
@property (nonatomic,readonly) BOOL hasAction; 
@property (nonatomic,retain) _SFPBButton * button; 
@property (nonatomic,readonly) BOOL hasButton; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(BOOL)hasButton;
-(BOOL)hasType;
-(_SFPBButton *)button;
-(void)setBackgroundColor:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(void)setTitle:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(_SFPBRichText *)title;
-(void)setType:(id)arg1;
-(NSString *)type;
-(_SFPBActionItem *)action;
-(void)setSeparatorStyle:(int)arg1;
-(void)setAction:(id)arg1;
-(int)separatorStyle;
-(BOOL)hasAction;
-(BOOL)hasTitle;
-(_SFPBImage *)thumbnail;
-(void)setButton:(id)arg1;
-(void)setThumbnail:(id)arg1;
-(_SFPBRichText *)footnote;
-(void)setFootnote:(id)arg1;
-(NSArray *)descriptions;
-(void)setDescriptions:(id)arg1;
-(BOOL)hasThumbnail;
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
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(BOOL)hasPunchoutPickerTitle;
-(BOOL)hasPunchoutPickerDismissText;
-(BOOL)hasFootnote;
-(id)initWithJSON:(id)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(void)setPreventThumbnailImageScaling:(BOOL)arg1;
-(void)setSecondaryTitleImage:(id)arg1;
-(void)setIsSecondaryTitleDetached:(BOOL)arg1;
-(void)addDescriptions:(id)arg1;
-(void)setTrailingTopText:(id)arg1;
-(void)setTrailingMiddleText:(id)arg1;
-(void)setTrailingBottomText:(id)arg1;
-(BOOL)hasPreventThumbnailImageScaling;
-(_SFPBImage *)secondaryTitleImage;
-(BOOL)hasIsSecondaryTitleDetached;
-(_SFPBFormattedText *)trailingTopText;
-(_SFPBFormattedText *)trailingMiddleText;
-(_SFPBFormattedText *)trailingBottomText;
-(BOOL)preventThumbnailImageScaling;
-(BOOL)isSecondaryTitleDetached;
-(void)clearDescriptions;
-(unsigned long long)descriptionsCount;
-(id)descriptionsAtIndex:(unsigned long long)arg1;
-(BOOL)hasSecondaryTitle;
-(BOOL)hasSecondaryTitleImage;
-(BOOL)hasTrailingTopText;
-(BOOL)hasTrailingMiddleText;
-(BOOL)hasTrailingBottomText;
-(BOOL)hasBackgroundColor;
-(void)setSecondaryTitle:(id)arg1;
-(_SFPBFormattedText *)secondaryTitle;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBImage, _SFPBRichText, _SFPBFormattedText, _SFPBActionItem, _SFPBButton, NSData;

@interface _SFPBDetailedRowCardSection : PBCodable <_SFPBDetailedRowCardSection, NSSecureCoding> {

	SCD_Struct_SF9 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _preventThumbnailImageScaling;
	BOOL _isSecondaryTitleDetached;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	_SFPBImage* _thumbnail;
	_SFPBRichText* _title;
	_SFPBFormattedText* _secondaryTitle;
	_SFPBImage* _secondaryTitleImage;
	NSArray* _descriptions;
	_SFPBRichText* _footnote;
	_SFPBFormattedText* _trailingTopText;
	_SFPBFormattedText* _trailingMiddleText;
	_SFPBFormattedText* _trailingBottomText;
	_SFPBActionItem* _action;
	_SFPBButton* _button;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * punchoutOptions;                              //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                         //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasPunchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                   //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (nonatomic,readonly) BOOL hasPunchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden;                                     //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (nonatomic,readonly) BOOL hasCanBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding;                                   //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (nonatomic,readonly) BOOL hasHasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding;                                //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,readonly) BOOL hasHasBottomPadding; 
@property (nonatomic,copy) NSString * type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (assign,nonatomic) int separatorStyle;                                   //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasSeparatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL hasBackgroundColor; 
@property (nonatomic,retain) _SFPBImage * thumbnail;                               //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnail; 
@property (assign,nonatomic) BOOL preventThumbnailImageScaling;                    //@synthesize preventThumbnailImageScaling=_preventThumbnailImageScaling - In the implementation block
@property (nonatomic,readonly) BOOL hasPreventThumbnailImageScaling; 
@property (nonatomic,retain) _SFPBRichText * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) _SFPBFormattedText * secondaryTitle;                  //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,readonly) BOOL hasSecondaryTitle; 
@property (nonatomic,retain) _SFPBImage * secondaryTitleImage;                     //@synthesize secondaryTitleImage=_secondaryTitleImage - In the implementation block
@property (nonatomic,readonly) BOOL hasSecondaryTitleImage; 
@property (assign,nonatomic) BOOL isSecondaryTitleDetached;                        //@synthesize isSecondaryTitleDetached=_isSecondaryTitleDetached - In the implementation block
@property (nonatomic,readonly) BOOL hasIsSecondaryTitleDetached; 
@property (nonatomic,copy) NSArray * descriptions;                                 //@synthesize descriptions=_descriptions - In the implementation block
@property (nonatomic,retain) _SFPBRichText * footnote;                             //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,readonly) BOOL hasFootnote; 
@property (nonatomic,retain) _SFPBFormattedText * trailingTopText;                 //@synthesize trailingTopText=_trailingTopText - In the implementation block
@property (nonatomic,readonly) BOOL hasTrailingTopText; 
@property (nonatomic,retain) _SFPBFormattedText * trailingMiddleText;              //@synthesize trailingMiddleText=_trailingMiddleText - In the implementation block
@property (nonatomic,readonly) BOOL hasTrailingMiddleText; 
@property (nonatomic,retain) _SFPBFormattedText * trailingBottomText;              //@synthesize trailingBottomText=_trailingBottomText - In the implementation block
@property (nonatomic,readonly) BOOL hasTrailingBottomText; 
@property (nonatomic,retain) _SFPBActionItem * action;                             //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) BOOL hasAction; 
@property (nonatomic,retain) _SFPBButton * button;                                 //@synthesize button=_button - In the implementation block
@property (nonatomic,readonly) BOOL hasButton; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)hasButton;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasType;
-(_SFPBButton *)button;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(_SFPBColor *)backgroundColor;
-(void)setTitle:(_SFPBRichText *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(_SFPBRichText *)title;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(_SFPBActionItem *)action;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setAction:(_SFPBActionItem *)arg1 ;
-(int)separatorStyle;
-(id)dictionaryRepresentation;
-(BOOL)hasAction;
-(BOOL)hasTitle;
-(_SFPBImage *)thumbnail;
-(void)setButton:(_SFPBButton *)arg1 ;
-(void)setThumbnail:(_SFPBImage *)arg1 ;
-(_SFPBRichText *)footnote;
-(void)setFootnote:(_SFPBRichText *)arg1 ;
-(NSArray *)descriptions;
-(void)setDescriptions:(NSArray *)arg1 ;
-(BOOL)hasThumbnail;
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
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(BOOL)hasPunchoutPickerTitle;
-(BOOL)hasPunchoutPickerDismissText;
-(BOOL)hasFootnote;
-(id)initWithJSON:(id)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setPreventThumbnailImageScaling:(BOOL)arg1 ;
-(void)setSecondaryTitleImage:(_SFPBImage *)arg1 ;
-(void)setIsSecondaryTitleDetached:(BOOL)arg1 ;
-(void)addDescriptions:(id)arg1 ;
-(void)setTrailingTopText:(_SFPBFormattedText *)arg1 ;
-(void)setTrailingMiddleText:(_SFPBFormattedText *)arg1 ;
-(void)setTrailingBottomText:(_SFPBFormattedText *)arg1 ;
-(BOOL)hasPreventThumbnailImageScaling;
-(_SFPBImage *)secondaryTitleImage;
-(BOOL)hasIsSecondaryTitleDetached;
-(_SFPBFormattedText *)trailingTopText;
-(_SFPBFormattedText *)trailingMiddleText;
-(_SFPBFormattedText *)trailingBottomText;
-(BOOL)preventThumbnailImageScaling;
-(BOOL)isSecondaryTitleDetached;
-(void)clearDescriptions;
-(unsigned long long)descriptionsCount;
-(id)descriptionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSecondaryTitle;
-(BOOL)hasSecondaryTitleImage;
-(BOOL)hasTrailingTopText;
-(BOOL)hasTrailingMiddleText;
-(BOOL)hasTrailingBottomText;
-(BOOL)hasBackgroundColor;
-(void)setSecondaryTitle:(_SFPBFormattedText *)arg1 ;
-(_SFPBFormattedText *)secondaryTitle;
@end

