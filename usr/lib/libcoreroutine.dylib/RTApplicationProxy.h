/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RTApplicationProxy : NSObject {

	BOOL _installed;
	BOOL _restricted;
	NSString* _bundleIdentifier;
	NSString* _localizedName;
	long long _capabilities;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                 //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,nonatomic) long long capabilities;                 //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) BOOL installed;                         //@synthesize installed=_installed - In the implementation block
@property (assign,nonatomic) BOOL restricted;                        //@synthesize restricted=_restricted - In the implementation block
-(void)setInstalled:(BOOL)arg1 ;
-(BOOL)installed;
-(id)description;
-(NSString *)bundleIdentifier;
-(NSString *)localizedName;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(long long)capabilities;
-(void)setCapabilities:(long long)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 applicationProxy:(id)arg2 capabilities:(long long)arg3 ;
-(BOOL)restricted;
-(void)setRestricted:(BOOL)arg1 ;
@end

