/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PXPlacesMapUpdatePlan.h>

@protocol PXPlacesMapPipelineComponentProvider, PXPlacesMapLayoutResult;
@class NSMapTable, NSString;

@interface PXPlacesMapDefaultUpdatePlan : NSObject <PXPlacesMapUpdatePlan> {

	id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
	id<PXPlacesMapLayoutResult> _currentLayoutResult;
	NSMapTable* _currentLayoutItemToAnnotationTable;

}

@property (retain) id<PXPlacesMapLayoutResult> currentLayoutResult;                                                  //@synthesize currentLayoutResult=_currentLayoutResult - In the implementation block
@property (retain) NSMapTable * currentLayoutItemToAnnotationTable;                                                  //@synthesize currentLayoutItemToAnnotationTable=_currentLayoutItemToAnnotationTable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider; 
-(void)reset;
-(id<PXPlacesMapPipelineComponentProvider>)pipelineComponentProvider;
-(void)setPipelineComponentProvider:(id<PXPlacesMapPipelineComponentProvider>)arg1 ;
-(id<PXPlacesMapLayoutResult>)currentLayoutResult;
-(id)_changesBetweenSourceLayoutResult:(id)arg1 targetLayoutResult:(id)arg2 ;
-(NSMapTable *)currentLayoutItemToAnnotationTable;
-(void)setCurrentLayoutResult:(id<PXPlacesMapLayoutResult>)arg1 ;
-(void)setCurrentLayoutItemToAnnotationTable:(NSMapTable *)arg1 ;
-(id)resultForNewLayoutResult:(id)arg1 ;
-(id)removalPlanResult;
-(id)annotationForLayoutItem:(id)arg1 ;
@end

