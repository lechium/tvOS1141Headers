/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FTiMessageStatus : NSObject {

	BOOL _supportsiMessage;
	int _iMessageAllowedToken;
	BOOL _blockPost;

}

@property (assign,nonatomic) int iMessageAllowedToken;              //@synthesize iMessageAllowedToken=_iMessageAllowedToken - In the implementation block
@property (assign) BOOL supportsiMessage;                           //@synthesize supportsiMessage=_supportsiMessage - In the implementation block
@property (assign,nonatomic) BOOL blockPost;                        //@synthesize blockPost=_blockPost - In the implementation block
@property (nonatomic,readonly) BOOL iMessageSupported; 
+(id)sharedInstance;
-(void)dealloc;
-(BOOL)iMessageSupported;
-(void)_reload;
-(BOOL)supportsiMessage;
-(BOOL)_noCache_iMessageAllowed;
-(void)setSupportsiMessage:(BOOL)arg1 ;
-(BOOL)blockPost;
-(void)setIMessageAllowedToken:(int)arg1 ;
-(int)iMessageAllowedToken;
-(void)setBlockPost:(BOOL)arg1 ;
-(id)initPrivate;
-(void)_addObservers;
-(void)_removeObservers;
@end

