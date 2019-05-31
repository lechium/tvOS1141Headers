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

@interface UIKBHandwritingBoxcarFilterPointFIFO : UIKBHandwritingPointFIFO {

	NSMutableArray* _prevPoints;
	unsigned long long _width;

}

@property (nonatomic,retain) NSMutableArray * prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
@property (assign,nonatomic) unsigned long long width;                 //@synthesize width=_width - In the implementation block
-(void)flush;
-(void)addPoint:(SCD_Struct_UI77)arg1 ;
-(unsigned long long)width;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)clear;
-(id)initWithFIFO:(id)arg1 width:(unsigned long long)arg2 ;
-(void)setPrevPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)prevPoints;
-(void)emitAveragedPoint;
@end
