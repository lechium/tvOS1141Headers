/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/UIPDFAnnotation.h>

@interface UIPDFSquareOrCircleAnnotation : UIPDFAnnotation {

	double _W;
	unsigned short _S;
	CGPDFArrayRef _D;
	double _SE;
	double _I;

}
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)strokePath:(CGContextRef)arg1 inRect:(CGRect)arg2 ;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 ;
@end

