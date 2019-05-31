/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:14 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDateFormatter, NSString, NSArray;

@interface PLSearchIndexDateFormatter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSDateFormatter* _dateFormatter;
	NSString* _yearFormat;
	NSString* _monthFormat;
	NSString* _displayFormat;
	NSString* _parseFormat;
	NSArray* _monthSymbols;
	BOOL _localeDidChange;

}
-(id)init;
-(void)dealloc;
-(id)newLocalizedComponentsFromDate:(id)arg1 includeMonth:(BOOL)arg2 ;
-(id)localizedMonthStringsFromDate:(id)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
-(id)_arrangedMonthSymbols;
-(void)_inqSetupDateFormatter;
-(void)_inqUpdateDateFormat:(id)arg1 ;
-(id)_inqNewLocalizedStringFromDate:(id)arg1 ;
-(id)newLocalizedStringFromDate:(id)arg1 ;
-(id)newLocalizedStringFromYear:(id)arg1 month:(id)arg2 ;
@end

