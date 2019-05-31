/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBAudioPlaybackCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBImage, _SFPBText, _SFPBRichText, NSData;


@protocol _SFPBAudioPlaybackCardSection <NSObject>
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
@property (nonatomic,retain) _SFPBImage * topImage; 
@property (nonatomic,readonly) BOOL hasTopImage; 
@property (nonatomic,retain) _SFPBText * topText; 
@property (nonatomic,readonly) BOOL hasTopText; 
@property (nonatomic,copy) NSString * topSecondaryText; 
@property (nonatomic,readonly) BOOL hasTopSecondaryText; 
@property (nonatomic,retain) _SFPBImage * bottomImage; 
@property (nonatomic,readonly) BOOL hasBottomImage; 
@property (nonatomic,retain) _SFPBText * bottomText; 
@property (nonatomic,readonly) BOOL hasBottomText; 
@property (nonatomic,retain) _SFPBText * bottomSubtitle; 
@property (nonatomic,readonly) BOOL hasBottomSubtitle; 
@property (nonatomic,copy) NSString * topImageEmoji; 
@property (nonatomic,readonly) BOOL hasTopImageEmoji; 
@property (nonatomic,copy) NSString * bottomImageEmoji; 
@property (nonatomic,readonly) BOOL hasBottomImageEmoji; 
@property (assign,nonatomic) int state; 
@property (nonatomic,readonly) BOOL hasState; 
@property (nonatomic,copy) NSArray * playCommands; 
@property (nonatomic,copy) NSArray * stopCommands; 
@property (nonatomic,retain) _SFPBRichText * detailText; 
@property (nonatomic,readonly) BOOL hasDetailText; 
@property (nonatomic,retain) _SFPBRichText * title; 
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) _SFPBRichText * subtitle; 
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) _SFPBImage * thumbnail; 
@property (nonatomic,readonly) BOOL hasThumbnail; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(BOOL)hasState;
-(BOOL)hasType;
-(void)setBackgroundColor:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(void)setTitle:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(int)state;
-(void)setState:(int)arg1;
-(_SFPBRichText *)title;
-(void)setType:(id)arg1;
-(NSString *)type;
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
-(void)setSubtitle:(id)arg1;
-(_SFPBRichText *)subtitle;
-(BOOL)hasTitle;
-(_SFPBImage *)thumbnail;
-(void)setThumbnail:(id)arg1;
-(_SFPBRichText *)detailText;
-(void)setDetailText:(id)arg1;
-(NSArray *)playCommands;
-(void)setPlayCommands:(id)arg1;
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
-(id)initWithJSON:(id)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(void)setTopImage:(id)arg1;
-(void)setTopText:(id)arg1;
-(void)setTopSecondaryText:(id)arg1;
-(void)setBottomImage:(id)arg1;
-(void)setBottomText:(id)arg1;
-(void)setBottomSubtitle:(id)arg1;
-(void)setTopImageEmoji:(id)arg1;
-(void)setBottomImageEmoji:(id)arg1;
-(void)addPlayCommands:(id)arg1;
-(void)addStopCommands:(id)arg1;
-(_SFPBImage *)topImage;
-(_SFPBText *)topText;
-(NSString *)topSecondaryText;
-(_SFPBImage *)bottomImage;
-(_SFPBText *)bottomText;
-(_SFPBText *)bottomSubtitle;
-(NSString *)topImageEmoji;
-(NSString *)bottomImageEmoji;
-(NSArray *)stopCommands;
-(void)clearPlayCommands;
-(unsigned long long)playCommandsCount;
-(id)playCommandsAtIndex:(unsigned long long)arg1;
-(void)clearStopCommands;
-(unsigned long long)stopCommandsCount;
-(id)stopCommandsAtIndex:(unsigned long long)arg1;
-(BOOL)hasTopImage;
-(BOOL)hasTopText;
-(BOOL)hasTopSecondaryText;
-(BOOL)hasBottomImage;
-(BOOL)hasBottomText;
-(BOOL)hasBottomSubtitle;
-(BOOL)hasTopImageEmoji;
-(BOOL)hasBottomImageEmoji;
-(void)setStopCommands:(id)arg1;
-(BOOL)hasDetailText;
-(BOOL)hasBackgroundColor;
-(BOOL)hasSubtitle;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBImage, _SFPBText, _SFPBRichText, NSData;

@interface _SFPBAudioPlaybackCardSection : PBCodable <_SFPBAudioPlaybackCardSection, NSSecureCoding> {

