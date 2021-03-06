//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PDLQueryCallbackInfoMetadata;

@interface PDLQueryCallbackInfo : NSObject
{
    _Bool _hasMoreCallbacks;
    _Bool _containsPartialResults;
    NSArray *_autocompletions;
    unsigned long long _callbackNumber;
    PDLQueryCallbackInfoMetadata *_metadata;
}

@property(readonly, nonatomic) PDLQueryCallbackInfoMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) _Bool containsPartialResults; // @synthesize containsPartialResults=_containsPartialResults;
@property(readonly, nonatomic) _Bool hasMoreCallbacks; // @synthesize hasMoreCallbacks=_hasMoreCallbacks;
@property(readonly, nonatomic) unsigned long long callbackNumber; // @synthesize callbackNumber=_callbackNumber;
@property(readonly, nonatomic) NSArray *autocompletions; // @synthesize autocompletions=_autocompletions;
- (void).cxx_destruct;
- (id)initWithAutocompletions:(id)arg1 callbackNumber:(unsigned long long)arg2 hasMoreCallbacks:(_Bool)arg3 containsPartialResults:(_Bool)arg4 metadata:(id)arg5;

@end

