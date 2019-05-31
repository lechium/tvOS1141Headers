/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKCustomSeparatorTableViewCell.h>

@protocol MKTransitDeparturesCellDelegate;
@class UIImageView, _MKUILabel, MKThemeMultiPartLabel, UIStackView, NSArray, NSLayoutConstraint, NSDate, NSTimeZone, UIButton, NSString;

@interface MKTransitDeparturesCell : MKCustomSeparatorTableViewCell {

	UIImageView* _lineImageView;
	UIImageView* _incidentIconImageView;
	_MKUILabel* _primaryLabel;
	MKThemeMultiPartLabel* _secondaryLabel;
	_MKUILabel* _tertiaryLabel;
	UIStackView* _secondaryTextStackView;
	_MKUILabel* _departureLabel;
	NSArray* _additionalDepartureLabels;
	UIStackView* _departureStackView;
	NSLayoutConstraint* _labelLeadingMarginConstraint;
	NSLayoutConstraint* _labelBufferConstraint;
	NSArray* _labelToDepartureConstraints;
	NSArray* _buttonToDepartureConstraints;
	double _lineImageCenteringValue;
	NSLayoutConstraint* _lineImageToContainerTrailingConstraint;
	NSLayoutConstraint* _lineImageViewTopConstraint;
	NSLayoutConstraint* _lineImageViewToBottomConstraint;
	NSLayoutConstraint* _primaryToTopConstraint;
	NSLayoutConstraint* _departureStackViewToBottomConstraint;
	NSLayoutConstraint* _lineImageViewCenteringConstraint;
	NSLayoutConstraint* _lineImageViewCenteringVerticalPaddingConstraint;
	NSLayoutConstraint* _primaryLabelCenteringConstraint;
	NSLayoutConstraint* _departureLabelCenteringConstraint;
	NSLayoutConstraint* _incidentIconHorizontalConstraint;
	BOOL _needsInitialConstraints;
	NSArray* _initialConstraints;
	NSLayoutConstraint* _primaryToBottomConstraint;
	NSLayoutConstraint* _secondaryStackToPrimaryConstraint;
	NSLayoutConstraint* _secondaryStackToBottomConstraint;
	NSLayoutConstraint* _lineImageToTextGutterConstraint;
	NSLayoutConstraint* _lineImageLeadingConstraint;
	NSLayoutConstraint* _lineImageCompressedLeadingConstraint;
	BOOL _showNoConnectionEmDash;
	BOOL _centerContent;
	BOOL _showIncidentIcon;
	BOOL _incidentButtonHidden;
	BOOL _inactive;
	BOOL _useCompressedGutter;
	BOOL _useCompressedLeading;
	BOOL _padBottom;
	double _lineImageViewSize;
	NSArray* _departures;
	unsigned long long _departureStyle;
	NSDate* _countdownReferenceDate;
	NSTimeZone* _departureTimeZone;
	UIButton* _incidentButton;
	NSString* _incidentTitle;
	id<MKTransitDeparturesCellDelegate> _delegate;

}

