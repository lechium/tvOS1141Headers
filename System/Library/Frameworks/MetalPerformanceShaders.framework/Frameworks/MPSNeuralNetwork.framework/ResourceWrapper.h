/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <libobjc.A.dylib/NodeWrapper.h>

@class NSString;

@interface ResourceWrapper : NSObject <NodeWrapper> {

	ResourceGraphNode* _node;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wrapperWithResource:(ResourceGraphNode*)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithResource:(ResourceGraphNode*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void*)node;
@end

