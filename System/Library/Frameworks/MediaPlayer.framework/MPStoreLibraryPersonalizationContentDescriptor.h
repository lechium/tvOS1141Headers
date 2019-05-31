/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPModelObject;

@interface MPStoreLibraryPersonalizationContentDescriptor : NSObject {

	MPModelObject* _model;
	long long _personalizationStyle;

}

@property (nonatomic,readonly) MPModelObject * model;                       //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) long long personalizationStyle;              //@synthesize personalizationStyle=_personalizationStyle - In the implementation block
-(MPModelObject *)model;
-(long long)personalizationStyle;
-(id)initWithModel:(id)arg1 personalizationStyle:(long long)arg2 ;
@end

