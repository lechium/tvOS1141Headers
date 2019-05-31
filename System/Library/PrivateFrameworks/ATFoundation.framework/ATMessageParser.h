/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSError;

@interface ATMessageParser : NSObject {

	NSMutableData* _parserData;
	unsigned long long _curObjectLength;
	void* _objectDataBuffer;
	unsigned long long _objectDataLen;
	char _varIntBuf[10];
	unsigned long long _varIntDataLen;
	NSError* _parserError;
	Class _messageClass;
	/*^block*/id _objectParsedBlock;

}

@property (nonatomic,readonly) NSError * parserError;              //@synthesize parserError=_parserError - In the implementation block
@property (nonatomic,readonly) Class messageClass;                 //@synthesize messageClass=_messageClass - In the implementation block
@property (nonatomic,copy) id objectParsedBlock;                   //@synthesize objectParsedBlock=_objectParsedBlock - In the implementation block
-(NSError *)parserError;
-(void)dealloc;
-(BOOL)_parseObjectFromData:(id)arg1 ;
-(id)initWithMessageClass:(Class)arg1 ;
-(BOOL)_parseObjectLength:(const char*)arg1 length:(unsigned long long)arg2 bytesConsumed:(unsigned long long*)arg3 ;
-(BOOL)processData:(const char*)arg1 length:(long long)arg2 ;
-(void)setObjectParsedBlock:(id)arg1 ;
-(id)objectParsedBlock;
-(Class)messageClass;
@end

