/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSString, RMTable;

@interface RMTableCell : NSObject {

	NSString* _contents;
	RMTableCell* _nextCellInColumn;
	RMTableCell* _nextCellInRow;
	RMTable* _table;
	CGPDFNodeRef _tableCellNode;

}

@property (readonly) CGPDFPageRef page; 
@property (retain) RMTableCell * nextCellInColumn;              //@synthesize nextCellInColumn=_nextCellInColumn - In the implementation block
@property (retain) RMTableCell * nextCellInRow;                 //@synthesize nextCellInRow=_nextCellInRow - In the implementation block
@property (assign) RMTable * table;                             //@synthesize table=_table - In the implementation block
@property (assign) CGPDFNodeRef tableCellNode;                  //@synthesize tableCellNode=_tableCellNode - In the implementation block
-(CGRect)bounds;
-(CGColorRef)backgroundColor;
-(void)dealloc;
-(unsigned long long)row;
-(id)contents;
-(RMTable *)table;
-(void)setTable:(RMTable *)arg1 ;
-(CGPDFPageRef)page;
-(void)setTableCellNode:(CGPDFNodeRef)arg1 ;
-(void)setNextCellInRow:(RMTableCell *)arg1 ;
-(void)setNextCellInColumn:(RMTableCell *)arg1 ;
-(CGPDFNodeRef)tableCellNode;
-(RMTableCell *)nextCellInRow;
-(RMTableCell *)nextCellInColumn;
-(unsigned long long)column;
@end

