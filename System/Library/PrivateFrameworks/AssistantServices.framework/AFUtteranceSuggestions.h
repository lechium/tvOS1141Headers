/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AFUtteranceSuggestionsDelegate;
@class NSObject, NSArray, NSString;

@interface AFUtteranceSuggestions : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _suggestedUtterances;
	NSString* _languageCode;
	id<AFUtteranceSuggestionsDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * languageCode;                                    //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,__weak,readonly) id<AFUtteranceSuggestionsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AFUtteranceSuggestionsDelegate>)delegate;
-(NSString *)languageCode;
-(void)setSuggestedUtterances:(id)arg1 ;
-(id)_suggestionsFilePath;
-(id)initWithLanguageCode:(id)arg1 delegate:(id)arg2 ;
-(void)getSuggestedUtterancesWithCompletion:(/*^block*/id)arg1 ;
@end

