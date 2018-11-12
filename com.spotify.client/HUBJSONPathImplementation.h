//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HUBJSONBoolPath-Protocol.h"
#import "HUBJSONDictionaryPath-Protocol.h"
#import "HUBJSONIntegerPath-Protocol.h"
#import "HUBJSONStringPath-Protocol.h"
#import "HUBJSONURLPath-Protocol.h"

@class NSArray;

@interface HUBJSONPathImplementation : NSObject <HUBJSONBoolPath, HUBJSONIntegerPath, HUBJSONStringPath, HUBJSONURLPath, HUBJSONDictionaryPath>
{
    NSArray *_parsingOperations;
}

@property(readonly, nonatomic) NSArray *parsingOperations; // @synthesize parsingOperations=_parsingOperations;
- (void).cxx_destruct;
- (id)valuesByPerformingParsingOperation:(id)arg1 withInputValues:(id)arg2;
- (id)dictionaryFromJSONDictionary:(id)arg1;
- (id)URLFromJSONDictionary:(id)arg1;
- (id)stringFromJSONDictionary:(id)arg1;
- (long long)integerFromJSONDictionary:(id)arg1;
- (_Bool)boolFromJSONDictionary:(id)arg1;
- (id)mutableCopy;
- (id)valuesFromJSONDictionary:(id)arg1;
- (id)initWithParsingOperations:(id)arg1;

@end

