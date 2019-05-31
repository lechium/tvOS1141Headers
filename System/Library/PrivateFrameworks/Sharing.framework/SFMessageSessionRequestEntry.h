/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface SFMessageSessionRequestEntry : NSObject {

	BOOL _allowUnencrypted;
	/*^block*/id _handler;
	NSDictionary* _options;

}

@property (assign,nonatomic) BOOL allowUnencrypted;              //@synthesize allowUnencrypted=_allowUnencrypted - In the implementation block
@property (nonatomic,copy) id handler;                           //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSDictionary * options;               //@synthesize options=_options - In the implementation block
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(BOOL)allowUnencrypted;
-(void)setAllowUnencrypted:(BOOL)arg1 ;
@end

