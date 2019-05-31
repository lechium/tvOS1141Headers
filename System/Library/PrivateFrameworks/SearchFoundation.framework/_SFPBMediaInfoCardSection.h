/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMediaInfoCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBMediaItem, _SFPBActionItem, _SFPBRichText, NSData;


@protocol _SFPBMediaInfoCardSection <NSObject>
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
@property (nonatomic,retain) _SFPBMediaItem * mediaItem; 
@property (nonatomic,readonly) BOOL hasMediaItem; 
@property (nonatomic,copy) NSArray * details; 
@property (nonatomic,retain) _SFPBActionItem * playAction; 
@property (nonatomic,readonly) BOOL hasPlayAction; 
@property (nonatomic,copy) NSArray * offers; 
@property (nonatomic,copy) NSString * watchListIdentifier; 
@property (nonatomic,readonly) BOOL hasWatchListIdentifier; 
@property (nonatomic,copy) NSString * watchListButtonLabel; 
@property (nonatomic,readonly) BOOL hasWatchListButtonLabel; 
@property (nonatomic,copy) NSString * watchListContinuationText; 
@property (nonatomic,readonly) BOOL hasWatchListContinuationText; 
@property (nonatomic,copy) NSString * watchListConfirmationText; 
@property (nonatomic,readonly) BOOL hasWatchListConfirmationText; 
@property (assign,nonatomic) BOOL isMediaContainer; 
@property (nonatomic,readonly) BOOL hasIsMediaContainer; 
@property (nonatomic,retain) _SFPBRichText * specialOfferButtonLabel; 
@property (nonatomic,readonly) BOOL hasSpecialOfferButtonLabel; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(BOOL)hasType;
-(NSArray *)details;
-(void)setDetails:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(_SFPBColor *)backgroundColor;
-(id)initWithDictionary:(id)arg1;
-(void)setType:(id)arg1;
-(NSString *)type;
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
-(void)setOffers:(id)arg1;
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
-(_SFPBActionItem *)playAction;
-(void)setPlayAction:(id)arg1;
-(NSString *)watchListIdentifier;
-(void)setWatchListIdentifier:(id)arg1;
-(NSString *)watchListButtonLabel;
-(void)setWatchListButtonLabel:(id)arg1;
-(NSString *)watchListContinuationText;
-(void)setWatchListContinuationText:(id)arg1;
-(NSString *)watchListConfirmationText;
-(void)setWatchListConfirmationText:(id)arg1;
-(BOOL)isMediaContainer;
-(void)setIsMediaContainer:(BOOL)arg1;
-(_SFPBRichText *)specialOfferButtonLabel;
-(void)setSpecialOfferButtonLabel:(id)arg1;
-(BOOL)hasIsMediaContainer;
-(BOOL)hasPlayAction;
-(id)initWithJSON:(id)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(void)addDetails:(id)arg1;
-(void)addOffers:(id)arg1;
-(void)clearDetails;
-(unsigned long long)detailsCount;
-(id)detailsAtIndex:(unsigned long long)arg1;
-(void)clearOffers;
-(unsigned long long)offersCount;
-(id)offersAtIndex:(unsigned long long)arg1;
-(BOOL)hasWatchListIdentifier;
-(BOOL)hasWatchListButtonLabel;
-(BOOL)hasWatchListContinuationText;
-(BOOL)hasWatchListConfirmationText;
-(BOOL)hasSpecialOfferButtonLabel;
-(BOOL)hasMediaItem;
-(BOOL)hasBackgroundColor;
-(_SFPBMediaItem *)mediaItem;
-(NSArray *)offers;
-(void)setMediaItem:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBMediaItem, _SFPBActionItem, _SFPBRichText, NSData;

@interface _SFPBMediaInfoCardSection : PBCodable <_SFPBMediaInfoCardSection, NSSecureCoding> {