@property (assign,nonatomic) BOOL centerContent;                                                          //@synthesize centerContent=_centerContent - In the implementation block
@property (nonatomic,retain) UIButton * incidentButton;                                                   //@synthesize incidentButton=_incidentButton - In the implementation block
@property (assign,getter=isIncidentButtonHidden,nonatomic) BOOL incidentButtonHidden;                     //@synthesize incidentButtonHidden=_incidentButtonHidden - In the implementation block
@property (assign,nonatomic) double lineImageViewSize;                                                    //@synthesize lineImageViewSize=_lineImageViewSize - In the implementation block
@property (nonatomic,readonly) double labelMargin; 
@property (nonatomic,retain) NSDate * countdownReferenceDate;                                             //@synthesize countdownReferenceDate=_countdownReferenceDate - In the implementation block
@property (nonatomic,retain) NSArray * departures;                                                        //@synthesize departures=_departures - In the implementation block
@property (assign,nonatomic) unsigned long long departureStyle;                                           //@synthesize departureStyle=_departureStyle - In the implementation block
@property (nonatomic,retain) NSTimeZone * departureTimeZone;                                              //@synthesize departureTimeZone=_departureTimeZone - In the implementation block
@property (assign,getter=isShowingNoConnectionEmDash,nonatomic) BOOL showNoConnectionEmDash;              //@synthesize showNoConnectionEmDash=_showNoConnectionEmDash - In the implementation block
@property (assign,getter=isShowingIncidentIcon,nonatomic) BOOL showIncidentIcon;                          //@synthesize showIncidentIcon=_showIncidentIcon - In the implementation block
@property (nonatomic,copy) NSString * incidentTitle;                                                      //@synthesize incidentTitle=_incidentTitle - In the implementation block
@property (assign,nonatomic,__weak) id<MKTransitDeparturesCellDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL useCompressedGutter;                                                    //@synthesize useCompressedGutter=_useCompressedGutter - In the implementation block
@property (assign,nonatomic) BOOL useCompressedLeading;                                                   //@synthesize useCompressedLeading=_useCompressedLeading - In the implementation block
@property (assign,nonatomic) BOOL padBottom;                                                              //@synthesize padBottom=_padBottom - In the implementation block
@property (assign,getter=isInactive,nonatomic) BOOL inactive;                                             //@synthesize inactive=_inactive - In the implementation block
+(id)defaultSecondaryFont;
+(void)_enumerateMinutesUntilDepartureDates:(id)arg1 withReferenceDate:(id)arg2 block:(/*^block*/id)arg3 ;
+(id)_upcomingTimestampFont;
+(id)_departureLabelFont;
+(id)_departureLabelAttributes;
+(id)_departureSubtextAttributes;
+(id)_singleCountdownSubtext;
+(id)_nowString;
+(double)labelMarginWithLineImageViewWidth:(double)arg1 ;
+(double)_maxExpectedDepartureLabelWidth;
+(id)_primaryFont;
+(BOOL)_needsUpdateMaxLabelWidths;
+(void)_calculateMaxLabelWidths;
+(double)_minTextWidth:(BOOL)arg1 ;
+(double)maxLineImageWidthforWidth:(double)arg1 compressed:(BOOL)arg2 ;
+(id)_departureSubtextFont;
+(id)strongSecondaryFont;
+(id)timestampSecondaryFont;
+(void)useCompressedGutter:(out BOOL*)arg1 compressedLeading:(out BOOL*)arg2 forImageWidth:(double)arg3 inWidth:(double)arg4 compressed:(BOOL)arg5 ;
+(id)displayableCountdowDepartureDatesFromDates:(id)arg1 withReferenceDate:(id)arg2 ;
-(NSArray *)departures;
-(void)setDepartures:(NSArray *)arg1 ;
-(NSTimeZone *)departureTimeZone;
-(id<MKTransitDeparturesCellDelegate>)delegate;
-(void)setDelegate:(id<MKTransitDeparturesCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)updateConstraints;
-(void)_commonInit;
-(BOOL)isOpaque;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(double)_separatorHeight;
-(void)infoCardThemeChanged:(id)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)setInactive:(BOOL)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(void)setPadBottom:(BOOL)arg1 ;
-(BOOL)padBottom;
-(void)_updateLabelFonts;
-(void)_updateLineImageViewConstraints;
-(id)_incidentIcon;
-(void)_addIncidentIcon;
-(void)_removeIncidentIcon;
-(void)setIncidentTitle:(NSString *)arg1 ;
-(void)setShowIncidentIcon:(BOOL)arg1 ;
-(void)setUseCompressedGutter:(BOOL)arg1 ;
-(void)setUseCompressedLeading:(BOOL)arg1 ;
-(void)setLineImage:(id)arg1 ;
-(void)setPrimaryText:(id)arg1 ;
-(void)setSecondaryText:(id)arg1 ;
-(void)setTertiaryText:(id)arg1 ;
-(void)setLineImageViewSize:(double)arg1 ;
-(void)setShowNoConnectionEnDash:(BOOL)arg1 ;
-(double)labelMargin;
-(unsigned long long)_departureLabelStyle;
-(void)refreshDeparturesDisplay;
-(void)_enumerateMinutesUntilDepartureTimesWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)_displayableDeparturesCount;
-(void)_addEmDashAttributes:(id)arg1 ;
-(void)setCountdownReferenceDate:(NSDate *)arg1 ;
-(void)_addIncidentButton;
-(void)_removeIncidentButton;
-(void)_incidentButtonPressed;
-(UIButton *)incidentButton;
-(void)setIncidentButtonHidden:(BOOL)arg1 ;
-(double)lineImageViewSize;
-(unsigned long long)departureStyle;
-(void)setDepartureStyle:(unsigned long long)arg1 ;
-(NSDate *)countdownReferenceDate;
-(void)setDepartureTimeZone:(NSTimeZone *)arg1 ;
-(BOOL)isShowingNoConnectionEmDash;
-(void)setShowNoConnectionEmDash:(BOOL)arg1 ;
-(BOOL)centerContent;
-(void)setCenterContent:(BOOL)arg1 ;
-(BOOL)isShowingIncidentIcon;
-(void)setIncidentButton:(UIButton *)arg1 ;
-(BOOL)isIncidentButtonHidden;
-(NSString *)incidentTitle;
-(BOOL)isInactive;
-(BOOL)useCompressedGutter;
-(BOOL)useCompressedLeading;
-(BOOL)_isRTL;
@end

