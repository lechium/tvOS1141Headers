/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReferencingDelegateStorage, AVWeakReference, NSURL, NSObject, NSHashTable, NSData, NSMutableArray, NSString, NSMutableDictionary;

@interface AVContentKeySessionInternal : NSObject {

	AVWeakReferencingDelegateStorage* _delegateStorage;
	AVWeakReference* _weakReference;
	NSURL* _storageURL;
	BOOL _isExpired;
	BOOL _internal;
	NSObject*<OS_dispatch_queue> _threadSafetyQ;
	CFDataRef _protectorSessionIdentifier;
	NSHashTable* _contentKeyRecipients;
	NSData* _appIdentifier;
	OpaqueFigContentKeySessionRef _figContentKeySession;
	NSMutableArray* _cryptorsList;
	NSString* _keySystem;
	NSMutableDictionary* keyRequestsByRequestID;

}
@end

