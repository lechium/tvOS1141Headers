/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFMailboxPredictor.h>

@protocol MFUserProfileProvider, MFQueryableLibraryAdapter;
@class NSDictionary, NSCache, NSMutableString, NSString;

@interface MFHeuristicsMailboxPredictor : NSObject <MFMailboxPredictor> {

	id<MFUserProfileProvider> _userProfileProvider;
	id<MFQueryableLibraryAdapter> _library;
	NSDictionary* _parameters;
	NSCache* _mailboxIDCache;
	NSMutableString* _debugLog;

}

@property (nonatomic,retain) id<MFUserProfileProvider> userProfileProvider;              //@synthesize userProfileProvider=_userProfileProvider - In the implementation block
@property (nonatomic,retain) id<MFQueryableLibraryAdapter> library;                      //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                                  //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSCache * mailboxIDCache;                                   //@synthesize mailboxIDCache=_mailboxIDCache - In the implementation block
@property (nonatomic,retain) NSMutableString * debugLog;                                 //@synthesize debugLog=_debugLog - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id<MFQueryableLibraryAdapter>)library;
-(void)setLibrary:(id<MFQueryableLibraryAdapter>)arg1 ;
-(void)setUserProfileProvider:(id<MFUserProfileProvider>)arg1 ;
-(void)setMailboxIDCache:(NSCache *)arg1 ;
-(id)initWithUserProfileProvider:(id)arg1 libraryAdapter:(id)arg2 ;
-(id)_mergeDefaultParameters:(id)arg1 withParameters:(id)arg2 ;
-(void)setDebugLog:(NSMutableString *)arg1 ;
-(NSMutableString *)debugLog;
-(BOOL)_modeParameterIs:(id)arg1 ;
-(id)_predictionsForMessage:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)_summedWeightedPredictionsForMessage:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)_orderedModePredictionForMessage:(id)arg1 ;
-(id)_weightedModePredictionsForMessage:(id)arg1 ;
-(id)_countsForField:(id)arg1 message:(id)arg2 ;
-(id)_topHitFromMailboxDictionary:(id)arg1 message:(id)arg2 ;
-(id)_removeSpecialMailboxesInCounts:(id)arg1 message:(id)arg2 ;
-(id)_conversationIDCountsForMessage:(id)arg1 ;
-(id)_senderCountsForMessage:(id)arg1 ;
-(id)_recipientCountsForMessage:(id)arg1 ;
-(id)_listIDCountsForMessage:(id)arg1 ;
-(BOOL)_limitToRecents;
-(id)_allowedRecipientsForMessage:(id)arg1 ;
-(NSCache *)mailboxIDCache;
-(id)_userCreatedMailboxIDs;
-(id)_normalizedTermFrequencyTopHitFromDictionary:(id)arg1 withThreshold:(double)arg2 ;
-(id)_topHitFromMailboxDictionary:(id)arg1 ;
-(id)_objectWithMeasure:(double)arg1 timesHigherThanFollowUpInMeasures:(id)arg2 ;
-(id<MFUserProfileProvider>)userProfileProvider;
-(BOOL)_isAllowedRecipient:(id)arg1 ;
-(id)predictMailboxIDsForMessages:(id)arg1 limit:(unsigned long long)arg2 diagnostics:(id*)arg3 ;
-(id)initWithUserProfileProvider:(id)arg1 libraryAdapter:(id)arg2 parameters:(id)arg3 ;
@end

