/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned short> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > > {
	CSAudioCircularBufferImpl<unsigned short> __value_;
} compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned short> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > >;

typedef struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > > {
	compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned short> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > > __ptr_;
} unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > >;

typedef struct OpaqueExtAudioFile* OpaqueExtAudioFileRef;

typedef struct __CFNotificationCenter* CFNotificationCenterRef;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct OpaqueAudioConverter* OpaqueAudioConverterRef;
