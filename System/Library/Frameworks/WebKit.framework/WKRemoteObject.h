/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WKRemoteObject : NSObject {

	RetainPtr<_WKRemoteObjectRegistry>* _objectRegistry;
	RetainPtr<_WKRemoteObjectInterface>* _interface;

}
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)_initWithObjectRegistry:(id)arg1 interface:(id)arg2 ;
@end

