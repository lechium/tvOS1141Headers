/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@class CADisplayLink;

@interface WebDisplayLinkHandler : NSObject {

	DisplayRefreshMonitorIOS* m_monitor;
	CADisplayLink* m_displayLink;

}
-(id)initWithMonitor:(DisplayRefreshMonitorIOS*)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(void)handleDisplayLink:(id)arg1 ;
@end

