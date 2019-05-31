/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, TVLImageElement, TVLPosterOverlayElement;

@interface TVLPosterElement : TVLElement {

	BOOL _related;
	BOOL _featured;
	BOOL _alwaysShowTitles;
	BOOL _topShelf;
	BOOL _showOutline;
	BOOL _showReflection;
	BOOL _acceptsFocus;
	NSString* _title;
	NSString* _subtitle;
	NSString* _titleAlignment;
	NSString* _contentMode;
	TVLImageElement* _image;
	TVLImageElement* _defaultImage;
	TVLPosterOverlayElement* _overlay;
	long long _ordinal;
	long long _badgeCount;
	NSString* _url;
	NSString* _urlType;

}

@property (assign,nonatomic) BOOL related;                                   //@synthesize related=_related - In the implementation block
@property (assign,nonatomic) BOOL featured;                                  //@synthesize featured=_featured - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowTitles;                          //@synthesize alwaysShowTitles=_alwaysShowTitles - In the implementation block
@property (assign,nonatomic) BOOL topShelf;                                  //@synthesize topShelf=_topShelf - In the implementation block
@property (assign,nonatomic) BOOL showOutline;                               //@synthesize showOutline=_showOutline - In the implementation block
@property (assign,nonatomic) BOOL showReflection;                            //@synthesize showReflection=_showReflection - In the implementation block
@property (assign,nonatomic) BOOL acceptsFocus;                              //@synthesize acceptsFocus=_acceptsFocus - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * titleAlignment;                        //@synthesize titleAlignment=_titleAlignment - In the implementation block
@property (nonatomic,copy) NSString * contentMode;                           //@synthesize contentMode=_contentMode - In the implementation block
@property (nonatomic,retain) TVLImageElement * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) TVLImageElement * defaultImage;                 //@synthesize defaultImage=_defaultImage - In the implementation block
@property (nonatomic,retain) TVLPosterOverlayElement * overlay;              //@synthesize overlay=_overlay - In the implementation block
@property (assign,nonatomic) long long ordinal;                              //@synthesize ordinal=_ordinal - In the implementation block
@property (assign,nonatomic) long long badgeCount;                           //@synthesize badgeCount=_badgeCount - In the implementation block
@property (nonatomic,copy) NSString * url;                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * urlType;                               //@synthesize urlType=_urlType - In the implementation block
-(NSString *)urlType;
-(long long)ordinal;
-(void)setOrdinal:(long long)arg1 ;
-(void)setImage:(TVLImageElement *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setContentMode:(NSString *)arg1 ;
-(NSString *)url;
-(NSString *)title;
-(TVLImageElement *)image;
-(NSString *)contentMode;
-(TVLPosterOverlayElement *)overlay;
-(void)setUrl:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSString *)titleAlignment;
-(void)setTitleAlignment:(NSString *)arg1 ;
-(BOOL)featured;
-(BOOL)related;
-(void)setRelated:(BOOL)arg1 ;
-(void)setOverlay:(TVLPosterOverlayElement *)arg1 ;
-(void)setBadgeCount:(long long)arg1 ;
-(long long)badgeCount;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(void)setUrlType:(NSString *)arg1 ;
-(TVLImageElement *)defaultImage;
-(BOOL)alwaysShowTitles;
-(void)setDefaultImage:(TVLImageElement *)arg1 ;
-(void)setAlwaysShowTitles:(BOOL)arg1 ;
-(void)setFeatured:(BOOL)arg1 ;
-(void)setTopShelf:(BOOL)arg1 ;
-(void)setShowOutline:(BOOL)arg1 ;
-(void)setShowReflection:(BOOL)arg1 ;
-(BOOL)topShelf;
-(BOOL)showReflection;
-(BOOL)showOutline;
-(BOOL)acceptsFocus;
-(void)setAcceptsFocus:(BOOL)arg1 ;
@end

