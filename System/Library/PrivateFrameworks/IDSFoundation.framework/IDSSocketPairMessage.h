/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSData, NSString;

@interface IDSSocketPairMessage : NSObject {

	NSData* _underlyingData;
	unsigned char _command;
	id<NSObject> _context;
	NSString* _topic;
	BOOL _useDynamicServiceName;
	BOOL _cancelled;

}

@property (nonatomic,readonly) unsigned char command;                                //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) NSData * underlyingData;                              //@synthesize underlyingData=_underlyingData - In the implementation block
@property (nonatomic,readonly) unsigned long long underlyingDataLength; 
@property (nonatomic,retain) id<NSObject> context;                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * topic;                                       //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic) BOOL useDynamicServiceName;                             //@synthesize useDynamicServiceName=_useDynamicServiceName - In the implementation block
@property (assign,nonatomic) BOOL cancelled;                                         //@synthesize cancelled=_cancelled - In the implementation block
+(unsigned)headerDataSize;
+(id)messageWithCommand:(unsigned char)arg1 data:(id)arg2 ;
+(unsigned)dataLengthFromHeaderData:(id)arg1 ;
+(id)messageWithData:(id)arg1 ;
+(id)messageWithHeaderData:(id)arg1 data:(id)arg2 ;
-(void)setTopic:(NSString *)arg1 ;
-(id<NSObject>)context;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setContext:(id<NSObject>)arg1 ;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(NSData *)underlyingData;
-(id)_nonHeaderData;
-(unsigned long long)underlyingDataLength;
-(id)_existingUnderlyingData;
-(BOOL)useDynamicServiceName;
-(void)setUseDynamicServiceName:(BOOL)arg1 ;
-(unsigned char)command;
-(NSString *)topic;
@end

