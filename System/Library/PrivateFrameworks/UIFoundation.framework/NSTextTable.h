/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextBlock.h>

@interface NSTextTable : NSTextBlock {

	unsigned long long _numCols;
	unsigned long long _tableFlags;
	id _lcache;
	void* _tablePrimary;
	void* _tableSecondary;

}
+(void)initialize;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)numberOfColumns;
-(void)_takeValuesFromTextBlock:(id)arg1 ;
-(CGRect)rectForBlock:(id)arg1 layoutAtPoint:(CGPoint)arg2 inRect:(CGRect)arg3 textContainer:(id)arg4 characterRange:(NSRange)arg5 ;
-(CGRect)boundsRectForBlock:(id)arg1 contentRect:(CGRect)arg2 inRect:(CGRect)arg3 textContainer:(id)arg4 characterRange:(NSRange)arg5 ;
-(void)drawBackgroundForBlock:(id)arg1 withFrame:(CGRect)arg2 inView:(id)arg3 characterRange:(NSRange)arg4 layoutManager:(id)arg5 ;
-(BOOL)collapsesBorders;
-(id)_rowArrayForBlock:(id)arg1 atIndex:(unsigned long long)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(double)arg5 withRepetitions:(BOOL)arg6 collapseBorders:(BOOL)arg7 rowCharRange:(NSRange*)arg8 indexInRow:(unsigned long long*)arg9 startingRow:(long long*)arg10 startingColumn:(long long*)arg11 previousRowBlockHelper:(id*)arg12 ;
-(CGRect)_contentRectForCharRange:(NSRange)arg1 textContainer:(id)arg2 ;
-(BOOL)hidesEmptyCells;
-(BOOL)_missingColumnsForRowRange:(NSRange)arg1 blockIndex:(unsigned long long)arg2 text:(id)arg3 ;
-(void)setCollapsesBorders:(BOOL)arg1 ;
-(void)setHidesEmptyCells:(BOOL)arg1 ;
-(unsigned long long)layoutAlgorithm;
-(void)setLayoutAlgorithm:(unsigned long long)arg1 ;
-(unsigned long long)_tableFlags;
-(void)_setTableFlags:(unsigned long long)arg1 ;
-(id)_descriptionAtIndex:(unsigned long long)arg1 text:(id)arg2 ;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
@end

