//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTURIComponentMatcher.h"

@class NSString;

@interface SPTURILiteralComponentMatcher : SPTURIComponentMatcher
{
    NSString *_literal;
}

- (void).cxx_destruct;
- (_Bool)isEquivalent:(id)arg1;
- (id)matchComponents:(id)arg1 fromIndex:(unsigned long long)arg2 variables:(id)arg3;
- (id)initWithLiteral:(id)arg1 children:(id)arg2;

@end

