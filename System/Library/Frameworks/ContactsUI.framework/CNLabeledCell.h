/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactCell.h>

@class NSDictionary, UIImageView, UIView, UILabel, NSString;

@interface CNLabeledCell : CNContactCell {

	NSDictionary* _labelTextAttributes;
	NSDictionary* _valueTextAttributes;
	UIImageView* _chevron;

}

@property (nonatomic,readonly) double chevronWidth; 
@property (nonatomic,readonly) UIImageView * chevron;                       //@synthesize chevron=_chevron - In the implementation block
@property (nonatomic,readonly) UIView*<ABText> labelView; 
@property (nonatomic,readonly) UIView*<ABText> valueView; 
@property (nonatomic,readonly) double topBaselineConstant; 
@property (nonatomic,readonly) double bottomBaselineConstant; 
@property (nonatomic,readonly) UIView * rightMostView; 
@property (nonatomic,readonly) UILabel * standardLabelView; 
@property (nonatomic,readonly) UILabel * standardValueView; 
@property (nonatomic,readonly) NSString * labelString; 
@property (nonatomic,readonly) NSString * valueString; 
@property (nonatomic,copy) NSDictionary * labelTextAttributes; 
@property (nonatomic,copy) NSDictionary * valueTextAttributes; 
+(BOOL)wantsChevron;
+(BOOL)wantsHorizontalLayout;
+(BOOL)wantsStandardConstraints;
-(NSString *)labelString;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)tintColorDidChange;
-(UIImageView *)chevron;
-(UILabel *)standardLabelView;
-(void)setLabelTextAttributes:(NSDictionary *)arg1 ;
-(id)variableConstraints;
-(UIView*<ABText>)labelView;
-(double)minCellHeight;
-(id)constantConstraints;
-(UIView *)rightMostView;
-(void)setValueTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)labelTextAttributes;
-(NSDictionary *)valueTextAttributes;
-(UILabel *)standardValueView;
-(UIView*<ABText>)valueView;
-(NSString *)valueString;
-(double)chevronWidth;
-(id)constantConstraintsForStandardLayout;
-(id)variableConstraintsForStandardLayout;
-(id)constantConstraintsForHorizontalLayout;
-(id)constantConstraintsForVerticalLayout;
-(id)variableConstraintsForHorizontalLayout;
-(id)variableConstraintsForVerticalLayout;
-(double)topBaselineConstant;
-(double)bottomBaselineConstant;
@end

