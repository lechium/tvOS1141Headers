/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidate.h>

@class NSString, NSNumber;

@interface TIMecabraCandidate : TIKeyboardCandidate {

	BOOL _emojiCandidate;
	BOOL _extensionCandidate;
	BOOL _isForShortcutConversion;
	BOOL _isAutocorrection;
	BOOL _OTAWordListCandidate;
	BOOL _regionalCandidate;
	NSString* _candidate;
	NSString* _input;
	NSNumber* _mecabraCandidatePointerValue;
	unsigned long long _deleteCount;
	long long _cursorMovement;

}

@property (nonatomic,retain) NSNumber * mecabraCandidatePointerValue;              //@synthesize mecabraCandidatePointerValue=_mecabraCandidatePointerValue - In the implementation block
+(int)type;
+(BOOL)supportsSecureCoding;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(void)setMecabraCandidatePointerValue:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)input;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(unsigned long long)deleteCount;
-(id)candidate;
-(long long)cursorMovement;
-(BOOL)isForShortcutConversion;
-(BOOL)isExtensionCandidate;
-(BOOL)isEmojiCandidate;
-(BOOL)isOTAWordListCandidate;
-(BOOL)isRegionalCandidate;
-(BOOL)isFullwidthCandidate;
-(BOOL)isAutocorrection;
-(NSNumber *)mecabraCandidatePointerValue;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(int)arg4 ;
-(id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(int)arg4 deleteCount:(unsigned long long)arg5 cursorMovement:(long long)arg6 ;
@end

