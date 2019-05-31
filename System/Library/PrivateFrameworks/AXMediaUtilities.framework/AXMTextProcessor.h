/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXMSpellChecker, AXMLexiconManager, AXMTagger, AXMDataDetector, AXMSpeechFormatterCache, NSDictionary, NSMutableDictionary;

@interface AXMTextProcessor : NSObject {

	AXMSpellChecker* _spellChecker;
	AXMLexiconManager* _lexiconManager;
	AXMTagger* _tagger;
	AXMDataDetector* _dataDetector;
	AXMSpeechFormatterCache* _speechFormatterCache;
	NSDictionary* _globalWhitelistedWords;
	NSMutableDictionary* _localeWhitelistedWords;

}
-(id)init;
-(id)lexiconManager;
-(id)tagger;
-(id)dataDetector;
-(id)_preprocessText:(id)arg1 ;
-(id)spellChecker;
-(id)processText:(id)arg1 withOperation:(id)arg2 ;
@end

