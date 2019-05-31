/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TIProactiveQuickTypeManaging <NSObject>
@required
-(void)reset;
-(BOOL)isEnabled;
-(id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withAdditionalPredictions:(id)arg2 withSecureCandidateRenderer:(id)arg3 withRenderTraits:(id)arg4 withInput:(id)arg5 withRecipient:(id)arg6 withApplication:(id)arg7 withLocale:(id)arg8 withTextContentType:(id)arg9 withAvailableApps:(id)arg10 logBlock:(/*^block*/id)arg11;
-(id)generateAndRenderProactiveSuggestionsWithInput:(id)arg1 withSecureCandidateRenderer:(id)arg2 withRenderTraits:(id)arg3 textContentType:(id)arg4;
-(BOOL)isAutoPopupEnabled;
-(BOOL)isAutoCompleteEnabled;
-(void)userActionWithNoNewTriggers:(id)arg1 fieldType:(id)arg2;
-(void)suggestionAccepted:(id)arg1 fieldType:(id)arg2;
-(void)suggestionNotAccepted:(id)arg1;
-(id)getMeCardEmailAddresses;
-(id)getCachedRecipientInfoForEmailOrPhone:(id)arg1;
-(void)setCachedRecipientInfo:(id)arg1 forEmailOrPhone:(id)arg2;

@end

