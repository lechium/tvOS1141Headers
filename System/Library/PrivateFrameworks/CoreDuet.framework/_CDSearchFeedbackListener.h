/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFFeedbackListener.h>

@protocol _DKKnowledgeSaving;
@class NSString;

@interface _CDSearchFeedbackListener : NSObject <SFFeedbackListener> {

	NSString* _clientIdentifier;
	id<_DKKnowledgeSaving> _store;

}

@property (nonatomic,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeSaving> store;               //@synthesize store=_store - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)feedbackListenerWithStore:(id)arg1 clientIdentifier:(id)arg2 ;
+(id)feedbackListener;
+(id)feedbackListenerWithClientIdentifier:(id)arg1 ;
-(NSString *)clientIdentifier;
-(id<_DKKnowledgeSaving>)store;
-(void)setStore:(id<_DKKnowledgeSaving>)arg1 ;
@end

