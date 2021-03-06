/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIPointFIFO.h>

@class _UIPointVector;

@interface UIBoxcarFilterPointFIFO : UIPointFIFO {

	unsigned long long _width;
	float _spacing;
	_UIPointVector* _prevPoints;

}

@property (assign,nonatomic) unsigned long long width;                 //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float spacing;                            //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) _UIPointVector * prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
-(void)dealloc;
-(void)flush;
-(void)setSpacing:(float)arg1 ;
-(void)addPoint:;
-(unsigned long long)width;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)clear;
-(float)spacing;
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 ;
-(void)setPrevPoints:(_UIPointVector *)arg1 ;
-(_UIPointVector *)prevPoints;
-(void)emitAveragedPoint;
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 spacing:(float)arg3 ;
@end

