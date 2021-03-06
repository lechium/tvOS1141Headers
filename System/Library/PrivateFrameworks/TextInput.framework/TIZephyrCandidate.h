/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidateSingle.h>

@class TIProactiveTrigger, NSString, _ICPredictedItem;

@interface TIZephyrCandidate : TIKeyboardCandidateSingle {

	BOOL _isFromPhraseDictionary;
	BOOL _isFromTextChecker;
	BOOL _isSecureContentCandidate;
	unsigned _usageTrackingMask;
	unsigned long long _wordOriginFeedbackID;
	TIProactiveTrigger* _proactiveTrigger;
	NSString* _fromBundleId;
	unsigned long long _ageForConnectionsMetrics;
	_ICPredictedItem* _proactivePredictedItem;
	NSString* _label;

}

@property (assign,nonatomic) BOOL isFromPhraseDictionary;                              //@synthesize isFromPhraseDictionary=_isFromPhraseDictionary - In the implementation block
@property (assign,nonatomic) BOOL isFromTextChecker;                                   //@synthesize isFromTextChecker=_isFromTextChecker - In the implementation block
@property (nonatomic,copy) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * fromBundleId;                                    //@synthesize fromBundleId=_fromBundleId - In the implementation block
@property (assign,nonatomic) unsigned long long ageForConnectionsMetrics;              //@synthesize ageForConnectionsMetrics=_ageForConnectionsMetrics - In the implementation block
@property (nonatomic,copy) _ICPredictedItem * proactivePredictedItem;                  //@synthesize proactivePredictedItem=_proactivePredictedItem - In the implementation block
+(int)type;
+(BOOL)supportsSecureCoding;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 ;
-(void)setFromBundleId:(NSString *)arg1 ;
-(void)setProactivePredictedItem:(_ICPredictedItem *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)isSecureContentCandidate;
-(unsigned)usageTrackingMask;
-(unsigned long long)wordOriginFeedbackID;
-(BOOL)isAutocorrection;
-(_ICPredictedItem *)proactivePredictedItem;
-(unsigned long long)ageForConnectionsMetrics;
-(NSString *)fromBundleId;
-(id)proactiveTrigger;
-(void)setIsFromTextChecker:(BOOL)arg1 ;
-(BOOL)isFromTextChecker;
-(void)setIsFromPhraseDictionary:(BOOL)arg1 ;
-(BOOL)isFromPhraseDictionary;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned)arg4 ;
-(void)setAgeForConnectionsMetrics:(unsigned long long)arg1 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned)arg4 secureContentCandidate:(BOOL)arg5 proactiveTrigger:(id)arg6 proactivePredictedItem:(id)arg7 ;
@end

