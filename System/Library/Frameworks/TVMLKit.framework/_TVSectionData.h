/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class NSArray;

@interface _TVSectionData : NSObject {

	NSArray* _items;
	NSArray* _cellSizes;
	unsigned long long _numColumns;
	double _height;
	UIEdgeInsets _insets;

}

@property (nonatomic,copy) NSArray * items;                              //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSArray * cellSizes;                          //@synthesize cellSizes=_cellSizes - In the implementation block
@property (assign,nonatomic) unsigned long long numColumns;              //@synthesize numColumns=_numColumns - In the implementation block
@property (assign,nonatomic) double height;                              //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                        //@synthesize insets=_insets - In the implementation block
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(double)height;
-(void)setHeight:(double)arg1 ;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(NSArray *)cellSizes;
-(void)setCellSizes:(NSArray *)arg1 ;
-(unsigned long long)numColumns;
-(void)setNumColumns:(unsigned long long)arg1 ;
@end

