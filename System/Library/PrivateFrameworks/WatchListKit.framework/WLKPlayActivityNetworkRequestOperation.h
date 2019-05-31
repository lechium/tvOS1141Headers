/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class UWLMessageWireEnvelope;

@interface WLKPlayActivityNetworkRequestOperation : WLKNetworkRequestOperation {

	UWLMessageWireEnvelope* _playActivityProto;

}
+(id)playActivityURL;
-(id)initWithServerRouteKey:(id)arg1 serverRouteReplacements:(id)arg2 queryParameters:(id)arg3 ;
-(id)_requestPropertiesWithServerRouteKey:(id)arg1 queryParameters:(id)arg2 additionalHeaderFields:(id)arg3 ;
-(id)initWithMessageEnvelope:(id)arg1 ;
@end
