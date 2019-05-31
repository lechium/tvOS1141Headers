/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, SiriCoreLocalSpeechUserData, NSString, NSArray, NSData, NSMutableArray, NSURL;

@interface SiriCoreLocalSpeechDESRecord : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	SiriCoreLocalSpeechUserData* _userData;
	NSString* _language;
	NSString* _task;
	NSArray* _context;
	unsigned long long _samplingRate;
	NSData* _profile;
	NSMutableArray* _audioPackets;
	NSString* _UUIDString;
	NSURL* _originalAudioFileURL;

}

@property (nonatomic,retain) SiriCoreLocalSpeechUserData * userData;              //@synthesize userData=_userData - In the implementation block
@property (nonatomic,copy,readonly) NSString * language;                          //@synthesize language=_language - In the implementation block
@property (nonatomic,copy,readonly) NSString * task;                              //@synthesize task=_task - In the implementation block
@property (nonatomic,copy,readonly) NSArray * context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned long long samplingRate;                   //@synthesize samplingRate=_samplingRate - In the implementation block
@property (nonatomic,copy) NSData * profile;                                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * audioPackets;                //@synthesize audioPackets=_audioPackets - In the implementation block
@property (nonatomic,copy,readonly) NSString * UUIDString;                        //@synthesize UUIDString=_UUIDString - In the implementation block
@property (nonatomic,copy) NSURL * originalAudioFileURL;                          //@synthesize originalAudioFileURL=_originalAudioFileURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)DeleteAllRecordsWithCompletion:(/*^block*/id)arg1 ;
+(id)recordsWithLanguage:(id)arg1 error:(id*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)_init;
-(NSArray *)context;
-(NSString *)UUIDString;
-(NSString *)task;
-(SiriCoreLocalSpeechUserData *)userData;
-(void)setUserData:(SiriCoreLocalSpeechUserData *)arg1 ;
-(NSString *)language;
-(void)setProfile:(NSData *)arg1 ;
-(void)addAudioPacket:(id)arg1 ;
-(NSURL *)originalAudioFileURL;
-(void)setOriginalAudioFileURL:(NSURL *)arg1 ;
-(NSData *)profile;
-(id)initWithLanguage:(id)arg1 task:(id)arg2 context:(id)arg3 narrowband:(BOOL)arg4 ;
-(NSMutableArray *)audioPackets;
-(void)writeToFileWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)recordInfo;
-(id)recordData;
-(unsigned long long)samplingRate;
@end

