/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFDAMessagePayloadFetchResponse.h>

@class NSData;

@interface MFDAMessagePayloadFetchResponseImpl : NSObject <MFDAMessagePayloadFetchResponse> {

	BOOL streaming;
	BOOL streamingDone;
	NSData* data;

}
-(BOOL)streaming;
-(void)dealloc;
-(id)data;
-(BOOL)streamingDone;
-(id)initWithData:(id)arg1 streaming:(BOOL)arg2 streamingDone:(BOOL)arg3 ;
@end

