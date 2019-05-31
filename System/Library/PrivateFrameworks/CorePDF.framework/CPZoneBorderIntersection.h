/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CPCopying.h>

@class CPZoneBorder;

@interface CPZoneBorderIntersection : NSObject <NSCopying, CPCopying> {

	CGRect intersectionRect;
	CPZoneBorder* intersectingBorder;
	BOOL forwardVector;
	BOOL backwardVector;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initSuper;
-(void)setIntersectionRect:(CGRect)arg1 ;
-(void)setIntersectingBorder:(id)arg1 ;
-(long long)comparePositionLengthwise:(id)arg1 ;
-(id)intersectingBorder;
-(CGRect)intersectionRect;
-(BOOL)backwardVector;
-(void)setForwardVector:(BOOL)arg1 ;
-(void)setBackwardVector:(BOOL)arg1 ;
-(BOOL)forwardVector;
@end

