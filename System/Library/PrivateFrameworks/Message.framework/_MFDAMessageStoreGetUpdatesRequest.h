/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAMailboxGetUpdatesRequest.h>
#import <libobjc.A.dylib/MFDAMailAccountRequest.h>

@interface _MFDAMessageStoreGetUpdatesRequest : DAMailboxGetUpdatesRequest <MFDAMailAccountRequest> {

	BOOL _isUserRequested;

}

@property (nonatomic,readonly) BOOL shouldSend; 
@property (nonatomic,readonly) BOOL isUserRequested; 
-(BOOL)isUserRequested;
-(unsigned long long)generationNumber;
-(id)deferredOperation;
-(BOOL)shouldSend;
-(id)initRequestForBodyFormat:(int)arg1 withBodySizeLimit:(int)arg2 isUserRequested:(BOOL)arg3 ;
-(BOOL)mf_alwaysReportFailures;
@end

