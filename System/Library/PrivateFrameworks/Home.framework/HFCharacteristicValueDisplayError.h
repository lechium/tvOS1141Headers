/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFCharacteristicOperationContextProviding;
@class NSError, HMSymptom;

@interface HFCharacteristicValueDisplayError : NSObject {

	unsigned long long _category;
	id<HFCharacteristicOperationContextProviding> _contextProvider;
	NSError* _underlyingError;
	HMSymptom* _underlyingSymptom;

}

@property (assign,nonatomic) unsigned long long category;                                                //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicOperationContextProviding> contextProvider;              //@synthesize contextProvider=_contextProvider - In the implementation block
@property (nonatomic,copy) NSError * underlyingError;                                                    //@synthesize underlyingError=_underlyingError - In the implementation block
@property (nonatomic,retain) HMSymptom * underlyingSymptom;                                              //@synthesize underlyingSymptom=_underlyingSymptom - In the implementation block
@property (getter=isPersistentError,nonatomic,readonly) BOOL persistentError; 
+(id)errorWithUnderlyingError:(id)arg1 readTraits:(id)arg2 contextProvider:(id)arg3 ;
+(id)errorWithUnderlyingSymptom:(id)arg1 isFixingCurrently:(BOOL)arg2 contextProvider:(id)arg3 ;
+(id)mostEgregiousError:(id)arg1 ;
-(void)setCategory:(unsigned long long)arg1 ;
-(unsigned long long)category;
-(id<HFCharacteristicOperationContextProviding>)contextProvider;
-(void)setContextProvider:(id<HFCharacteristicOperationContextProviding>)arg1 ;
-(void)setUnderlyingError:(NSError *)arg1 ;
-(void)setUnderlyingSymptom:(HMSymptom *)arg1 ;
-(NSError *)underlyingError;
-(HMSymptom *)underlyingSymptom;
-(BOOL)isPersistentError;
@end

