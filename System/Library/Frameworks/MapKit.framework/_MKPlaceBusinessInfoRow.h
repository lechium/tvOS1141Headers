/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@class NSMutableArray, NSArray, UILayoutGuide;

@interface _MKPlaceBusinessInfoRow : MKPlaceSectionRowView {

	BOOL _needToRecalculateWidth;
	unsigned long long _numberOfColumns;
	NSMutableArray* _labels;
	NSArray* _constraints;
	UILayoutGuide* _leftColumnGuide;
	UILayoutGuide* _rightColumnGuide;
	double _width;
	NSArray* _items;

}

@property (nonatomic,retain) NSArray * items;              //@synthesize items=_items - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)_createConstraints;
-(void)infoCardThemeChanged:(id)arg1 ;
-(void)_contentSizeDidChange;
-(void)_updateFontAndTextColor:(id)arg1 ;
@end

