/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel;

@interface _TVLTextEntryContentView : UIView {

	UIView* _textEntryView;
	UILabel* _footnoteLabel;

}

@property (nonatomic,retain) UIView * textEntryView;                 //@synthesize textEntryView=_textEntryView - In the implementation block
@property (nonatomic,readonly) UILabel * footnoteLabel;              //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)textEntryView;
-(UILabel *)footnoteLabel;
-(void)setTextEntryView:(UIView *)arg1 ;
@end
