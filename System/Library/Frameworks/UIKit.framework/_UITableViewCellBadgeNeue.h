/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface _UITableViewCellBadgeNeue : UIView {

	BOOL _selected;
	UILabel* _badgeTextLabel;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) UILabel * badgeTextLabel;                     //@synthesize badgeTextLabel=_badgeTextLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setBadgeTextLabel:(UILabel *)arg1 ;
-(UILabel *)badgeTextLabel;
-(double)minHeight;
-(void)_sizeToFit;
@end
