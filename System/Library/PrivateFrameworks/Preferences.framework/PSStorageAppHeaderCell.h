/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class NSMutableArray, UILabel, UIImageView, UIImage;

@interface PSStorageAppHeaderCell : PSTableCell {

	NSMutableArray* _constraints;
	UILabel* _titleLabel;
	UILabel* _infoLabel;
	UILabel* _vendorLabel;
	UIImageView* _appIconView;
	UIImageView* _cloudIconView;
	UIImage* _icon;
	BOOL _isDemoted;
	BOOL _infoLabelEnabled;

}
+(id)specifierForStorageApp:(id)arg1 ;
+(id)specifierForAppProxy:(id)arg1 ;
+(id)specifierForAppIdentifier:(id)arg1 ;
+(id)specifierForAppBundleURL:(id)arg1 ;
-(void)updateConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
@end

