/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, UITextView;

@interface LargeTextExplanationView : UIView <PSHeaderFooterView> {

	UILabel* _bodyExampleLabel;
	UITextView* _bodyExampleTextView;

}
-(void)layoutSubviews;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
-(void)layoutForWidth:(double)arg1 inTableView:(id)arg2 ;
@end

