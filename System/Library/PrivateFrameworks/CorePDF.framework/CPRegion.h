/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>

@interface CPRegion : CPChunk {

	BOOL isTextRegion;
	BOOL isImageRegion;
	BOOL isCompoundShape;
	CPRegion* nextRegion;
	int order;
	id link;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isRotated;
-(void)setOrder:(int)arg1 ;
-(int)order;
-(id)link;
-(void)setLink:(id)arg1 ;
-(void)accept:(id)arg1 ;
-(BOOL)isIndivisible;
-(BOOL)isBoxRegion;
-(BOOL)isGraphicalRegion;
-(BOOL)isRowRegion;
-(void)setIsImageRegion:(BOOL)arg1 ;
-(BOOL)isImageRegion;
-(BOOL)isShapeRegion;
-(BOOL)isParagraphRegion;
-(BOOL)isListItemRegion;
-(void)setIsTextRegion:(BOOL)arg1 ;
-(BOOL)isTableCellRegion;
-(BOOL)isBodyZone;
-(BOOL)isCompoundShape;
-(void)setIsCompoundShape:(BOOL)arg1 ;
-(BOOL)isZone;
-(id)nextRegion;
-(void)setNextRegion:(id)arg1 ;
-(BOOL)isTextRegion;
@end
