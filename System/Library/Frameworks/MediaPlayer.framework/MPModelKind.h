/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MPModelKind : NSObject <NSCoding, NSSecureCoding> {

	Class _modelClass;

}

@property (nonatomic,readonly) Class modelClass;              //@synthesize modelClass=_modelClass - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)kindWithModelClass:(Class)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_init;
-(shared_ptr<mlcore::Predicate>*)representedSearchScopePredicate;
-(shared_ptr<mlcore::Predicate>*)predicateWithBaseProperty:(ModelPropertyBase*)arg1 ;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
-(Class)modelClass;
@end

