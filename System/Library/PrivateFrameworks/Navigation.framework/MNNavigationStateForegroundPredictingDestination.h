/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNNavigationStateCommute.h>

@interface MNNavigationStateForegroundPredictingDestination : MNNavigationStateCommute
-(unsigned long long)type;
-(void)stopPredictingDestinations;
-(BOOL)requiresHighMemoryThreshold;
-(unsigned long long)desiredLocationProviderType;
-(unsigned long long)desiredResourcePolicy;
-(unsigned long long)desiredCommuteSessionState;
-(void)updateMapsActive:(BOOL)arg1 ;
-(void)enterState;
-(void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2 ;
-(void)commuteSessionDidArrive:(id)arg1 ;
@end
