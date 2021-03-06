/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIStatusBarItemView.h>

@class UIActivityIndicatorView;

@interface UIStatusBarActivityItemView : UIStatusBarItemView {

	UIActivityIndicatorView* _activityIndicator;
	UIActivityIndicatorView* _accessibilityHUDIndicator;
	BOOL _slowActivity;
	BOOL _syncActivity;

}
-(id)accessibilityHUDRepresentation;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(double)updateContentsAndWidth;
-(double)shadowPadding;
-(void)_stopAnimating;
-(void)_startAnimating;
-(long long)_activityIndicatorStyle;
@end

