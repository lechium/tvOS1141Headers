/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHVisualizationDelegate;
#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class CHRecognitionSession;

@interface CHVisualization : NSObject {

	CHRecognitionSession* _recognitionSession;
	id<CHVisualizationDelegate> _delegate;

}

@property (nonatomic,readonly) long long layeringPriority; 
@property (nonatomic,readonly) BOOL wantsInputDrawings; 
@property (nonatomic,retain,readonly) CHRecognitionSession * recognitionSession;              //@synthesize recognitionSession=_recognitionSession - In the implementation block
@property (assign,nonatomic) id<CHVisualizationDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
-(id<CHVisualizationDelegate>)delegate;
-(void)setDelegate:(id<CHVisualizationDelegate>)arg1 ;
-(void)dealloc;
-(void)drawVisualizationInRect:(CGRect)arg1 context:(CGContextRef)arg2 viewBounds:(CGRect)arg3 ;
-(long long)layeringPriority;
-(BOOL)wantsInputDrawings;
-(CHRecognitionSession *)recognitionSession;
-(CGColorRef)newColorForVisualizedItemAtIndex:(long long)arg1 ;
-(id)initWithRecognitionSession:(id)arg1 ;
-(void)recognitionSessionDidUpdateRecognitionResult;
-(void)toggleVisualizationRegionAtPoint:(CGPoint)arg1 ;
@end
