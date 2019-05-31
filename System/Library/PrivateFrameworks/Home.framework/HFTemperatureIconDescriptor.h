/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFIconDescriptor.h>

@class NSString;

@interface HFTemperatureIconDescriptor : NSObject <HFIconDescriptor> {

	NSString* _formattedTemperature;
	long long _heatingCoolingMode;
	long long _targetHeatingCoolingMode;

}

@property (nonatomic,readonly) NSString * formattedTemperature;                 //@synthesize formattedTemperature=_formattedTemperature - In the implementation block
@property (nonatomic,readonly) long long heatingCoolingMode;                    //@synthesize heatingCoolingMode=_heatingCoolingMode - In the implementation block
@property (nonatomic,readonly) long long targetHeatingCoolingMode;              //@synthesize targetHeatingCoolingMode=_targetHeatingCoolingMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSString *)formattedTemperature;
-(long long)heatingCoolingMode;
-(id)initWithFormattedTemperature:(id)arg1 heatingCoolingMode:(long long)arg2 targetHeatingCoolingMode:(long long)arg3 ;
-(long long)targetHeatingCoolingMode;
@end

