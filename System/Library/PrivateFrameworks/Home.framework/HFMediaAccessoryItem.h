/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFMediaAccessoryLikeItem.h>

@protocol HFHomeKitObject, HFMediaProfileContainer, HFCharacteristicValueSource;
@class NSString, NSSet;

@interface HFMediaAccessoryItem : HFItem <HFMediaAccessoryLikeItem> {

	id<HFHomeKitObject> _homeKitObject;
	id<HFMediaProfileContainer> _mediaProfileContainer;
	id<HFCharacteristicValueSource> _valueSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject;                                 //@synthesize homeKitObject=_homeKitObject - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;                       //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,readonly) BOOL isItemGroup; 
@property (nonatomic,readonly) BOOL isContainedWithinItemGroup; 
@property (nonatomic,readonly) unsigned long long numberOfItemsContainedWithinGroup; 
@property (nonatomic,readonly) NSSet * accessoriesSupportingSoftwareUpdate; 
@property (nonatomic,readonly) NSSet * availableSoftwareUpdates; 
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;                 //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
-(id)init;
-(NSString *)description;
-(id)settings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)serviceLikeBuilderInHome:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(id)createControlItems;
-(id)iconDescriptor;
-(BOOL)isContainedWithinItemGroup;
-(BOOL)isItemGroup;
-(unsigned long long)numberOfItemsContainedWithinGroup;
-(NSSet *)accessoriesSupportingSoftwareUpdate;
-(NSSet *)availableSoftwareUpdates;
-(unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1 ;
-(id)initWithValueSource:(id)arg1 homeKitObject:(id)arg2 ;
-(id)initWithValueSource:(id)arg1 mediaProfileContainer:(id)arg2 ;
-(BOOL)supportsMediaQuickControls;
-(BOOL)supportsAlarmQuickControls;
-(id)performStandardUpdateWithOptions:(id)arg1 ;
-(void)_decorateServiceLikeItemKeys:(id)arg1 ;
-(void)_decorateWithMediaSessionKeys:(id)arg1 ;
-(void)_decorateOutcomeWithAccessorySpecificKeys:(id)arg1 ;
-(void)_decorateWithMediaSystemSpecificKeys:(id)arg1 ;
-(void)_decorateWithSoftwareUpdateStateKeys:(id)arg1 ;
-(BOOL)isHomePodMediaSystem;
-(BOOL)isContainedWithinMediaSystem;
-(BOOL)isHomePod;
-(BOOL)isAppleTV;
-(BOOL)isAirPort;
-(BOOL)isSpeaker;
-(BOOL)isHomePodAndIsInMediaSystem;
-(BOOL)_isInstallingSoftwareUpdate;
-(id)serviceNameComponents;
-(BOOL)isSiriDisabled;
-(id)room;
-(id)accessories;
-(id)services;
@end

