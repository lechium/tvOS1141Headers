/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBHandwritingPointFIFO.h>

@class NSMutableArray;

@interface UIKBHandwritingQuadCurvePointFIFO : UIKBHandwritingPointFIFO {

	/*^block*/id _emissionHandler;
	double _scale;
	NSMutableArray* _prevPoints;
	SCD_Struct_UI66 _lastPoint;

}

@property (assign,nonatomic) double scale;                             //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSMutableArray * prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI77 lastPoint;                //@synthesize lastPoint=_lastPoint - In the implementation block
@property (copy) id emissionHandler;                                   //@synthesize emissionHandler=_emissionHandler - In the implementation block
-(double)scale;
-(void)flush;
-(void)setScale:(double)arg1 ;
-(void)addPoint:(SCD_Struct_UI77)arg1 ;
-(void)clear;
-(id)initWithFIFO:(id)arg1 scale:(double)arg2 ;
-(void)setEmissionHandler:(id)arg1 ;
-(void)setPrevPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)prevPoints;
-(void)setLastPoint:(SCD_Struct_UI77)arg1 ;
-(SCD_Struct_UI77)lastPoint;
-(id)emissionHandler;
@end

