/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MPModelKind, NSString, MPPropertySet;

@interface MPModelLibrarySearchScope : NSObject <NSCopying, NSSecureCoding> {

	shared_ptr<mlcore::LocalizedSearchScope>* _coreScope;
	MPModelKind* _itemKind;
	NSString* _name;
	MPPropertySet* _itemProperties;

}

@property (nonatomic,readonly) shared_ptr<mlcore::LocalizedSearchScope>* coreScope; 
@property (nonatomic,retain) MPModelKind * itemKind;                                             //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) MPPropertySet * itemProperties;                              //@synthesize itemProperties=_itemProperties - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPModelKind *)itemKind;
-(void)setItemKind:(MPModelKind *)arg1 ;
-(MPPropertySet *)itemProperties;
-(id)initWithItemKind:(id)arg1 name:(id)arg2 properties:(id)arg3 ;
-(shared_ptr<mlcore::LocalizedSearchScope>*)coreScope;
@end

