//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GIPLogCallstack.h"

@class NSArray;

@interface GIPLogSymbolCallstack : GIPLogCallstack
{
    NSArray *_symbols;
}

@property(readonly, nonatomic) NSArray *symbols; // @synthesize symbols=_symbols;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSymbolsIgnoringFrameCount:(unsigned long long)arg1;
- (id)initWithSymbols:(id)arg1;

@end

