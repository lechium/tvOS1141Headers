/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface CertInfoDescriptionCellContentView : UIView {

	NSArray* _labelsAndValues;
	double _idealHeight;
	int _sizesCount;
	CGSize* _sizes;

}
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(double)rowHeight;
-(id)_labelFont;
-(void)setLabelsAndValues:(id)arg1 ;
-(id)_valueFont;
-(void)_recalculateIdealHeight;
@end

