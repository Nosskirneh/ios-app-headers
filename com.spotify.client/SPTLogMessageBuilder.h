//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableString;

@interface SPTLogMessageBuilder : NSObject
{
    BOOL _curSeparator;
    const char *_alsoEscape;
    NSMutableString *_message;
}

+ (id)builderWithMessageID:(id)arg1 version:(long long)arg2;
@property(retain, nonatomic) NSMutableString *message; // @synthesize message=_message;
@property(nonatomic) const char *alsoEscape; // @synthesize alsoEscape=_alsoEscape;
@property(nonatomic) BOOL curSeparator; // @synthesize curSeparator=_curSeparator;
- (void).cxx_destruct;
- (void)appendDictionary:(id)arg1;
- (void)appendData:(id)arg1;
- (void)appendListItem:(id)arg1 forAggregateType:(id)arg2;
- (void)appendList:(id)arg1;
- (void)appendDouble:(double)arg1;
- (void)appendString:(id)arg1;
- (void)appendLongLong:(long long)arg1;
- (void)appendBoolean:(_Bool)arg1;
- (id)result;
- (id)initWithMessageID:(id)arg1 version:(long long)arg2;

@end

