/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMDCoreRecentsProtocol;
@class NSObject;

@interface IMDCoreSpotlightDispatchObject : NSObject {

	BOOL _allowsOverrideOfObjects;
	BOOL _shouldAddToSuggestions;
	BOOL _shouldAddToSpotlight;
	BOOL _shouldAddToCoreRecents;
	NSObject*<IMDCoreRecentsProtocol> _recentsInstance;

}

@property (assign,nonatomic) NSObject*<IMDCoreRecentsProtocol> recentsInstance;              //@synthesize recentsInstance=_recentsInstance - In the implementation block
@property (assign,nonatomic) BOOL allowsOverrideOfObjects;                                   //@synthesize allowsOverrideOfObjects=_allowsOverrideOfObjects - In the implementation block
@property (assign,nonatomic) BOOL shouldAddToSuggestions;                                    //@synthesize shouldAddToSuggestions=_shouldAddToSuggestions - In the implementation block
@property (assign,nonatomic) BOOL shouldAddToSpotlight;                                      //@synthesize shouldAddToSpotlight=_shouldAddToSpotlight - In the implementation block
@property (assign,nonatomic) BOOL shouldAddToCoreRecents;                                    //@synthesize shouldAddToCoreRecents=_shouldAddToCoreRecents - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)contactStoreDidChange:(id)arg1 ;
-(NSObject*<IMDCoreRecentsProtocol>)recentsInstance;
-(void)setRecentsInstance:(NSObject*<IMDCoreRecentsProtocol>)arg1 ;
-(BOOL)allowsOverrideOfObjects;
-(void)setAllowsOverrideOfObjects:(BOOL)arg1 ;
-(BOOL)shouldAddToSuggestions;
-(void)setShouldAddToSuggestions:(BOOL)arg1 ;
-(BOOL)shouldAddToSpotlight;
-(void)setShouldAddToSpotlight:(BOOL)arg1 ;
-(BOOL)shouldAddToCoreRecents;
-(void)setShouldAddToCoreRecents:(BOOL)arg1 ;
@end

