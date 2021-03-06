/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _MPSparseArrayNode : NSObject <NSSecureCoding> {

	unsigned long long _relativeOffset;
	id _object;

}

@property (assign,nonatomic) unsigned long long relativeOffset;              //@synthesize relativeOffset=_relativeOffset - In the implementation block
@property (nonatomic,retain) id object;                                      //@synthesize object=_object - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)setRelativeOffset:(unsigned long long)arg1 ;
-(id)initWithRelativeOffset:(unsigned long long)arg1 object:(id)arg2 ;
-(unsigned long long)relativeOffset;
@end

