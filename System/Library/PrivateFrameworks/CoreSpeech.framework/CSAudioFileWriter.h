/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSURL;

@interface CSAudioFileWriter : NSObject {

	BOOL isWriting;
	OpaqueExtAudioFileRef fFile;
	AudioStreamBasicDescription inASBD;
	AudioStreamBasicDescription outASBD;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSURL * fileURL;              //@synthesize fileURL=_fileURL - In the implementation block
-(void)dealloc;
-(void)close;
-(NSURL *)fileURL;
-(id)initWithURL:(id)arg1 inputFormat:(AudioStreamBasicDescription)arg2 outputFormat:(AudioStreamBasicDescription)arg3 ;
-(short)addSamples:(const void*)arg1 len:(long long)arg2 ;
@end
