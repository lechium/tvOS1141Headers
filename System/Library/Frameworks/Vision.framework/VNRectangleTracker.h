/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNTracker.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface VNRectangleTracker : VNTracker {

	NSMutableDictionary* _cornerTrackersImpl;
	NSObject*<OS_dispatch_queue> _rectangleTrackingProcessingQueue;

}

@property (readonly) BOOL isTracking; 
+(id)trackedCorners;
+(id)_trackingRectAroundPoint:(CGPoint)arg1 trackingRectSize:(CGSize)arg2 ;
-(BOOL)isTracking;
-(BOOL)reset:(id*)arg1 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)setTrackedObjects:(id)arg1 inFrame:(id)arg2 error:(id*)arg3 ;
-(id)trackInFrame:(id)arg1 error:(id*)arg2 ;
-(id)_parseInputObservations:(id)arg1 imageBuffer:(id)arg2 error:(id*)arg3 ;
-(id)_convertCornerObservationsToRectangleObservation:(id)arg1 error:(id*)arg2 ;
@end
