/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString;

@interface BKSIAPDefaults : BSAbstractDefaultDomain

@property (nonatomic,retain) NSString * videoTVOutSystem; 
@property (nonatomic,retain,readonly) NSString * videoTVOutSignal; 
@property (nonatomic,retain,readonly) NSString * videoTVOutReservedForIPodOut; 
@property (nonatomic,retain,readonly) NSString * videoTVOutReservedForRemoteUI; 
-(void)setVideoTVOutReservedForIPodOut:(NSString *)arg1 ;
-(NSString *)videoTVOutReservedForIPodOut;
-(void)setVideoTVOutSystem:(NSString *)arg1 ;
-(NSString *)videoTVOutSystem;
-(void)setVideoTVOutSignal:(NSString *)arg1 ;
-(NSString *)videoTVOutSignal;
-(void)setVideoTVOutReservedForRemoteUI:(NSString *)arg1 ;
-(NSString *)videoTVOutReservedForRemoteUI;
-(id)init;
-(void)_bindAndRegisterDefaults;
@end

