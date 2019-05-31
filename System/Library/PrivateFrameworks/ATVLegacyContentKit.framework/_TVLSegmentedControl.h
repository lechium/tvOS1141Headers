/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface _TVLSegmentedControl : UIView {

	NSArray* _items;
	long long _selectedIndex;

}

@property (nonatomic,retain) NSArray * items;                      //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) long long selectedIndex;              //@synthesize selectedIndex=_selectedIndex - In the implementation block
-(id)init;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(void)enumerateLabelFramesWithBlock:(/*^block*/id)arg1 ;
@end
