/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/_MPSectionedIdentifierListProxyEntry.h>
#import <libobjc.A.dylib/MPSectionedIdentifierListEnumerationTrackingEntry.h>

@class NSString;

@interface _MPSectionedIdentifierListTailEntry : _MPSectionedIdentifierListProxyEntry <MPSectionedIdentifierListEnumerationTrackingEntry> {

	NSString* _sectionIdentifier;

}

@property (nonatomic,readonly) NSString * sectionIdentifier;              //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long branchDepth; 
@property (nonatomic,readonly) long long entryType; 
+(id)tailEntryWithSection:(id)arg1 branchDepth:(long long)arg2 ;
-(id)trackingEntryResult;
-(NSString *)sectionIdentifier;
@end

