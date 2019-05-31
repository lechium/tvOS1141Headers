/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLMenuHeaderView.h>

@class _TVLSegmentedControl, NSArray;

@interface TVLTabHeaderView : TVLMenuHeaderView {

	_TVLSegmentedControl* _segmentedControl;

}

@property (nonatomic,retain) _TVLSegmentedControl * segmentedControl;              //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,copy) NSArray * tabTitles; 
@property (assign,nonatomic) long long selectedIndex; 
-(void)layoutSubviews;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(_TVLSegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(_TVLSegmentedControl *)arg1 ;
-(id)initWithHeaderElement:(id)arg1 ;
-(void)setTabTitles:(NSArray *)arg1 ;
-(NSArray *)tabTitles;
@end

