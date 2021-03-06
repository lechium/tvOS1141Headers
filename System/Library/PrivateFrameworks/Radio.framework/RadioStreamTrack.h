/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioTrack.h>

@class NSURL;

@interface RadioStreamTrack : RadioTrack

@property (nonatomic,retain,readonly) NSURL * certificateURL; 
@property (nonatomic,retain,readonly) NSURL * contentURL; 
@property (getter=isITunesStream,nonatomic,readonly) BOOL ITunesStream; 
@property (nonatomic,retain,readonly) NSURL * keyServerURL; 
@property (getter=isSkipable,nonatomic,readonly) BOOL skipable; 
-(NSURL *)certificateURL;
-(NSURL *)contentURL;
-(NSURL *)keyServerURL;
-(BOOL)isSkipable;
-(BOOL)isITunesStream;
@end

