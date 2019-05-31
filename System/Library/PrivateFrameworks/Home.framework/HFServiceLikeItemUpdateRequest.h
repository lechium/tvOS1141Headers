/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFCharacteristicValueSource;
@class HMAccessory, HMService, NSSet;

@interface HFServiceLikeItemUpdateRequest : NSObject {

	HMAccessory* _accessory;
	HMService* _service;
	id<HFCharacteristicValueSource> _valueSource;
	NSSet* _characteristics;

}

@property (nonatomic,retain) HMAccessory * accessory;                                  //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) HMService * service;                                      //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,retain) NSSet * characteristics;                                  //@synthesize characteristics=_characteristics - In the implementation block
-(HMService *)service;
-(void)setService:(HMService *)arg1 ;
-(NSSet *)characteristics;
-(void)setCharacteristics:(NSSet *)arg1 ;
-(id)init;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)initWithAccessory:(id)arg1 valueSource:(id)arg2 characteristics:(id)arg3 ;
-(id)updateWithOptions:(id)arg1 ;
-(void)setValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(id)initWithService:(id)arg1 valueSource:(id)arg2 characteristics:(id)arg3 ;
-(id)_displayMetadataForReadResponse:(id)arg1 ;
-(id)_standardResultsForReadResponse:(id)arg1 displayMetadata:(id)arg2 batteryLevelResults:(id)arg3 updateOptions:(id)arg4 ;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
@end

