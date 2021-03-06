/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSMutableArray, UILabel, PSLegendColorView, PSCapacityBarView, UIFont, NSMutableDictionary, NSString;

@interface PSCapacityBarCell : PSTableCell {

	NSMutableArray* _constraints;
	UILabel* _titleLabel;
	UILabel* _sizeLabel;
	UILabel* _calcLabel;
	UILabel* _otherLabel;
	PSLegendColorView* _otherLegend;
	PSCapacityBarView* _barView;
	UIFont* _legendFont;
	UIFont* _bigFont;
	NSMutableArray* _legendConstraints;
	NSMutableArray* _legendViews;
	NSMutableDictionary* _legendTextCache;
	NSMutableDictionary* _legendColorCache;
	BOOL _hideLegend;
	BOOL _showOtherLegend;
	BOOL _sizesAreMem;
	NSString* _sizeFormat;

}
+(double)defaultCellHeight;
+(id)specifierWithTitle:(id)arg1 ;
+(id)specifierWithTitle:(id)arg1 useStandardFontSizeForSizeLabel:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)initializeViews;
-(id)legendTextForCategory:(id)arg1 ;
-(id)legendColorForCategory:(id)arg1 ;
-(id)usageString:(id)arg1 ;
-(void)updateLegends;
@end

