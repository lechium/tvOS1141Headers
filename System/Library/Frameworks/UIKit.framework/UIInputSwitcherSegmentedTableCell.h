/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInputSwitcherTableCell.h>

@class UIInputSwitcherSegmentControl;

@interface UIInputSwitcherSegmentedTableCell : UIInputSwitcherTableCell {

	UIInputSwitcherSegmentControl* _segmentControl;

}

@property (nonatomic,readonly) UIInputSwitcherSegmentControl * segmentControl;              //@synthesize segmentControl=_segmentControl - In the implementation block
+(CGSize)preferredSizeWithSegmentCount:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(UIInputSwitcherSegmentControl *)segmentControl;
-(void)setUsesDarkTheme:(BOOL)arg1 ;
@end
