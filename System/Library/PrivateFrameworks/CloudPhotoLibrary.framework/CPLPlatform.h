/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMapTable, NSObject, NSString;

@interface CPLPlatform : NSObject {

	NSMapTable* _abstractClassToImplementation;
	NSObject*<OS_dispatch_queue> _lock;
	NSString* _suffix;

}

@property (nonatomic,copy) NSString * suffix;              //@synthesize suffix=_suffix - In the implementation block
+(void)setProxyImplementationForPlatform:(id)arg1 ;
+(void)setDefaultPlatform:(id)arg1 ;
+(id)defaultPlatform;
+(id)currentPlatform;
-(id)init;
-(id)description;
-(void)setSuffix:(NSString *)arg1 ;
-(id)newPlatformImplementationForObject:(id)arg1 ;
-(void)setPlatformImplementation:(Class)arg1 forClass:(Class)arg2 ;
-(Class)implementationClassForAbstractClass:(Class)arg1 ;
-(NSString *)suffix;
@end

