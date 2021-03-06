/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface _EARCommandTagging : NSObject <NSCopying> {

	unique_ptr<quasar::CommandTagging, std::__1::default_delete<quasar::CommandTagging> >* _tagging;
	NSString* _commandId;
	NSArray* _tagSequence;

}

@property (nonatomic,copy,readonly) NSString * commandId;               //@synthesize commandId=_commandId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tagSequence;              //@synthesize tagSequence=_tagSequence - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)commandId;
-(id)_initWithQuasarCommandTagging:(const CommandTagging*)arg1 ;
-(NSArray *)tagSequence;
-(id)tokensForTag:(id)arg1 ;
@end

