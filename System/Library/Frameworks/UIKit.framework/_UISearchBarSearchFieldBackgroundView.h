/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UITextFieldRoundedRectBackgroundViewNeue.h>

@interface _UISearchBarSearchFieldBackgroundView : _UITextFieldRoundedRectBackgroundViewNeue {

	BOOL _showingTouch;
	BOOL _backgroundContainer;
	long long _barStyle;
	unsigned long long _searchBarStyle;

}

@property (assign,nonatomic) long long barStyle;                             //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,nonatomic) unsigned long long searchBarStyle;              //@synthesize searchBarStyle=_searchBarStyle - In the implementation block
@property (assign,nonatomic) BOOL showingTouch;                              //@synthesize showingTouch=_showingTouch - In the implementation block
@property (assign,nonatomic) BOOL backgroundContainer;                       //@synthesize backgroundContainer=_backgroundContainer - In the implementation block
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(void)setCornerRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(id)_strokeColor:(BOOL)arg1 ;
-(id)_fillColor:(BOOL)arg1 ;
-(void)updateView;
-(void)setSearchBarStyle:(unsigned long long)arg1 ;
-(void)setBackgroundContainer:(BOOL)arg1 ;
-(unsigned long long)searchBarStyle;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 updateView:(BOOL)arg3 ;
-(void)setShowingTouch:(BOOL)arg1 ;
-(id)_ultralightFillColorForOverlayFilter:(BOOL)arg1 active:(BOOL)arg2 ;
-(BOOL)showingTouch;
-(BOOL)backgroundContainer;
@end

