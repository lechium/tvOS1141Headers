/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFOfflineCacheOperation.h>
#import <libobjc.A.dylib/MFDAOfflineCacheOperation.h>

@class NSArray, NSString;

@interface MFDADeferredMessageMoveOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation> {

	NSArray* _sourceRemoteIDs;
	NSArray* _originalFlags;
	NSArray* _temporaryRemoteIDs;
	NSString* _sourceMailboxID;
	NSString* _destinationMailboxID;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)performWithAccount:(id)arg1 offlineCache:(id)arg2 ;
-(id)initWithMessages:(id)arg1 temporaryIDs:(id)arg2 sourceMailbox:(id)arg3 destinationMailbox:(id)arg4 ;
@end

