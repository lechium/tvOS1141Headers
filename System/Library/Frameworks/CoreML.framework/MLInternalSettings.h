/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MLInternalSettings : NSObject {

	BOOL _restrictNeuralNetworksToUseCPUOnly;
	BOOL _isNeuralNetworkGPUPathForbidden;

}

@property (assign) BOOL restrictNeuralNetworksToUseCPUOnly;                       //@synthesize restrictNeuralNetworksToUseCPUOnly=_restrictNeuralNetworksToUseCPUOnly - In the implementation block
@property (nonatomic,readonly) BOOL isNeuralNetworkGPUPathForbidden;              //@synthesize isNeuralNetworkGPUPathForbidden=_isNeuralNetworkGPUPathForbidden - In the implementation block
+(id)globalSettings;
-(id)init;
-(BOOL)restrictNeuralNetworksToUseCPUOnly;
-(void)setRestrictNeuralNetworksToUseCPUOnly:(BOOL)arg1 ;
-(BOOL)isNeuralNetworkGPUPathForbidden;
@end

