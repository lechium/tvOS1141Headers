/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AceObject;


@protocol SiriUIViewController <NSObject>
@property (nonatomic,retain) AceObject * aceObject; 
@property (assign,getter=isUtteranceUserInteractionEnabled,nonatomic) BOOL utteranceUserInteractionEnabled; 
@optional
-(double)baselineOffsetFromBottom;
-(double)desiredHeightForWidth:(double)arg1;
-(id)navigationTitle;
-(void)endEditingAndCorrect:(BOOL)arg1;
-(void)endEditingAndCorrectByTouchPoint:(CGPoint)arg1;
-(void)handleAceCommand:(id)arg1;
-(void)siriDidScrollVisible:(BOOL)arg1;
-(double)desiredTopPaddingBelowController:(id)arg1;
-(double)desiredPinnedTopPadding;
-(void)siriDidStartSpeakingWithIdentifier:(id)arg1;
-(void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(BOOL)arg2;
-(BOOL)shouldHidePriorViews;
-(double)desiredHeight;

@required
-(AceObject *)aceObject;
-(void)setAceObject:(id)arg1;
-(void)siriWillActivateFromSource:(long long)arg1;
-(void)siriDidDeactivate;
-(void)wasAddedToTranscript;
-(BOOL)isUtteranceUserInteractionEnabled;
-(void)setUtteranceUserInteractionEnabled:(BOOL)arg1;

@end

