/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVItemErrorLogEventInternal, NSDate, NSString;

@interface AVItemErrorLogEvent : NSObject <NSCopying> {

	AVItemErrorLogEventInternal* _playerItemErrorLogEvent;

}

@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NSString * URI; 
@property (nonatomic,readonly) NSString * serverAddress; 
@property (nonatomic,readonly) NSString * playbackSessionID; 
@property (nonatomic,readonly) long long errorStatusCode; 
@property (nonatomic,readonly) NSString * errorDomain; 
@property (nonatomic,readonly) NSString * errorComment; 
-(void)finalize;
-(NSString *)errorDomain;
-(id)init;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)serverAddress;
-(NSString *)playbackSessionID;
-(long long)errorStatusCode;
-(NSString *)errorComment;
-(NSString *)URI;
@end

