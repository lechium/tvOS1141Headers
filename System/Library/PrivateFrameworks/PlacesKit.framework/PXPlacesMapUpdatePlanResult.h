/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol PXPlacesMapUpdatePlanResult <NSObject>
@property (readonly) NSSet * annotationsToAddImmediately; 
@property (readonly) NSSet * annotationsToRemoveImmediately; 
@property (readonly) NSSet * annotationsToRemoveAfterAnimationHasStarted; 
@property (readonly) NSSet * annotationsToRemoveAfterAnimationHasEnded; 
@property (readonly) NSSet * annotationsToRedraw; 
@property (readonly) NSSet * annotationsWithUpdatedIndex; 
@property (readonly) NSSet * overlaysToAddImmediately; 
@property (readonly) NSSet * overlaysToRemoveImmediately; 
@required
-(NSSet *)annotationsToAddImmediately;
-(NSSet *)annotationsToRemoveImmediately;
-(NSSet *)annotationsToRemoveAfterAnimationHasStarted;
-(NSSet *)annotationsToRemoveAfterAnimationHasEnded;
-(NSSet *)annotationsWithUpdatedIndex;
-(NSSet *)overlaysToAddImmediately;
-(NSSet *)overlaysToRemoveImmediately;
-(NSSet *)annotationsToRedraw;

@end

