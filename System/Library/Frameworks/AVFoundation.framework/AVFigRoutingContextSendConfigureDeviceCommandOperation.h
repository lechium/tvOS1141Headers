/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:45 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOperation.h>

@protocol AVOutputDeviceConfigurationRetrieval;
@interface AVFigRoutingContextSendConfigureDeviceCommandOperation : AVOperation {

	OpaqueFigRoutingContextRef _routingContext;
	/*^block*/id _configuratorBlock;
	id<AVOutputDeviceConfigurationRetrieval> _finalConfiguration;

}

@property (nonatomic,retain) id<AVOutputDeviceConfigurationRetrieval> finalConfiguration;              //@synthesize finalConfiguration=_finalConfiguration - In the implementation block
+(void)initialize;
-(id)initWithRoutingContext:(OpaqueFigRoutingContextRef)arg1 configuratorBlock:(/*^block*/id)arg2 ;
-(id<AVOutputDeviceConfigurationRetrieval>)finalConfiguration;
-(void)setFinalConfiguration:(id<AVOutputDeviceConfigurationRetrieval>)arg1 ;
-(id)init;
-(void)dealloc;
-(void)start;
-(BOOL)isAsynchronous;
@end

