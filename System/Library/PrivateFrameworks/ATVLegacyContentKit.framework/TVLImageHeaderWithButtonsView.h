/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLImageHeaderView.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@protocol TVLImageHeaderWithButtonsViewDelegate;
@class UIFocusContainerGuide, NSArray, TVLImageHeaderWithButtonsElement;

@interface TVLImageHeaderWithButtonsView : TVLImageHeaderView <ATVUpdatable> {

	UIFocusContainerGuide* _containerGuide;
	BOOL _isPartOfOptionDialog;
	NSArray* _buttons;
	id<TVLImageHeaderWithButtonsViewDelegate> _delegate;
	double _horizontalInset;
	TVLImageHeaderWithButtonsElement* _feedElement;

}

@property (nonatomic,retain) NSArray * buttons;                                                      //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) TVLImageHeaderWithButtonsElement * feedElement;                         //@synthesize feedElement=_feedElement - In the implementation block
@property (assign,nonatomic) BOOL isPartOfOptionDialog;                                              //@synthesize isPartOfOptionDialog=_isPartOfOptionDialog - In the implementation block
@property (assign,nonatomic,__weak) id<TVLImageHeaderWithButtonsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double horizontalInset;                                                 //@synthesize horizontalInset=_horizontalInset - In the implementation block
-(id<TVLImageHeaderWithButtonsViewDelegate>)delegate;
-(void)setDelegate:(id<TVLImageHeaderWithButtonsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(id)preferredFocusEnvironments;
-(double)horizontalInset;
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)arg1 ;
-(id)initWithImageHeaderElement:(id)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(TVLImageHeaderWithButtonsElement *)feedElement;
-(void)setFeedElement:(TVLImageHeaderWithButtonsElement *)arg1 ;
-(void)_buttonSelected:(id)arg1 ;
-(void)setHorizontalInset:(double)arg1 ;
-(BOOL)isPartOfOptionDialog;
-(void)setIsPartOfOptionDialog:(BOOL)arg1 ;
@end

