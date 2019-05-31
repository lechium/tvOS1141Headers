/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class NSArray;

@interface SiriTVUITabularDataRowCell : UITableViewCell {

	NSArray* _templateViews;
	NSArray* _templateViewPaddings;
	NSArray* _columnWidths;

}

@property (nonatomic,copy) NSArray * templateViews;                     //@synthesize templateViews=_templateViews - In the implementation block
@property (nonatomic,copy) NSArray * templateViewPaddings;              //@synthesize templateViewPaddings=_templateViewPaddings - In the implementation block
@property (nonatomic,copy) NSArray * columnWidths;                      //@synthesize columnWidths=_columnWidths - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)columnWidths;
-(void)setColumnWidths:(NSArray *)arg1 ;
-(NSArray *)templateViews;
-(NSArray *)templateViewPaddings;
-(void)setTemplateViews:(NSArray *)arg1 ;
-(void)setTemplateViewPaddings:(NSArray *)arg1 ;
-(UIEdgeInsets)_paddingForTemplateViewAtIndex:(unsigned long long)arg1 ;
@end
