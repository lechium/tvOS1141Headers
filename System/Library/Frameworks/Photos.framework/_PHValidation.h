/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface _PHValidation : NSObject {

	unsigned long long _requestedOptions;
	unsigned long long _validatedOptions;
	NSError* _error;

}
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)assert:(BOOL)arg1 format:(id)arg2 ;
-(void)validateOption:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)assert:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)isValid:(id*)arg1 ;
@end