	SCD_Struct_SF5 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	int _separatorStyle;
	int _state;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	_SFPBImage* _topImage;
	_SFPBText* _topText;
	NSString* _topSecondaryText;
	_SFPBImage* _bottomImage;
	_SFPBText* _bottomText;
	_SFPBText* _bottomSubtitle;
	NSString* _topImageEmoji;
	NSString* _bottomImageEmoji;
	NSArray* _playCommands;
	NSArray* _stopCommands;
	_SFPBRichText* _detailText;
	_SFPBRichText* _title;
	_SFPBRichText* _subtitle;
	_SFPBImage* _thumbnail;

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
@property (nonatomic,retain) _SFPBImage * topImage;                            //@synthesize topImage=_topImage - In the implementation block
@property (nonatomic,readonly) BOOL hasTopImage; 
@property (nonatomic,retain) _SFPBText * topText;                              //@synthesize topText=_topText - In the implementation block
@property (nonatomic,readonly) BOOL hasTopText; 
@property (nonatomic,copy) NSString * topSecondaryText;                        //@synthesize topSecondaryText=_topSecondaryText - In the implementation block
@property (nonatomic,readonly) BOOL hasTopSecondaryText; 
@property (nonatomic,retain) _SFPBImage * bottomImage;                         //@synthesize bottomImage=_bottomImage - In the implementation block
@property (nonatomic,readonly) BOOL hasBottomImage; 
@property (nonatomic,retain) _SFPBText * bottomText;                           //@synthesize bottomText=_bottomText - In the implementation block
@property (nonatomic,readonly) BOOL hasBottomText; 
@property (nonatomic,retain) _SFPBText * bottomSubtitle;                       //@synthesize bottomSubtitle=_bottomSubtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasBottomSubtitle; 
@property (nonatomic,copy) NSString * topImageEmoji;                           //@synthesize topImageEmoji=_topImageEmoji - In the implementation block
@property (nonatomic,readonly) BOOL hasTopImageEmoji; 
@property (nonatomic,copy) NSString * bottomImageEmoji;                        //@synthesize bottomImageEmoji=_bottomImageEmoji - In the implementation block
@property (nonatomic,readonly) BOOL hasBottomImageEmoji; 
@property (assign,nonatomic) int state;                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL hasState; 
@property (nonatomic,copy) NSArray * playCommands;                             //@synthesize playCommands=_playCommands - In the implementation block
@property (nonatomic,copy) NSArray * stopCommands;                             //@synthesize stopCommands=_stopCommands - In the implementation block
@property (nonatomic,retain) _SFPBRichText * detailText;                       //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,readonly) BOOL hasDetailText; 
@property (nonatomic,retain) _SFPBRichText * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) _SFPBRichText * subtitle;                         //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) _SFPBImage * thumbnail;                           //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnail; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)hasState;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasType;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(_SFPBColor *)backgroundColor;
-(void)setTitle:(_SFPBRichText *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(_SFPBRichText *)title;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)separatorStyle;
-(void)setSubtitle:(_SFPBRichText *)arg1 ;
-(_SFPBRichText *)subtitle;
-(id)dictionaryRepresentation;
-(BOOL)hasTitle;
-(_SFPBImage *)thumbnail;
-(void)setThumbnail:(_SFPBImage *)arg1 ;
-(_SFPBRichText *)detailText;
-(void)setDetailText:(_SFPBRichText *)arg1 ;
-(NSArray *)playCommands;
-(void)setPlayCommands:(NSArray *)arg1 ;
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
-(id)initWithJSON:(id)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setTopImage:(_SFPBImage *)arg1 ;
-(void)setTopText:(_SFPBText *)arg1 ;
-(void)setTopSecondaryText:(NSString *)arg1 ;
-(void)setBottomImage:(_SFPBImage *)arg1 ;
-(void)setBottomText:(_SFPBText *)arg1 ;
-(void)setBottomSubtitle:(_SFPBText *)arg1 ;
-(void)setTopImageEmoji:(NSString *)arg1 ;
-(void)setBottomImageEmoji:(NSString *)arg1 ;
-(void)addPlayCommands:(id)arg1 ;
-(void)addStopCommands:(id)arg1 ;
-(_SFPBImage *)topImage;
-(_SFPBText *)topText;
-(NSString *)topSecondaryText;
-(_SFPBImage *)bottomImage;
-(_SFPBText *)bottomText;
-(_SFPBText *)bottomSubtitle;
-(NSString *)topImageEmoji;
-(NSString *)bottomImageEmoji;
-(NSArray *)stopCommands;
-(void)clearPlayCommands;
-(unsigned long long)playCommandsCount;
-(id)playCommandsAtIndex:(unsigned long long)arg1 ;
-(void)clearStopCommands;
-(unsigned long long)stopCommandsCount;
-(id)stopCommandsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTopImage;
-(BOOL)hasTopText;
-(BOOL)hasTopSecondaryText;
-(BOOL)hasBottomImage;
-(BOOL)hasBottomText;
-(BOOL)hasBottomSubtitle;
-(BOOL)hasTopImageEmoji;
-(BOOL)hasBottomImageEmoji;
-(void)setStopCommands:(NSArray *)arg1 ;
-(BOOL)hasDetailText;
-(BOOL)hasBackgroundColor;
-(BOOL)hasSubtitle;
@end

