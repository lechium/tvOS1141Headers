/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class SiriUIPlatterSectionHeaderView, NSString;

@interface SiriUIPlatterSectionHeaderTableViewCell : UITableViewCell {

	SiriUIPlatterSectionHeaderView* _headerView;

}

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long textAlignment; 
+(id)_font;
+(CGSize)sizeThatFits:(CGSize)arg1 text:(id)arg2 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)prepareForReuse;
-(long long)textAlignment;
-(id)initWithText:(id)arg1 ;
@end
