/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSUUID, INCWatchdogTimer, NSObject, NSOperationQueue, NSExtension, NSError, NSString, NSArray;

@interface INCExtensionRequest : NSObject {

	NSUUID* _requestIdentifier;
	INCWatchdogTimer* _contextTimer;
	NSObject*<OS_dispatch_queue> _queue;
	NSOperationQueue* _requestOperationQueue;
	NSExtension* _extension;
	NSError* _error;
	NSString* _identifier;
	NSArray* _extensionInputItems;

}

@property (nonatomic,retain) NSExtension * _extension;                   //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) NSError * _error;                           //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * extensionInputItems;              //@synthesize extensionInputItems=_extensionInputItems - In the implementation block
-(NSString *)identifier;
-(void)reset;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSError *)_error;
-(void)_resetExtensionContextHostWithCompletion:(/*^block*/id)arg1 ;
-(id)_requestOperationQueue;
-(NSExtension *)_extension;
-(id)_extensionContextHost;
-(void)_scheduleContextTimer;
-(void)_resetContextTimer;
-(void)setExtensionInputItems:(NSArray *)arg1 ;
-(void)startRequestForIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)set_extension:(NSExtension *)arg1 ;
-(void)set_error:(NSError *)arg1 ;
-(NSArray *)extensionInputItems;
@end
