//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTVoiceLibraryIntermediateResponse : NSObject
{
    _Bool _isFinal;
    _Bool _isEndOfSpeech;
    NSString *_transcript;
    double _score;
}

@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) _Bool isEndOfSpeech; // @synthesize isEndOfSpeech=_isEndOfSpeech;
@property(readonly, nonatomic) _Bool isFinal; // @synthesize isFinal=_isFinal;
@property(readonly, copy, nonatomic) NSString *transcript; // @synthesize transcript=_transcript;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

