/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVAudioCompressedBuffer, NSDictionary;

@interface MRAudioBuffer : NSObject {

	AVAudioCompressedBuffer* _buffer;
	NSDictionary* _formatSettings;

}

@property (nonatomic,readonly) AVAudioCompressedBuffer * buffer;              //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) NSDictionary * formatSettings;                 //@synthesize formatSettings=_formatSettings - In the implementation block
-(id)initWithFormatSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maximumPacketSize:(unsigned long long)arg3 ;
-(NSDictionary *)formatSettings;
-(AVAudioCompressedBuffer *)buffer;
@end
