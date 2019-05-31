/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface MPBidirectionalDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSMutableDictionary* _keyToObjectDictionary;
	NSMutableDictionary* _objectToKeyDictionary;

}
+(BOOL)supportsSecureCoding;
+(id)bidirectionalDictionary;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyForObject:(id)arg1 ;
@end

