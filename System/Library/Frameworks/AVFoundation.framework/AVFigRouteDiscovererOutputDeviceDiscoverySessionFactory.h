/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputDeviceDiscoverySessionFactory.h>

@protocol AVFigRouteDiscovererFactory;
@class NSString;

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionFactory : NSObject <AVOutputDeviceDiscoverySessionFactory> {

	id<AVFigRouteDiscovererFactory> _routeDiscovererFactory;

}

@property (nonatomic,readonly) id<AVFigRouteDiscovererFactory> routeDiscovererFactory;              //@synthesize routeDiscovererFactory=_routeDiscovererFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)outputDeviceDiscoverySessionOfClass:(Class)arg1 withDeviceFeatures:(unsigned long long)arg2 ;
-(id)initWithRouteDiscovererFactory:(id)arg1 ;
-(OpaqueFigRouteDiscovererRef)createRouteDiscovererWithType:(int)arg1 ;
-(id<AVFigRouteDiscovererFactory>)routeDiscovererFactory;
-(id)init;
-(void)dealloc;
@end
