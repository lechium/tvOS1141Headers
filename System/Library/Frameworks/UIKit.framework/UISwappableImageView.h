/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class UIImage;

@interface UISwappableImageView : UIImageView {

	UIImage* _image;
	UIImage* _alternateImage;
	BOOL _showAlternate;
	BOOL _updateImage;
	BOOL _bezel;
	int _bezelStyle;
	long long _barButtonItemStyle;

}
-(void)setImage:(id)arg1 ;
-(void)updateImageIfNeededWithTintColor:(id)arg1 ;
-(void)updateImageIfNeeded;
-(id)initWithImage:(id)arg1 alternateImage:(id)arg2 barStyle:(long long)arg3 barButtonItemStyle:(long long)arg4 tintColor:(id)arg5 bezel:(BOOL)arg6 ;
-(void)showAlternateImage:(BOOL)arg1 ;
-(void)setBezelStyleForBarStyle:(long long)arg1 tintColor:(id)arg2 iconTintColor:(id)arg3 iconTintColorDidChange:(BOOL)arg4 ;
-(void)setBezelStyleForBarStyle:(long long)arg1 tintColor:(id)arg2 ;
@end

