/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:06 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface VCMediaNegotiatorCaptionsResults : NSObject {

	BOOL _isSupported;
	BOOL _remoteCanDisplayCaptions;
	NSSet* _localLanguages;
	NSSet* _remoteLanguages;

}

@property (assign,nonatomic) BOOL isSupported;                           //@synthesize isSupported=_isSupported - In the implementation block
@property (assign,nonatomic) BOOL remoteCanDisplayCaptions;              //@synthesize remoteCanDisplayCaptions=_remoteCanDisplayCaptions - In the implementation block
@property (nonatomic,retain) NSSet * localLanguages;                     //@synthesize localLanguages=_localLanguages - In the implementation block
@property (nonatomic,retain) NSSet * remoteLanguages;                    //@synthesize remoteLanguages=_remoteLanguages - In the implementation block
-(void)dealloc;
-(void)setIsSupported:(BOOL)arg1 ;
-(NSSet *)localLanguages;
-(void)setLocalLanguages:(NSSet *)arg1 ;
-(NSSet *)remoteLanguages;
-(void)setRemoteLanguages:(NSSet *)arg1 ;
-(BOOL)remoteCanDisplayCaptions;
-(void)setRemoteCanDisplayCaptions:(BOOL)arg1 ;
-(BOOL)isSupported;
@end