	SCD_Struct_SF5 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _isMediaContainer;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	_SFPBMediaItem* _mediaItem;
	NSArray* _details;
	_SFPBActionItem* _playAction;
	NSArray* _offers;
	NSString* _watchListIdentifier;
	NSString* _watchListButtonLabel;
	NSString* _watchListContinuationText;
	NSString* _watchListConfirmationText;
	_SFPBRichText* _specialOfferButtonLabel;

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
@property (nonatomic,retain) _SFPBMediaItem * mediaItem;                           //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,readonly) BOOL hasMediaItem; 
@property (nonatomic,copy) NSArray * details;                                      //@synthesize details=_details - In the implementation block
@property (nonatomic,retain) _SFPBActionItem * playAction;                         //@synthesize playAction=_playAction - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayAction; 
@property (nonatomic,copy) NSArray * offers;                                       //@synthesize offers=_offers - In the implementation block
@property (nonatomic,copy) NSString * watchListIdentifier;                         //@synthesize watchListIdentifier=_watchListIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasWatchListIdentifier; 
@property (nonatomic,copy) NSString * watchListButtonLabel;                        //@synthesize watchListButtonLabel=_watchListButtonLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasWatchListButtonLabel; 
@property (nonatomic,copy) NSString * watchListContinuationText;                   //@synthesize watchListContinuationText=_watchListContinuationText - In the implementation block
@property (nonatomic,readonly) BOOL hasWatchListContinuationText; 
@property (nonatomic,copy) NSString * watchListConfirmationText;                   //@synthesize watchListConfirmationText=_watchListConfirmationText - In the implementation block
@property (nonatomic,readonly) BOOL hasWatchListConfirmationText; 
@property (assign,nonatomic) BOOL isMediaContainer;                                //@synthesize isMediaContainer=_isMediaContainer - In the implementation block
@property (nonatomic,readonly) BOOL hasIsMediaContainer; 
@property (nonatomic,retain) _SFPBRichText * specialOfferButtonLabel;              //@synthesize specialOfferButtonLabel=_specialOfferButtonLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasSpecialOfferButtonLabel; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasType;
-(NSArray *)details;
-(void)setDetails:(NSArray *)arg1 ;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(_SFPBColor *)backgroundColor;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)separatorStyle;
-(id)dictionaryRepresentation;
-(void)setOffers:(NSArray *)arg1 ;
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
-(_SFPBActionItem *)playAction;
-(void)setPlayAction:(_SFPBActionItem *)arg1 ;
-(NSString *)watchListIdentifier;
-(void)setWatchListIdentifier:(NSString *)arg1 ;
-(NSString *)watchListButtonLabel;
-(void)setWatchListButtonLabel:(NSString *)arg1 ;
-(NSString *)watchListContinuationText;
-(void)setWatchListContinuationText:(NSString *)arg1 ;
-(NSString *)watchListConfirmationText;
-(void)setWatchListConfirmationText:(NSString *)arg1 ;
-(BOOL)isMediaContainer;
-(void)setIsMediaContainer:(BOOL)arg1 ;
-(_SFPBRichText *)specialOfferButtonLabel;
-(void)setSpecialOfferButtonLabel:(_SFPBRichText *)arg1 ;
-(BOOL)hasIsMediaContainer;
-(BOOL)hasPlayAction;
-(id)initWithJSON:(id)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(void)addDetails:(id)arg1 ;
-(void)addOffers:(id)arg1 ;
-(void)clearDetails;
-(unsigned long long)detailsCount;
-(id)detailsAtIndex:(unsigned long long)arg1 ;
-(void)clearOffers;
-(unsigned long long)offersCount;
-(id)offersAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasWatchListIdentifier;
-(BOOL)hasWatchListButtonLabel;
-(BOOL)hasWatchListContinuationText;
-(BOOL)hasWatchListConfirmationText;
-(BOOL)hasSpecialOfferButtonLabel;
-(BOOL)hasMediaItem;
-(BOOL)hasBackgroundColor;
-(_SFPBMediaItem *)mediaItem;
-(NSArray *)offers;
-(void)setMediaItem:(_SFPBMediaItem *)arg1 ;
@end

