/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class NSUndoManager;

@interface NSUndoManagerProxy : NSProxy {

	NSUndoManager* _manager;
	Class _targetClass;

}
-(void)setTargetClass:(Class)arg1 ;
-(void)superRelease;
-(id)initWithManager:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)_tryRetain;
@end
