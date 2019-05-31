/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/TVLCarouselViewDataSource.h>
#import <libobjc.A.dylib/TVLCarouselViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@class TVLCarouselView, TVLShowcaseElement, NSString;

@interface TVLShowcaseView : UIView <TVLCarouselViewDataSource, TVLCarouselViewDelegate, UIGestureRecognizerDelegate, ATVUpdatable> {

	TVLCarouselView* _carouselView;
	TVLShowcaseElement* _element;
	CGSize _itemSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(id)_focusedCell;
-(void)_dispatchEventOfType:(id)arg1 forItemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfItemsInCarouselView:(id)arg1 ;
-(id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2 ;
-(id)initWithShowcaseElement:(id)arg1 ;
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1 ;
-(void)_playButtonAction:(id)arg1 ;
-(void)_longPressAction:(id)arg1 ;
-(void)_selectButtonAction:(id)arg1 ;
@end

