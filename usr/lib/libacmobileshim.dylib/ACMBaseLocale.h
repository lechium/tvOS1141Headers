/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface ACMBaseLocale : NSObject {

	ACMBaseLocale* _nextLocale;
	NSDictionary* _localeStrings;

}

@property (nonatomic,retain) ACMBaseLocale * nextLocale;                //@synthesize nextLocale=_nextLocale - In the implementation block
@property (nonatomic,retain) NSDictionary * localeStrings;              //@synthesize localeStrings=_localeStrings - In the implementation block
+(id)sharedInstance;
+(void)initialize;
+(id)localizedString:(id)arg1 ;
+(id)createLocaleForIdentifier:(id)arg1 ;
+(void)setupUsingPreferredLanguages;
+(void)setupRecoveringPreferredLanguages;
-(id)objectForKey:(id)arg1 ;
-(void)dealloc;
-(void)setNextLocale:(ACMBaseLocale *)arg1 ;
-(ACMBaseLocale *)nextLocale;
-(NSDictionary *)localeStrings;
-(void)setLocaleStrings:(NSDictionary *)arg1 ;
@end

