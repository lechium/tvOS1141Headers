/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSString;

@interface MFContentErrorDocument : NSObject {

	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;                 //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * content; 
-(NSError *)error;
-(void)dealloc;
-(NSString *)content;
-(id)initWithMimePart:(id)arg1 ;
@end

