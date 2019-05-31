/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:18 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class NSMutableArray, UILayoutGuide, NSArray;

@interface MKPlaceEncyclopedicRowView : MKPlaceSectionRowView {

	NSMutableArray* _factoidViews;
	UILayoutGuide* _insetMetricGuide;
	UILayoutGuide* _leftMetricGuide;
	UILayoutGuide* _rightMetricGuide;
	unsigned long long _columnCount;
	NSArray* _items;
	NSMutableArray* _labelConstraints;

}

@property (nonatomic,retain) NSArray * items;                                //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableArray * labelConstraints;              //@synthesize labelConstraints=_labelConstraints - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)_contentSizeDidChange;
-(void)setColumnCount:(unsigned long long)arg1 ;
-(void)refreshColumnCount;
-(void)addWidthAndSideSpacingConstraintsForLabels;
-(void)refreshContent:(BOOL)arg1 ;
-(NSMutableArray *)labelConstraints;
-(void)setLabelConstraints:(NSMutableArray *)arg1 ;
@end
