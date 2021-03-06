/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface HMFClassRegistry : HMFObject {

	NSMutableDictionary* _classes;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	Class _defaultClass;

}

@property (readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (readonly) Class defaultClass;                                      //@synthesize defaultClass=_defaultClass - In the implementation block
-(id)init;
-(Class)defaultClass;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)initWithDefaultClass:(Class)arg1 ;
-(Class)classForKey:(id)arg1 ;
-(void)setClass:(Class)arg1 forKey:(id)arg2 ;
@end

