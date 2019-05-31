/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:28 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/TIKeyboardCandidateCoding.h>

@class NSString, TIProactiveTrigger;

@interface TIKeyboardCandidate : NSObject <NSCopying, NSSecureCoding, TIKeyboardCandidateCoding> {

	BOOL _isSendCurrentLocation;
	unsigned _slotID;
	NSString* _alternativeText;
	NSString* _annotationText;
	unsigned long long _customInfoType;
	unsigned long long _indexForMetrics;

}

@property (nonatomic,readonly) BOOL isSlottedCandidate; 
@property (nonatomic,readonly) NSString * candidate; 
@property (nonatomic,readonly) NSString * input; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,copy) NSString * alternativeText;                                                                   //@synthesize alternativeText=_alternativeText - In the implementation block
@property (nonatomic,copy) NSString * annotationText;                                                                    //@synthesize annotationText=_annotationText - In the implementation block
@property (nonatomic,readonly) unsigned long long wordOriginFeedbackID; 
@property (nonatomic,readonly) unsigned long long deleteCount; 
@property (nonatomic,readonly) long long cursorMovement; 
@property (nonatomic,readonly) BOOL isForShortcutConversion; 
@property (nonatomic,readonly) BOOL isAutocorrection; 
@property (assign,nonatomic) unsigned slotID;                                                                            //@synthesize slotID=_slotID - In the implementation block
@property (assign,nonatomic) unsigned long long customInfoType;                                                          //@synthesize customInfoType=_customInfoType - In the implementation block
@property (assign,nonatomic) BOOL isSendCurrentLocation;                                                                 //@synthesize isSendCurrentLocation=_isSendCurrentLocation - In the implementation block
@property (getter=isExtensionCandidate,nonatomic,readonly) BOOL extensionCandidate; 
@property (getter=isEmojiCandidate,nonatomic,readonly) BOOL emojiCandidate; 
@property (getter=isCompletionCandidate,nonatomic,readonly) BOOL completionCandidate; 
@property (getter=isInlineCompletionCandidate,nonatomic,readonly) BOOL inlineCompletionCandidate; 
@property (getter=isFullwidthCandidate,nonatomic,readonly) BOOL fullwidthCandidate; 
@property (getter=isFacemarkCandidate,nonatomic,readonly) BOOL facemarkCandidate; 
@property (getter=isPunctuationCompletionCandidate,nonatomic,readonly) BOOL punctuationCompletionCandidate; 
@property (getter=isPunctuationKeyCandidate,nonatomic,readonly) BOOL punctuationKeyCandidate; 
@property (getter=isOTAWordListCandidate,nonatomic,readonly) BOOL OTAWordListCandidate; 
@property (getter=isRegionalCandidate,nonatomic,readonly) BOOL regionalCandidate; 
@property (getter=isSecureContentCandidate,nonatomic,readonly) BOOL secureContentCandidate; 
@property (nonatomic,retain,readonly) TIProactiveTrigger * proactiveTrigger; 
@property (assign,nonatomic) unsigned long long indexForMetrics;                                                         //@synthesize indexForMetrics=_indexForMetrics - In the implementation block
@property (nonatomic,readonly) BOOL isAddress; 
@property (nonatomic,readonly) unsigned usageTrackingMask; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)type;
+(BOOL)supportsSecureCoding;
-(BOOL)isSlottedCandidate;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(BOOL)isPunctuation;
-(void)setCustomInfoType:(unsigned long long)arg1 ;
-(BOOL)isSendCurrentLocation;
-(void)setIsSendCurrentLocation:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)input;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(unsigned long long)deleteCount;
-(BOOL)isSecureContentCandidate;
-(unsigned)slotID;
-(NSString *)alternativeText;
-(void)setAlternativeText:(NSString *)arg1 ;
-(NSString *)annotationText;
-(void)setAnnotationText:(NSString *)arg1 ;
-(NSString *)candidate;
-(long long)cursorMovement;
-(unsigned long long)customInfoType;
-(BOOL)isForShortcutConversion;
-(BOOL)isExtensionCandidate;
-(BOOL)isCompletionCandidate;
-(BOOL)isInlineCompletionCandidate;
-(BOOL)isEmojiCandidate;
-(BOOL)isFacemarkCandidate;
-(BOOL)isOTAWordListCandidate;
-(BOOL)isRegionalCandidate;
-(BOOL)isFullwidthCandidate;
-(BOOL)isPunctuationKeyCandidate;
-(BOOL)isPunctuationCompletionCandidate;
-(unsigned)usageTrackingMask;
-(unsigned long long)wordOriginFeedbackID;
-(BOOL)isAutocorrection;
-(void)setSlotID:(unsigned)arg1 ;
-(TIProactiveTrigger *)proactiveTrigger;
-(unsigned long long)indexForMetrics;
-(BOOL)isAddress;
-(void)setIndexForMetrics:(unsigned long long)arg1 ;
@end

